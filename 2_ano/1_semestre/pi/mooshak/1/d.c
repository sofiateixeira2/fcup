#include <stdio.h>

int main() {

  int h1, m1, h2, m2;
  scanf("%d %d %d %d", &h1, &m1, &h2, &m2);

  int d = (h2*60 + m2) - (h1*60 + m1);
  int min = d%60;
  int h = d/60;

  if(d > 1) printf("Passaram apenas %d minutos!\n", d);
  else printf("Passou apenas 1 minuto!\n");

  if(d < 60) printf("De facto!\n");
  else {
    printf("Queres dizer, ");

    if(h == 1) printf("%d hora", h);
    else printf("%d horas", h);

    if(min == 1) printf(" e %d minuto", min);
    else if(min > 1) printf(" e %d minutos", min);

    printf("?!\n");
  }

  return 0;
}
