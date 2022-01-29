#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX_SIZE 100

int contar_maiores(int vec[], int size, int val) {

  int m=0;

  for(int i=0; i<size; i++) {
    if(vec[i]>val) {
      m++;
    }
  }

  return m;
}

int main() {

  int vec[MAX_SIZE], size, val, n;

  srand((unsigned)time(NULL));

  printf("Introduza o tamanho do vetor\n");
  scanf("%d", &size);
  printf("Introduza o valor\n");
  scanf("%d", &val);

  for(int i=0; i<size; i++) {
    n= (rand()%100+1)+1;
    vec[i]=n;
    printf("%d ", vec[i]);
  }

  printf("\n");

  printf("O vetor tem %d números maior que %d\n", contar_maiores(vec, size, val), val);

  return 0;
}
