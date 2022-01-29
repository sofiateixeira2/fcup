#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int repetidos(int v[], int n) {

  for(int j=0; j<n; j++) {
    for(int k=j+1; k<=n; k++) {
      if(v[j]==v[k]) {
        return 1;
      }
    }
  }

  return 0;
}

int main() {

  int n, v[365];
  double p=0;

  printf("Introduza o número de alunos\n");
  scanf("%d", &n);

  srand((unsigned)time(NULL));
  for(int j = 0; j < 1000000; j++){
    for(int i=0; i<n; i++) {
      v[i]= 1+rand()/(RAND_MAX/365+1);
      if(repetidos(v, i)) {
        p++;
        break;
      }
    }
  }




  printf("A probabilidade é: %.2f\n", (p/1000000) * 100);

  return 0;
}
