#include <stdio.h>

#define   MAX_SIZE  4

int calc(char str[]) {

  int a, b, r=0;

  a=str[0] - '0';
  b=str[2] - '0';

  switch (str[1]) {
    case '+':
      r=a+b;
      break;
    case '-':
      r=a-b;
      break;
    case '*':
      r=a*b;
      break;
  }

  return r;
}

int main() {

  char str[MAX_SIZE];

  printf("Introduza o cálculo:\n");
  fgets(str, MAX_SIZE, stdin);

  printf("%d\n", calc(str));

  return 0;
}
