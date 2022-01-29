#include <stdio.h>
#include <string.h>
#include <limits.h>

void print(char s[]) {

  int size = strlen(s);

  for(int i = size - 2; i >= 0; i--) {
    printf("%c", s[i]);
  }
  printf("\n");

  return;
}

int main() {

  char s[100];

  while(fgets(s, 100, stdin) != NULL) {
    print(s);
  }

  return 0;
}
