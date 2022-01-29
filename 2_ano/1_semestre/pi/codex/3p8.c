#include <stdio.h>

int mediana(int a, int b, int c) {

  int med;

  if((a >= b) && (a >= c)) {
    if(b >= c) med = b;
    else med = c;
  } else if((b >= a) && (b >= c)) {
    if(a >= c) med = a;
    else med = c;
  } else if((c >= a) && (c >= b)) {
    if(a >= b) med = a;
    else med = b;
  }

  return med;
}

int main() {

  int a, b, c;
  scanf("%d %d %d", &a, &b, &c);

  printf("%d\n", mediana(a,b,c));

  return 0;
}
