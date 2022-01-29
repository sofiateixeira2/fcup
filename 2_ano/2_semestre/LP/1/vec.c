#include <stdio.h>
#include <limits.h>

void print(int arr[], int n) {

  for(int i = 0; i < n; i++) printf("%d ", arr[i]);
  printf("\n");

  return;
}

int max(int arr[], int n) {

  int max = INT_MIN;

  for(int i = 0; i < n; i++) {
    if(arr[i] > max) max = arr[i];
  }

  return max;
}

int min(int arr[], int n) {

  int min = INT_MAX;

  for(int i = 0; i < n; i++) {
    if(arr[i] < min) min = arr[i];
  }

  return min;
}

int sum(int arr[], int n) {

  int sum = 0;

  for(int i = 0; i < n; i++) sum+=arr[i];

  return sum;
}

int media(int arr[], int n, int sum) {

  int m;

  m = sum/n;

  return m;
}

void printbigm(int arr[], int n, int m) {

  for(int i = m; i < n; i++) printf("%d ", arr[i]);
  printf("\n");

  return;
}

int main() {

  int n;
  scanf("%d", &n);

  int arr[n];

  for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

  print(arr, n);

  printf("Maior número: %d\n", max(arr, n));

  printf("Menor número: %d\n", min(arr, n));

  int s = sum(arr, n);
  printf("Somatório: %d\n", s);

  int m = media(arr, n, s);
  printf("Média: %d\n", m);

  printf("Subsequência abaixo da média: ");
  print(arr, m);

  printf("Subsequência acima da média: ");
  printbigm(arr, n, m);

  return 0;
}
