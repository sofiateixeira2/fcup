#include <stdio.h>

int main() {
  int i;
  int primes[] = {2, 3, 5, 7, 11};
  int* p;
  p = primes;
  for(i = 0; i < sizeof(primes)/sizeof(int); i++) {
    printf("%d <--> %d <--> %d\n",primes[i], *(primes + i), *(p+i));
  }
  return 0;
}
