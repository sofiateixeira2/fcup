#include <stdio.h>
#define TRUE 1
#define FALSE 0

int ocorre(int v[], int i, int val) {

  for(int j=0; j<i; j++) {
    if (v[j] == val) {
      return 1;
    }
  }

  return 0;
}

int main() {

  int v[100], val, i = 0;

  printf("(-1 termina)\n");

  do {
    printf("Valor: ");
    scanf("%d", &val);

    if(val == -1) {
      break;
    } else if (ocorre(v, i, val)) {
      continue;
    }

    v[i++] = val;

  } while (TRUE);

  for(int j=0; j<i; j++) {
    printf("v[%d]= %d\n", j, v[j]);
  }

  return 0;
}
