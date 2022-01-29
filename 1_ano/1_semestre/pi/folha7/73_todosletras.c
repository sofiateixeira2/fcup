#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define  MAX_SIZE 100

int todos_letras(char str[]) {

  int c=0;
  c=strlen(str)-2;

  for(int i=0; i<=c; i++) {
    if(!(isalpha(str[i]))) {
      return 0;
    }
  }

  return 1;
}

int main() {

  char str[MAX_SIZE];

  printf("Introduza a frase:\n");
  fgets(str, MAX_SIZE, stdin);

  printf("%d\n", todos_letras(str));

  return 0;
}
