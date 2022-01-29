#include <stdio.h>
#include <stdbool.h>

bool isBissexto(int n) {

  if(n%400 == 0 || (n%4 == 0 && n%100 != 0)) return true;
  return false;
}

int main() {

  int a, b;
  scanf("%d %d", &a, &b);

  for(int i = a; i <=b; i++) {
    if(isBissexto(i)) {
      printf("%d ", i);
    }
  }
  printf("\n");

  return 0;
}
