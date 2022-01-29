#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int flag = 0;
  char line[100];
  FILE *f;
  int m = atof(argv[1]);
  int n = atof(argv[2]);
  int count = 0, nline = 1, fl = 0;
  int temp = 0;


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
  
  while(fgets(line, 100, f) != NULL) {
    count++;
    if(nline == m && fl == 0) {
      printf("%s", line);
      fl++;
      count = 0;
    } else nline++;
    if(nline > m && count == n) {
      printf("%s", line);
    }
    if(count == n) count = 0;
  }

  if(f != stdin) {
    fclose(f);
  }

  return 0;
}
