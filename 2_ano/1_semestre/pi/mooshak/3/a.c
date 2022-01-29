#include <stdio.h>

int main() {

  int arr[251], s, i = 0;

  scanf("%d", &s);
  while(s != 0) {
    arr[i] = s;
    i++;
    scanf("%d", &s);
  }

  int q, n;
  scanf("%d", &q);

  for(int j = 0; j < q; j++) {
    int t = 0, v = 0;
    scanf("%d", &n);
    for(int k = 0; k < i; k++) {
      if(n%arr[k] == 0) {
        t++;
        if(arr[k] < 0) v++;
      }
    }
    printf("Resp: Numero de divisores de %d na sequencia = %d\n      Numero dos negativos = %d\n", n, t, v);
  }


  return 0;
}
