#include <stdio.h>

int main(int argc, char *argv[]) {

  int flag = 0;
  char c;
  FILE *f;

  if(argc<2) {
    argc = 2;
    flag++;
  }

  for(int i = 1; i < argc; i++) {
    if((flag || ((*++argv)[0] == '-' && (*argv)[1] == '\0'))) {
      f = stdin;
    } else if ((f = fopen(*argv, "r")) == NULL) {
      fprintf(stderr, "./my_cat: <%s>: No such file or directory\n", argv[i]);
      continue;
    }
    while((c = getc(f)) != EOF) {
      putchar(c);
    }
    if(f != stdin) {
      fclose(f);
    }
  }
  return 0;
}
