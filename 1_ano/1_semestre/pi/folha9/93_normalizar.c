#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE  100

void normalizar(char str[]) {

  int size;

  size = strlen(str)-1;

  //organizar letras, pontuação e espaços

  for(int i=0; i<size; i++) {
    int imin=i;
    for(int j=i+1; j<size; j++) {
      if(str[j]<str[imin]) {
        imin=j;
      }
    }
    if(imin!=i) {
      int temp=str[i];
      str[i]=str[imin];
      str[imin]=temp;
    }
  }
}

void eliminar(char str[]) {

  int size;
  size=strlen(str)-1;

  for(int i=0; i<size; i++){
    char ch=str[i];
    if (!(isalpha(ch))) {
      continue;
    } else {
      for(int j=0; j<size; j++){
        str[j]=ch;
      }
    }
  }

  return;
}

void letras(char str[]) {

  int size;
  size=strlen(str)-1;

  for(int i=0; i<size; i++) {
    char ch=str[i];
    ch=tolower(ch);
    str[i]=ch;
  }

  return;
}

int anagrama(char str1[], char str2[]) {

  if(strcmp(str1, str2)==0){
    return 1;
  }

  return 0;
}

int main() {

  char str1[MAX_SIZE], str2[MAX_SIZE];

  printf("Introduza as frases:\n");
  fgets(str1, MAX_SIZE, stdin);
  fgets(str2, MAX_SIZE, stdin);

  normalizar(str1);
  normalizar(str2);
  eliminar(str1);
  eliminar(str2);
  letras(str1);
  letras(str2);

  printf("%d\n", anagrama(str1, str2));

  return 0;
}
