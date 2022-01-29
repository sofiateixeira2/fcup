#include <stdio.h>

void range(int vec[], unsigned size, int inicio, int incr) {

  for(int i=0; i<size; i++) {
    vec[i]=inicio+i*incr;
    printf("%d\n", vec[i]);
  }
   return;
}

int main() {

  int vec[100], inicio=3, incr=2;
  unsigned size=5;

  range(vec, size, inicio, incr);

  return 0;
}
