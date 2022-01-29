#include <stdio.h>
#include <assert.h>

int mdc(int a, int b) {

  assert(a>0 && b>0);

  while(a!=b) {
    if(a>b) {
      a=a-b;
    } else {
      b=b-a;
    }
  }

  return a;
}

int main() {

  int a, b;

  printf("Introduza dois valores:\n");
  scanf("%d %d", &a, &b);

  printf("mdc(%d,%d)=%d\n", a, b, mdc(a,b));

  return 0;
}
