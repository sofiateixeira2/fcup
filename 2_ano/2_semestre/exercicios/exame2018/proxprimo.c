#include <stdio.h>

int isprime(int n) {

  if(n<=0) {
    return 0;
  }

  for(int i=2; i*i<=n; i++) {
    if(n%i==0) {
      return 0;
    }
  }

  return 1;
}

int proximo_primo(int n) {

  while(1) {
    n++;
    if(isprime(n)) {
      return n;
    }
  }

}

int main() {

  int n;

  printf("Insert a number:\n");
  scanf("%d", &n);

  printf("The next prime number is: %d\n", proximo_primo(n));

  return 0;
}
