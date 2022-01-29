#include <stdio.h>
#include <ctype.h>

int main(void) {

  int ch;
  int letras=0;

  printf("Introduza uma frase (sem acentos)\n");

  while((ch=getchar())!='\n') {
    if (isalpha(ch))
    letras++;
  }

  printf("O número total de letras é: %d\n", letras);

  return 0;

}
