#include <stdio.h>

int main(int argc, char *argv[]) {

  FILE *f;
  char c;
  int opt, flag = 0;

  while((opt = getopt(argc, argv, "bdf")) != -1) {
    switch(opt) {
      case 'b':
        bopt = true;
        break;
      case 'd':
        dopt = true;
        break;
      case 'f':
        fopt = true;
        break;
    }
  }

  if(argc < 2) {
    argc = 2;
    flag++;
  } else {
      for(; optind < argc; optind++)
        temp2++;
  }

  if(flag || ((*++argv)[0] == '-' && (*argv)[1] == '\0')) {
    f = stdin;
    while((c = getc(f)) != EOF) {}
  } else {
    for(int i = 0; i < argc-1; i++) {
      if(*argv[i] == '-') {
        f = stdin;
        write_line(line, f, argv, i, iopt, lopt, copt, vopt);
      } else if(i>0 && (f = fopen(argv[i], "r")) == NULL) {
        fprintf(stderr, "./my_grep: <%s>: No such file or directory\n", argv[i]);
        continue;
      } else if(i > 0 || argc == 2) {
        if(argc == 2)
          f= stdin;
        write_line(line, f, argv, i, iopt, lopt, copt, vopt);
      }
    }
  }


    while((c = getc(f)) != EOF) {

    }


}
