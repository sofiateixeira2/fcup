#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE  100

int algum_digito(char str[]) {

  int c=0;
  c=strlen(str)-1;

  for(int i=0; i<c; i++) {
    if(isdigit(str[i])) {
      return 1;
    }
  }

  return 0;
}

int main() {

  char str[MAX_SIZE];

  printf("Introduza a palavra\n");
  fgets(str, MAX_SIZE, stdin);

  printf("%d\n", algum_digito(str));

  return 0;
}
