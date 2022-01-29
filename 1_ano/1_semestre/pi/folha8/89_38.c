#include <stdio.h>
#include <assert.h>

int minimo(int a, int b, int c) {

  int min;
  if (a<=b && a<=c) {
    min=a;
  }
  if (b<=a && b<=c) {
    min=b;
  }
  if (c<=a && c<=b) {
    min=c;
  }

  return min;
}

int maximo(int a, int b, int c) {

  int max;
  if (a>=b && a>=c){
    max=a;
  }
  if (b>=a && b>=c){
    max=b;
  }
  if (c>=a && c>=b){
    max=c;
  }

  return max;
}

int mediana(int a, int b, int c) {

  int med;

  med=a+b+c-maximo(a, b, c)-minimo(a, b, c);

  return med;

}

int main(void) {
  int a, b, c, r;

  printf("Introduza 3 valores\n");
  scanf("%d %d %d", &a, &b, &c);

  printf("A mediana é: %d\n", mediana(a, b, c));

  r=mediana(a, b, c);

  assert(minimo(a, b, c)<=r && r<=maximo(a, b, c));

  return 0;
}
