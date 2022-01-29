#include <stdio.h>
int main(void) {

  int valor, n20=0, n10=0, n5=0, m1=0;

  printf("Introduza a sua quantia: \n");
  scanf("%d", &valor);

  do{
    if (valor>=20) {
      n20++;
      valor-=20;
    } else if (valor >= 10) {
      n10++;
      valor-=10;
    } else if (valor >= 5) {
      n5++;
      valor-=5;
    } else{
      m1++;
      valor-=1;
    }
  }while (valor != 0);

  printf("notas EUR 20: %d\n", n20);
  printf("notas EUR 10: %d\n", n10);
  printf("notas EUR 5: %d\n", n5);
  printf("moedas EUR 1: %d\n", m1);

  return 0;
}
