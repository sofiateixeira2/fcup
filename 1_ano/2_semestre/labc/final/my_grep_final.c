#include <stdio.h>
#include <string.h>

void write(char *line, FILE *f, char *argv[]) {
  while(fgets(line, 100, f) != NULL) {
    if(strstr(line, argv[0]) != NULL) {
      printf("%s", line);
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
  int flag = 0;
  char c;

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
        write(line, f, argv);
      } else if(i>0 && (f = fopen(argv[i], "r")) == NULL) {
        fprintf(stderr, "./my_grep: <%s>: No such file or directory\n", argv[i]);
        continue;
      } else if(i > 0 || argc == 2) {
        if(argc == 2)
          f= stdin;

        write(line, f, argv);

        }
      }
    }

  return 0;
}
