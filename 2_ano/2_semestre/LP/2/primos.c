#include <stdio.h>
#include <stdbool.h>

bool isPrime(int n) {

  int f = 0;

  for(int i = 1; i <= n; i++) {
    if(n%i == 0) f++;
  }

  if(f == 2) return true;
  else return false;
}

int main() {

  int n;
  scanf("%d", &n);

  int primes[n];
  int i = 0, num = 2;

  while(i != n) {
    if(isPrime(num)) {
      primes[i] = num;
      i++;
    }
    num++;
  }

  int* p;
  p = primes;

  for(int j = 0; j < n; j++) {
    printf("%d ", *(p+j));
  }
  printf("\n");

}
