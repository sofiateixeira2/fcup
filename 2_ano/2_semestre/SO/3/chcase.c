#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char* argv[]) {

  //printf("%d\n", argc);

  if(argc == 2) {
    FILE* f;
    f = fopen(argv[1], "r");
    char c;
    while((c = getc(f)) != EOF)
      printf("%c", c);
    fclose(f);
  } else {
    if(strcmp(argv[1], "-u") == 0) {
      for(int i = 2; i < argc; i++) {
        FILE* f;
        f = fopen(argv[i], "r");
        char c;
        while((c = getc(f)) != EOF)
          printf("%c", toupper(c));
        fclose(f);
      }
    } else {
      for(int i = 2; i < argc; i++) {
        FILE* f;
        f = fopen(argv[i], "r");
        char c;
        while((c = getc(f)) != EOF)
          printf("%c", tolower(c));
        fclose(f);
      }
    }
  }

  return 0;
}
