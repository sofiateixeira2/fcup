#include <stdio.h>
#include <ctype.h>

int main() {

  int ch, a[26] = {0}, i;

  while((ch=toupper(getchar())) != '\n') {
    if(ch >= 'A' && ch <= 'Z') {
      i= ch-'A';
      a[i]++;
    }
  }

  for(int k=0; k<26; k++) {
    printf("%c: %d; ", 'A'+k, a[k]);
  }

  printf("\n");

  return 0;
}
