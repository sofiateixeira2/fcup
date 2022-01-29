#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE  100

void eliminar(char str[], char ch) {

  int i=0;

  while(str[i]!=ch) {
    i++;
  }

  while(str[i]!='\0') {
    str[i]=str[i+1];
    i++;
  }

  return;
}

int main() {

  char str[MAX_SIZE], ch;

  printf("Introduza a palavra:\n");
  fgets(str, MAX_SIZE, stdin);

  printf("Introduza o caracter a eliminar:\n");
  ch=getchar();

  eliminar(str, ch);

  printf("%s", str);

  return 0;
}
