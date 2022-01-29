#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char *argv[]) {

  int flag = 0;
  char c;
  FILE *f;
  int temp = 0, opt, count = 1;;
  bool cLines = false, cEmptyLines = false, cDelete = false;

  while((opt = getopt(argc, argv, "nbs")) != -1) {
    switch(opt) {
      case 'n':
        cLines = true;
        break;
      case 'b':
        cEmptyLines = true;
        break;
      case 's':
        cDelete = true;
        break;
    }
  }

  if(argc < 2) {
    argc = 2;
    flag++;
  } else {
    for(; optind < argc; optind++)
      temp++;
  }

  for(int i=1; i<argc; i++) {
    int empty = 0, last = '\n';

    if((flag || ((*++argv)[0] == '-' && (*argv)[1] == '\0'))) {
      f = stdin;
    } else if((f = fopen(*argv, "r")) == NULL) {
      if(!(!strcmp(*argv, "-n") || !strcmp(*argv, "-b") || !strcmp(*argv, "-s")))
        fprintf(stderr, "./my_cat: <%s>: No such file or directory\n", *argv);
      if(temp > 0)
        continue;
      else
        f = stdin;
    }


    while((c = getc(f)) != EOF) {

      if(cDelete && c == '\n' && empty > 0) continue;
      else if(last == '\n' && c == '\n') empty++;
      else if(c != '\n') empty = 0;

      if((cLines || cEmptyLines) && last == '\n') {
        if(cEmptyLines && c == '\n') {
          printf("\n");
          continue;
        } else {
          printf("ola2\n");
          printf("%6d\t", count++);
        }
      }
      printf("ola\n");
      printf("%c", c);
      last = c;

    }

    if(f != stdin) {
      fclose(f);
    }
  }
  return 0;
}
