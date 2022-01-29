#include <stdio.h>

#define MAX_SIZE 100

void crescente (int vec[], int size) {

  for(int i=0; i<size; i++) {
    int imin=i;
    for(int j=i+1; j<size; j++) {
      if (vec[j]<vec[imin]) {
        imin=j;
      }
    }

    if (imin!=i) {
      int temp=vec[i];
      vec[i]=vec[imin];
      vec[imin]=temp;
    }
  }

  return;
}

int main() {

  int vec[MAX_SIZE], size, i;

  printf("Introduza os valores do vetor (0 termina):\n");

  for(i=0; i<MAX_SIZE; i++) {
    scanf("%d", &vec[i]);
    if (vec[i]==0) {
      break;
    }
  }

  size=i;

  crescente(vec, size);

  printf("\n");

  for(int j=0; j<i; j++) {
    printf("%d ", vec[j]);
  }

  printf("\n");

  return 0;
}
