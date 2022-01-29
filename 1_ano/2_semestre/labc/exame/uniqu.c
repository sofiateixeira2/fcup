#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {

  FILE *f;
  int flag = 0;
  char line[100];
  int temp = 0;
  int count = 1;
  char prev[100];
  char last[100];
  bool tflag = true;

  if(argc < 2) {
    argc = 2;
    flag++;
  }

  for(int i=1; i<argc; i++) {

    if((flag || ((*++argv)[0] == '-' && (*argv)[1] == '\0'))) {
      f = stdin;
    } else if((f = fopen(*argv, "r")) == NULL) {
      fprintf(stderr, "./my_cat: <%s>: No such file or directory\n", *argv);
      if(temp > 0)
        continue;
      else
        f = stdin;
    }
  }

  fgets(prev, 100, f);

  while(tflag) {
    if(fgets(line, 100, f) == NULL) {
      break;
    } else {
      if(strcmp(prev, line) == 0) {
        count++;
        //printf("igual\n");
      }
      if(strcmp(prev, line) != 0) {
        //printf("nao igual\n");
        if(count > 1)
        continue;
        else {
          printf("%s", prev);
          count = 1;
        }
      }
      strcpy(last, prev);
      strcpy(prev, line);
    }
  }

  if(strcmp(last, line) != 0 && count == 1) printf("%s", line);

  return 0;
}
