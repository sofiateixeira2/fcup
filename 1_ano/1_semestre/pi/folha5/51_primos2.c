#include <stdio.h>

int main(void) {

  int n, i, c, j, primo;

  printf("Limite superior?\n");
  scanf("%d", &n);

  printf("Os números primos do intervalo são:\n");

  for (i=2; i<n; i++) {

    c=0;

    for (j=1; j<=i; j++)
   {
      if ((i%j)==0) {
            c++;
         }
   }

   if (c==2)
      primo=1;
   else
      primo=0;

    if (primo==1) {
    printf("%d ", i);
  }

  }

  printf("\n");

  return 0;

}
