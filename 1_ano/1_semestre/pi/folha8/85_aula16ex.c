#include <stdio.h>

#define MAX_SIZE  100

void decrescente(int vec[], int size) {

  for(int i=0; i<size; i++) {
    int imax=i;
    for (int j=i+1; j<size; j++) {
      if (vec[j]>vec[imax]) {
        imax=j;
      }
    }

    if(imax!=i) {
      int temp=vec[i];
      vec[i]=vec[imax];
      vec[imax]=temp;
    }
  }

  return;
}

int main() {

  int vec[MAX_SIZE], size;

  printf("Introduza o tamanho do vetor:\n");
  scanf("%d", &size);

  printf("Introduza agora os valores do vetor:\n");
  for(int i=0; i<size; i++) {
    scanf("%d", &vec[i]);
  }

  printf("\n");

  decrescente(vec, size);

  for(int j=0; j<size; j++) {
    printf("%d ", vec[j]);
  }

  printf("\n");

  return 0;
}
