#include <stdio.h>
#define VALUE 10

int main() {
  int i = 0, mult_table[10];

  for(int i = 0; i < 10; i++) {
    mult_table[i] = i * VALUE;
    printf("%d ", mult_table[i]);
  }
  printf("\n");

  return 0;
}
