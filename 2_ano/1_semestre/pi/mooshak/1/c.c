#include <stdio.h>

int main () {

  int dur;
  scanf("%d", &dur);

  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);

  if(a < c) a = c;
  if(b > d) b = d - dur;
  else b = b - dur;

  if(a > b) printf("Impossivel\n");
  else if(a == b) printf("%d\n", a);
  else {
    printf("%d %d\n", a, b);
  }

  return 0;
}
