#include <stdio.h>
#include <stdlib.h>

int* readarray(int n) {
  int i;
  int *v = malloc(sizeof(int) * n);
  for(i=0; i<n; i++) {
    scanf("%d", &(*(v+1)));
  }

  return v;
}

int* somaarray(int *a, int *b, int n) {
  int *v = malloc(sizeof(int) * n);
  for(int i = 0; i<n; i++) {
    *(v+i) = *(a+i) + *(b+i);
  }

  return v;
}

void printarray(int *v, int n) {
  for(int i=0; i<n; i++) {
    printf("%d ", *(v+i));
  }
  printf("\n");
}

int main() {
  int n ;
  int *va, *vb, *vr;
  scanf("%d", &n);
  va = readarray(n);
  vb = readarray(n);
  vr = somaarray(va, vb, n);
  printarray(va, n);
  printarray(vb, n);
  printarray(vr, n);
  return 0;
}
