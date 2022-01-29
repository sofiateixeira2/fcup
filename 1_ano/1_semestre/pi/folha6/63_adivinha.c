#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  int n, r, c=1;

  srand((unsigned)time(NULL));

  r=(rand()%(1000-1+1))+1;

  printf("Adivinha o número!\n");

  do {

    scanf("%d", &n);

    if (n>r){
      printf("Demasiado alto!\n");
      c++;
    }
    if (n<r) {
      printf("Demasiado baixo!\n");
      c++;
    }
  } while (n!=r);

  printf("Acertou em %d tentativas\n", c);

  return 0;
}
