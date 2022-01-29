#include <stdio.h>

int main() {

  int ano, mes, dia;
  scanf("%d %d %d", &ano, &mes, &dia);

  if(mes < 3) {
    ano = ano - 1;
    mes = mes + 12;
  }
  int c = 0;
  if(ano <= 1582) {
    if(mes <= 10) {
      if(dia <= 4) {
        c = 0;
      }
    }
  } else {
    int a = ano / 100;
    int b = a / 4;
    c = 2 - a + b;
  }
  int d = 365.25 * (ano + 4716);
  int e = 30.6001 * (mes + 1);
  int r = d + e + dia + c - 1524;
  printf("%d\n", r);

  return 0;
}
