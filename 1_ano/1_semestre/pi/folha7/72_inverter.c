#include <stdio.h>
#include <string.h>

#define MAX_SIZE  100

void palindromo(char str[]) {

  int i=0;
  int j=strlen(str)-2;

  while(j>i) {
    if (str[i++]!=str[j--]) {
      printf("Não é palindromo\n");
      return;
    }
  }

  printf("É palindromo\n");

  return;
}

int main() {

  char str[MAX_SIZE];

  printf("Introduza a frase:\n");
  fgets(str, MAX_SIZE, stdin);

  palindromo(str);

  return 0;
}
