#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {

  FILE* f;
  f = fopen(argv[2], "r");

  char* s = (char*)malloc(sizeof(char));
  char c;
  int l = 0, ch = 0;
  while((c = getc(f)) != EOF) {
    if(c == '\n') l++;
    ch++;
    strncat(s, &c, 1);
    if(strcmp(s, argv[1]) == 0) {
      int sz = strlen(s);
      printf("%d %d\n", ch-sz, l+1);
      *s = '\0';
    }
  }

  fclose(f);

  return 0;
}
