#include <stdio.h>

#define MAX_SIZE  100

int desordem(int vec[], int size) {

  int p=0;

  for(int i=1; i<size; i++) {
    if (vec[i-1]>vec[i]) {
      p++;
    }
  }

  return p;
}

int main() {

  int vec[MAX_SIZE], size;

  printf("Introduza o tamaho do vetor:\n");
  scanf("%d", &size);

  printf("Introduza agora os valores do vetor:\n");
  for(int i=0; i<size; i++) {
    scanf("%d", &vec[i]);
  }

  printf("O número de pares desordenados é: %d\n", desordem(vec, size));

  return 0;
}
