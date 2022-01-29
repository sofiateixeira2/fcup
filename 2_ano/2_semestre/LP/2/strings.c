#include <stdio.h>
#include <stdlib.h>

int strlen_cost(char* s) {

  int i;
  for(i = 0; *(s+i) != '\0'; i++);

  return i;
}

void strcpy_cost(char* dest, char* src) {

  for(int i = 0; i < strlen_cost(src); i++) {
    *(dest + i) = *(src + i);
  }

  return;
}

int main() {

  char *s;
  s = (char*) malloc(sizeof(char));

  char c; int i = 0;
  while((c = getchar()) != '\n') {
    s[i++] = c;
  }

  printf("strlen: %d\n", strlen_cost(s));

  char *s2 = "Hello";
  printf("s2: %s\n", s2);
  s2 = (char*) malloc(sizeof(char));

  strcpy_cost(s2, s);

  printf("strcpy: %s\n", s2);

  return 0;
}
