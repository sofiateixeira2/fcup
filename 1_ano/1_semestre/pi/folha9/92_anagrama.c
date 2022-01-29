#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

void ordenar(char str[]) {

  int size;

  size=strlen(str)-1;

  for(int i=0; i<size; i++) {
    int imin=i;
    for(int j=i+1; j<size; j++) {
      if(str[j]<str[imin]) {
        imin=j;
      }
    }

    if (imin!=i) {
      int temp=str[i];
      str[i]=str[imin];
      str[imin]=temp;
    }
  }

  return;
}

int anagramas(char str1[], char str2[]) {

  ordenar(str1);
  ordenar(str2);

  if(strcmp(str1, str2)==0) {
    return 1;
  }

  return 0;
}

int main() {

  char str1[MAX_SIZE], str2[MAX_SIZE];

  printf("Introduza as palavras (com o mesmo tamanho):\n");
  fgets(str1, MAX_SIZE, stdin);
  fgets(str2, MAX_SIZE, stdin);

  int r=anagramas(str1, str2);

  printf("%d\n", r);

  return 0;
}
