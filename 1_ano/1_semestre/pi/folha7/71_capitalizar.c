#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE  100

void capitalizar(char str[]) {

  int c=0;

  c=strlen(str)-1;

  for(int i=0; i<c; i++) {
    char ch=str[i];
    ch=toupper(ch);
    str[i]=ch;
  }

  printf("%s", str);

  return;
}

int main() {

  char str[MAX_SIZE];

  printf("Introduza a frase:\n");
  fgets(str, MAX_SIZE, stdin);

  capitalizar(str);

  return 0;
}
