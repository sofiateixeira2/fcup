#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE  100

int scrabble(char str[]) {

  int c=0, p=0;

  c=strlen(str);

  for(int i=0; i<c; i++) {
    char ch=str[i];
    switch (toupper(ch)) {
      case 'A': case 'E': case 'I': case 'L': case 'N':
      case 'O': case 'R': case 'T': case 'S': case 'U':
        p=p+1;
        break;
      case 'D': case 'G':
        p=p+2;
        break;
      case 'B': case 'C': case 'M': case 'P':
        p=p+3;
        break;
      case 'F': case 'H': case 'V': case 'W': case 'Y':
        p=p+4;
        break;
      case 'K':
        p=p+5;
        break;
      case 'J': case 'X':
        p=p+8;
        break;
      case 'Q': case 'Z':
        p=p+10;
        break;
    }
  }

  return p;
}

int main() {

  char str[MAX_SIZE];

  printf("Introduza a palavra\n");
  fgets(str, MAX_SIZE, stdin);

  printf("Pontos: %d\n", scrabble(str));

  return 0;
}
