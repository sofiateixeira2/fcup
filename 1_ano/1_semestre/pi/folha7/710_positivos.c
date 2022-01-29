#include <stdio.h>
#include <string.h>

#define MAX_SIZE  100

int filtrar_positivos(int vec[], int size) {

  int k=0;

  for(int i=0; i<size; i++) {
    if (vec[i]>0) {
      vec[k++]=vec[i];
    }
  }

  return k;
}

int main() {

  int v[5]={-1, -2, 4, 7, 8}, s;

  s = filtrar_positivos(v, 5);

  for(int k=0; k<s; k++) {
    printf("%d ", v[k]);
  }

  printf("\n");

  return 0;
}
