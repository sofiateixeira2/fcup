#include <stdio.h>

int main() {
  int x[3]={23, 41, 17};

  printf("%d\n", x[0]);
  printf("%d\n", x[1]);
  printf("%d\n", x[2]);
  printf("%p\n", x);
  printf("%d\n", *x);
  printf("%p\n", x+1);
  printf("%d\n", *(x+1));
  printf("%p\n", x+2);
  printf("%d\n", *(x+2));
  printf("%p\n", &(x[0]));
  printf("%d\n", *&(x[0]));
  //printf("%p\n", &*(x[0])); -> erro

  return 0;
}
