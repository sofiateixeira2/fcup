#include <stdio.h>

#define MAX_SIZE  100

int segundo_menor(int vec[], int size) {

  for(int i=0; i<size; i++) {
    int imin=i;
    for(int j=i+1; j<size; j++) {
      if(vec[j]<vec[imin]) {
        imin=j;
      }
    }

    if(imin!=i) {
      int temp=vec[i];
      vec[i]=vec[imin];
      vec[imin]=temp;
    }
  }

  int k=0, l=0;
  while(vec[0]==vec[k++]) {
    l++;
  }

  return vec[l];
}

int main() {

  int vec[MAX_SIZE], size;

  printf("Introduza o tamanho do vetor:\n");
  scanf("%d", &size);

  printf("Introduza os valores do vetor:\n");
  for(int i=0; i<size; i++) {
    scanf("%d", &vec[i]);
  }

  printf("O segundo menor valor é: %d\n", segundo_menor(vec, size));

  return 0;
}
