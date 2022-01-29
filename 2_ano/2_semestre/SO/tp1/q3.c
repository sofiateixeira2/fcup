#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>
#include <ctype.h>

char *read_file() {
  char *str = (char*) malloc(1000*sizeof(char));
  char *ans = (char*) malloc(1000*sizeof(char));
  while(fgets(str, 1000, stdin) != NULL)
    strcat(ans, str);
  return ans;
}

int main(int argc, char *argv[]) {

  int parent_fd[2], child_fd[2];
  pid_t pid;
  //parent_fd - parent to child
  //child_fd - child to parent

  if(pipe(parent_fd) != 0 || pipe(child_fd) != 0) {
    printf("An error has ocurred\n");
    return 1;
  }

  pid = fork();

  if(pid < 0) {
    printf("An error has ocurred\n");
    return 2;
  } else if(pid == 0) {
    //child process
    close(child_fd[0]);
    close(parent_fd[1]);

    char *from_parent = (char*) malloc(1000*sizeof(char));
    read(parent_fd[0], from_parent, 1000);
    char c;
    for(int i = 0; i < strlen(from_parent); i++) {
      c = toupper(from_parent[i]);
      from_parent[i] = c;
    }
    write(child_fd[1], from_parent, 1000);

    close(child_fd[1]);
    close(parent_fd[0]);

  } else {
    //parent process
    close(child_fd[1]);
    close(parent_fd[0]);

    char *str = (char*) malloc(1000*sizeof(char));
    strcat(str, read_file());

    write(parent_fd[1], str, 1000);
    char *from_child = (char*) malloc(1000*sizeof(char));
    read(child_fd[0], from_child, 1000);
    printf("%s", from_child);

    close(child_fd[0]);
    close(parent_fd[1]);
    wait(NULL);
  }


  return 0;
}
