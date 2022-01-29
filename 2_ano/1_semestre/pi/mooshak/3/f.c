#include <stdio.h>

void print_arr(int v[], int n) {
  for(int i = 0; i < n; i++)
    printf("%d\n", v[i]);
}

void zero(int v[30], int n) {

  for(int i = n+1; i < 30; i++)
    v[i] = 0;
}

int func(int l, int v[30], int n) {
  int r;
  for(int i = 0; i < n; i++) {
    if(v[i] == l) {
      r = i;
      break;
    } else r = -1;
  }
  return r;
}

int main() {

  int l, v[30] = {0}, i = 1, n = 0;
  scanf("%d", &l);
  v[0] = l;
  scanf("%d", &l);

  while(l != 0) {
    int f = func(l, v, i);
    if(f == -1) {
      v[i] = l;
      n++;
    } else {
      i = f;
      v[i] = l;
      zero(v, i);
      n = i+1;
    }
    i++;
    scanf("%d", &l);
  }

  print_arr(v, n);

  return 0;
}
