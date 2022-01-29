#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX_SIZE 100

void max_min (int vec[], int size, int *pmax, int *pmin) {

  int max, min;

  for(int i=0; i<size; i++) {
    if(vec[i]<vec[i+1]) {
      min=vec[i];
    }
    if(vec[i]>vec[i+1]) {
      max=vec[i];
    }
  }

  pmax=&max;
  pmin=&min;

  printf("Max: %d\n", *pmax);
  printf("Min: %d\n", *pmin);

  return;
}

int main() {

  int vec[MAX_SIZE], size;
  int *pmax, *pmin;

  srand((unsigned)time(NULL));

  printf("Vector size?\n");
  scanf("%d", &size);

  for(int i=0; i<size; i++) {
    vec[i]=(rand()%(10-0+1))+1;
  }

  max_min(vec, size, pmax, pmin);

  return 0;
}
