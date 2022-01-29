#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define MAX_SIZE 100

int ordenada(int vec[], int size) {

  for(int i=1; i<size; i++) {
    if(vec[i-1]>vec[i]) {
      return 0;
    }
  }

  return 1;
}

int main() {

  int vec[]={1,3,3,5,6};

  printf("%d\n", ordenada(vec, 5));

  return 0;
}
