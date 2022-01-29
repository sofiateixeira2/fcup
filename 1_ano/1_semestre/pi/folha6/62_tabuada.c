#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  int i, j, r, n, c=0, e=0;

  srand((unsigned)time(NULL));

  for (int p=1; p<=10; p++) {

    i=(rand()%(9-1+1))+1;
    j=(rand()%(9-1+1))+1;

    r=i*j;

    printf("Quanto é %d x %d ?\n", i, j);
    scanf("%d", &n);

    if(n!=r) {
      printf("Errado! O resultado é: %d\n", r);
      e++;
    } else {
      printf("Certo!\n");
      c++;
    }
  }

  printf("Teve %d certas e %d erradas\n", c, e);

  return 0;
}
