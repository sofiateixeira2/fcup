#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  FILE *f;
  char line[100];
  int flag = 0;
  int m = atof(argv[1]);
  int n = atof(argv[2]);
  int k = 0;

  if(argc < 4) {
    argc = 4;
    flag++;
  }

  if(m > n) {
    printf("Argumentos trocados?\n");
    return 0;
  }

  for(int i = 1; i < argc; i++) {
    if((flag || ((*++argv)[0] == '-' && (*argv)[1] == '\0'))) {
      f = stdin;
    } else if((f = fopen(*argv, "r")) == NULL && i == 3) {
      fprintf(stderr, "./my_cat: <%s>: No such file or directory\n", *argv);
      continue;
    }

  }

  while(fgets(line, 100, f) != NULL) {
    k++;
    if(k == m && k < n) {
      printf("%s", line);
      m++;
    }
  }

  fclose(f);

  return 0;
}
