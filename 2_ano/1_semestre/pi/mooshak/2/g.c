#include <stdio.h>
#include <limits.h>

int main() {
  int q, c, d, p, n;
  scanf("%d %d", &q, &c);
  scanf("%d", &n);

  int custo, sd, nb, min = INT_MAX;
  double lperdidos, ptotal;


  for(int i = 0; i < n; i++) {
    //count++;
    scanf("%d %d", &d, &p);
    ptotal = q * p;
    lperdidos = 2*d*c;
    lperdidos /= 100000;
    custo = ptotal / (q-lperdidos);

    if(custo < min) {
      min = custo;
      sd = d;
      nb = i + 1;
    } else if(custo == min) {
      if(d < sd) {
        min = custo;
        sd = d;
        nb = i + 1;
      }
    }
  }

  printf("%d\n", nb);

  return 0;
}
