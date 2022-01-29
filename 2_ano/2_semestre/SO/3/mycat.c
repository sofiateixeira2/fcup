#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {

  for(int i = 1; i < argc; i++) {
    FILE* f;
    f = fopen(argv[i], "r");
    char c;
    while((c = getc(f)) != EOF)
      printf("%c", c);
    fclose(f);
  }

  return 0;
}
