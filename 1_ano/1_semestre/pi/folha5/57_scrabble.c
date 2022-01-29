#include <stdio.h>
#include <ctype.h>

int main(void) {

  int ch, p=0;

  printf("Introduza a sua palavra:\n");

  while ((ch=getchar())!=EOF) {
  switch(toupper(ch)){
    case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'T': case 'S': case 'U':
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

  printf("Tem %d pontos\n", p);

  return 0;

}
