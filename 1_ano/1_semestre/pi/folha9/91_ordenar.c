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

int main() {

  char str[MAX_SIZE];

  printf("Introduza uma palavra:\n");
  fgets(str, MAX_SIZE, stdin);

  ordenar(str);

  printf("%s\n", str);

  return 0;
}
