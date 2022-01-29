#define _GNU_SOURCE
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

void write_line(char *line, FILE *f, char *argv[], int i, bool iopt, bool lopt, bool copt, bool vopt) {

  int count = 0;



while(fgets(line, 100, f) != NULL) {
  if(iopt == true) {
    if(vopt == true) {
      if(strcasestr(line, argv[0]) == NULL) {
        count++;
        if(lopt == true) {
          if(f == stdin) {
            printf("(standard input)\n");
            break;
          } else {
            printf("%s\n", argv[i]);
            break;
          }
        } else if(copt == false) {
          printf("%s", line);
        }
      } else {continue;}
    } else {
      if(strcasestr(line, argv[0]) != NULL) {
        count++;
        if(lopt == true) {
          if(f == stdin) {
            printf("(standard input)\n");
            break;
          } else {
            printf("%s\n", argv[i]);
            break;
          }
        } else if(copt == false) {
          printf("%s", line);
        }
      } else {continue;}
    }
  } else {
    if(vopt == true) {
      if(strstr(line, argv[0]) == NULL) {
        count++;
        if(lopt == true) {
          if(f == stdin) {
            printf("(standard input)\n");
            break;
          } else {
            printf("%s\n", argv[i]);
            break;
          }
        } else if(copt == false) {
          printf("%s", line);
        }
      } else {continue;}
    } else {
      if(strstr(line, argv[0]) != NULL) {
        count++;
        if(lopt == true) {
          if(f == stdin) {
            printf("(standard input)\n");
            break;
          } else {
            printf("%s\n", argv[i]);
            break;
          }
        } else if(copt == false) {
          printf("%s", line);
        }
      } else {continue;}
    }
  }
}







  /*while(fgets(line, 100, f) != NULL) {
    if(strstr(line, argv[0]) != NULL) {
      count++;
      if(iopt == true) {
        if(strcasestr(line, argv[0]) != NULL)
          printf("%s\n", line);

      } else if(lopt == true) {

        if(f == stdin) {
          printf("(standard input)\n");
          break;
        } else {
          printf("%s\n", argv[i]);
          break;
        }

      } else if(copt == false){
        printf("%s", line);
      }
    } else {
      continue;
    }
  } */
  if(copt == true)
    printf("%d\n", count);

  if(f != stdin)
    fclose(f);
}

int main(int argc, char *argv[]) {

  FILE *f;
  char line[100];
  int flag = 0, opt;
  char c;
  bool iopt = false, lopt = false, copt = false, vopt = false;

  while((opt = getopt(argc, argv, "ilcv")) != -1) {
    switch(opt) {
      case 'i':
        iopt = true; --argc; ++argv;
        break;
      case 'l':
        lopt = true; --argc; ++argv;
        break;
      case 'c':
        copt = true; --argc; ++argv;
        break;
      case 'v':
        vopt = true; --argc; ++argv;
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

  return 0;
}
