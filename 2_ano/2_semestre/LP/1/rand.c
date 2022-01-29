#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  int a, b;
  int g, t = 0;

  scanf("%d %d", &a, &b);

  srand(time(NULL));
  int r = (rand() % (b-a+1)) + a;

  while(g != r) {
    scanf("%d", &g);
    if(g < r) printf("Esse número é menor\n");
    if(g > r) printf("Esse número é maior\n");
    t++;
  }

  printf("u did it!\ntrys: %d\n", t);

  return 0;
}
