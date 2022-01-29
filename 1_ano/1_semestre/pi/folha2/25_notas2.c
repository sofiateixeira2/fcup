#include <stdio.h>

 int main(void) {
  int valor, n20, n10, n5, m1;

  printf("Introduza a sua quantia: EUR \n");
  scanf("%d", &valor);

  n20=valor/20;
  n10=(valor%20)/10;
  n5=(valor%20%10)/5;
  m1=valor%20%10%5;

  printf("notas EUR 20: %d\n", n20);
  printf("notas EUR 10: %d\n", n10);
  printf("notas EUR 5: %d\n", n5);
  printf("moedas EUR 1: %d\n", m1);

  return 0;  
 }
