#include <stdio.h>
#include <stdbool.h>

bool triangulo(int a, int b, int c) {

  if(a > 0 && b > 0 && c > 0)
    if(a < b+c && b < a+c && c < a+b)
    return true;

  return false;
}

int main() {

  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  if(triangulo(a,b,c)) {
    if(a==b && b==c) printf("(%d,%d,%d) define triangulo equilatero\n", a,b,c);
    if(a!=b && b!=c && a!=c) printf("(%d,%d,%d) define triangulo escaleno\n", a,b,c);
    if((a==b && a!=c) || (a==c && a!=b) || (b==c && b!=a)) printf("(%d,%d,%d) define triangulo isosceles\n", a,b,c);
  } else printf("(%d,%d,%d) nao define triangulo\n", a,b,c);

  return 0;
}
