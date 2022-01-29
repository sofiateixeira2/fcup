#include <stdio.h>

#define MAX_SIZE  100

void bubblesort(int vec[], int n) {

  int sw=0;

    for(int i=1; i<n; i++) {

      if(vec[i-1]>vec[i]) {
        int temp=vec[i];
        vec[i]=vec[i-1];
        vec[i-1]=temp;
        sw=1;
      }
    }

    if(sw) {
      bubblesort(vec, n);
    }

    return;
}

int main() {

  int vec[MAX_SIZE], n;

  printf("Insert de size of the vector: \n");
  scanf("%d", &n);

  printf("Insert the values of the vector: \n");
  for(int i=0; i<n; i++) {
    scanf("%d", &vec[i]);
  }

  bubblesort(vec, n);

  for(int j=0; j<n; j++) {
    printf("%d ", vec[j]);
  }

  printf("\n");

  return 0;
}
