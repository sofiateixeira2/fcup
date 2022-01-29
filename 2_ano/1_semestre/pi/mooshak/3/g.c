#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPrime(int n) {

  int c = 0;
  for(int i = 1; i <= n; i++) {
    if(n%i == 0) c++;
  }
  if(c != 2) return false;
  else return true;
}

int n_primes(int n, int v[20]) {
  int s = 0;
  for(int i = 2; i <= n; i++) {
    if(isPrime(i)) {
      while(n%i == 0) {
        v[s] = i;
        n = n/i;
        s++;
      }
    } else continue;
  }
  return s;
}

int main() {

  int c, n;
  scanf("%d", &c);
  int v[20] = {0};

  for(int i = 0; i < c; i++) {
    scanf("%d", &n);
    printf("%d = ", n);
    int s = n_primes(n, v);
    for(int j = 0; j < s-1; j++) {
      printf("%d*", v[j]);
    }
    printf("%d\n", v[s-1]);
  }

  return 0;
}
