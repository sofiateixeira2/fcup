#include <stdio.h>

int main() {

  int s;

  printf("  D   S   T   Q   Q   S   S  \n");

  int n_dias, d_week;
  scanf("%d", &n_dias);

  char day[8] = 0;
  scanf("%s", day);

  if(strcmp(day, "segunda")) s = 1;
  if(strcmp(day, "terça")) s = 2;
  if(strcmp(day, "quarta")) s = 3;
  if(strcmp(day, "quinta")) s = 4;
  if(strcmp(day, "sexta")) s = 5;
  if(strcmp(day, "sábado")) s = 6;
  if(strcmp(day, "domingo")) s = 7;



  return 0;
}
