#include <stdio.h>

int magico(int a[20][20], int n) {

  int soma, soma2, soma3;
  int row, column;
  int flag=0;

  //diagonal1
  soma=0;
  for(row=0; row<n; row++) {
    for(column=0; column<n; column++) {
      if(row==column) {
        soma+=a[row][column];
      }
    }
  }

  //rows
  for(row=0; row<n; row++) {
    soma2=0;
    for(column=0; column<n; column++) {
      soma2+=a[row][column];
    }
    if(soma==soma2) {
      flag=1;
    } else {
      return 0;
    }
  }

  //colunas
  for(row=0; row<n; row++) {
    soma3=0;
    for(column=0; column<n; column++) {
      soma3+=a[column][row];
    }
    if(soma==soma3) {
      flag=1;
    } else {
      return 0;
    }
  }

  if (flag==1) {
    return 1;
  }

  return 0;
}

int main() {

  int a[20][20]={ {2, 7, 6}, {9, 5, 1}, {4, 3, 8} };
  int n=3;

  printf("%d\n", magico(a, n));

  return 0;
}
