#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef
  struct {
    int dia;
    int mes;
    int ano;
  }
  data;

int size;

void print(data d[]) {

  for(int i = 0; i < size; i++)
    printf("%d %d %d\n", d[i].dia, d[i].mes, d[i].ano);

  return;
}

int compare(const void *a, const void *b) {

  data *d1 = (data*) a;
  data *d2 = (data*) b;

  if(d1->ano == d2->ano) {
    if(d1->mes == d2->mes) {
      if(d1->dia == d2->dia) return 0;
      else if(d1->dia < d2->dia) return -1;
      else return +1;
    } else if(d1->mes < d2->mes) return -1;
    else return +1;
  } else if(d1->ano < d2->ano) return -1;
  else return +1;
}

void print1(data d[], int n) {

  for(int i = 0; i < n; i++) {
    printf("%d %d %d\n", d[i].dia, d[i].mes, d[i].ano);
  }

}

int main() {

  data vec[10];
  int flag_d;
  scanf("%d", &flag_d);
  size = 0;

  while(flag_d != -1) {
    vec[size].dia = flag_d;
    scanf("%d %d", &vec[size].mes, &vec[size].ano);
    scanf("%d", &flag_d);
    size++;
  }

  printf("%d\n", size);

  print(vec);

  qsort(vec, size, sizeof(data), compare);

  printf("\n");
  print(vec);

  printf("menor: %d %d %d\n", vec[0].dia, vec[0].mes, vec[0].ano);

  int y, j = 0;
  scanf("%d", &y);

  data new[10];
  for(int i = 0; i < size; i++) {
    if(vec[i].ano == y)
      new[j++] = vec[i];
  }

  print1(new, j);

  return 0;
}
