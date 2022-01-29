#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

void write_line(char *line, FILE *f, char *argv[], bool iopt) {

  while(fgets(line, 100, f) != NULL) {
    if(strcasestr(line, argv[0]) != NULL) {
      if(iopt == true) {
        printf("%s", line);
      } else {
        printf("%s", line);
      }
    } else {
      continue;
    }
  }
  if(f != stdin)
    fclose(f);
}

int main(int argc, char *argv[]) {

  FILE *f;
  char line[100];
  int flag = 0, opt;
  char c;
  bool iopt = false;

  while((opt = getopt(argc, argv, "i")) != -1) {
    switch(opt) {
      case 'i':
        iopt = true;
        --argc;
        ++argv;
        break;
    }
  }

  if(argc < 2) {
    argc = 2;
    flag++;
  }

  if(flag || ((*++argv)[0] == '-' && (*argv)[1] == '\0')) {
    f = stdin;
    while((c = getc(f)) != EOF) {}
  } else {
    for(int i = 0; i < argc-1; i++) {
      if(*argv[i] == '-') {
        f = stdin;
        write_line(line, f, argv, iopt);
      } else if(i>0 && (f = fopen(argv[i], "r")) == NULL) {
        fprintf(stderr, "./my_grep: <%s>: No such file or directory\n", argv[i]);
        continue;
      } else if(i > 0 || argc == 2) {
        if(argc == 2)
          f= stdin;
        write_line(line, f, argv, iopt);
      }
    }
  }

  return 0;
}
