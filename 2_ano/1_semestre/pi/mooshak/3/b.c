#include <stdio.h>

int main() {

  int m, n;
  scanf("%d", &m);

  int arr[m];
  for(int k = 0; k < m; k++) {
    scanf("%d", &n);
    arr[k] = n;
  }

  int j = m - 1, i = 0;

  int a = 0, b = 0, flag = 0, jogada = 0;

  while(arr[i] != arr[j]) {
    if(jogada == 0 || jogada%2 == 0) {
      if(arr[i] > arr[j]) {
        a += arr[i];
        i++;
      } else {
        a += arr[j];
        j--;
      }
    } else {
      if(flag == 0) {
        if(arr[i] < arr[j]) {
          b += arr[i];
          i++;
        } else {
          b += arr[j];
          j--;
        }
        flag++;
      } else {
        if(arr[i] > arr[j]) {
          b += arr[i];
          i++;
        } else {
          b += arr[j];
          j--;
        }
        flag = 0;
      }
    }
    jogada++;
  }

  if(arr[i] == arr[j]) {
    if(jogada%2 != 0)
      b += arr[i];
    else a += arr[i];
  }

  if(a > b) printf("Alex ganha com %d contra %d\n", a, b);
  else if(b > a) printf("Bela ganha com %d contra %d\n", b, a);
  else printf("Alex e Bela empatam a %d\n", a);

  return 0;
}
