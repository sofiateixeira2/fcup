#include <stdio.h>

int ocorre(int vec[], int size, int val) {

  for(int j=0; j<size; j++) {
    if (vec[j]==val) {
      return 1;
    }
  }

  return 0;
}

int main() {

  int vec[10]={16, 5, 48, 6, 57, 46, 1, 8, 9, 74}, size=10, val=7;

  for(int i=0; i<size; i++) {
    printf("%d ", vec[i]);
  }

  printf("\n");
  printf("%d\n", ocorre(vec, size, val));

  return 0;
}
