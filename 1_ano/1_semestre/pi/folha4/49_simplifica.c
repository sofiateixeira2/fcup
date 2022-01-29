#include <stdio.h>

int mdc(int n, int d)
{
   while (n!=d) {
     if(n>d)
         n=n-d;
      else
         d=d-n;
   }
   return n;
}

int main(void) {

  int n, d, n1, d1;

  printf("Introduza o numerador e o denominador:\n");
  scanf("%d %d", &n, &d);

  n1=n/mdc(n,d);
  d1=d/mdc(n,d);

  printf("Fração simplificada: %d/%d\n", n1, d1);

  return 0;

}
