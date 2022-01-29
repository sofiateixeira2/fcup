#include <stdio.h>
#include <assert.h>

#define MAX_SIZE  100

void inserir(int vec[], int n, int x) {

  int j=n-1;
  while(j>=0 && vec[j]>x) {
    vec[j+1]=vec[j];
    j--;
  }

  vec[j+1]=x;

  return;
}

int main() {

  int vec[MAX_SIZE], n, x;
  //n=size
  //x=valor
  printf("Introduza o tamanho do vetor:\n");
  scanf("%d", &n);

  printf("Introduza os valores do vetor por ordem ascendente:\n");
  for(int i=0; i<n; i++){
    scanf("%d", &vec[i]);
  }

  for(int k=0; k<n; k++){
    assert(vec[k]<=vec[k+1]);
  }

  printf("Introduza o valor que pretende inserir:\n");
  scanf("%d", &x);

  inserir(vec, n, x);

  for(int l=0; l<=n; l++) {
    assert(vec[l]<=vec[l+1]);
  }

  printf("\n");

  for(int j=0; j<=n; j++){
    printf("%d ", vec[j]);
  }

  printf("\n");

  return 0;
}
