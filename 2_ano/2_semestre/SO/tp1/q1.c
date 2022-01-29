#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

int main(int argc, char *argv[]) {
  FILE *f;
  char *input = argv[1];
  char word[MAX], c;
  int line = 0, col = 0, i = 0;

  f = fopen(argv[2], "r");

  while((c = fgetc(f)) != EOF) {
    if(c == ' ' || c == '\n') { //new word
      ++col;
      if(strcmp(word, input) == 0)
        printf("[%d:%ld]\n", line+1, col-strlen(word));
      memset(word, 0, MAX);
      i = 0;
    } else { //word ot finished
      word[i++] = c;
      ++col;
    }
    if(c == '\n') { //new line
      line++;
      col = 0;
    }
  }

  fclose(f);

  return 0;
}
