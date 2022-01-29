#include <stdio.h>

int main() {

  int r, c;
  char ch;
  scanf("%d %d", &r, &c);

  int m[r][c];

  for(int i = 0; i < r; i++) {
    for(int j = 0; j < c; j++) {
      scanf(" %c", &ch);
      m[i][j] = ch;
    }
  }

  //print da matriz
  for(int i = 0; i < r; i++) {
    for(int j = 0; j < c; j++) {
      printf("%c ", m[i][j]);
    }
    printf("\n");
  }



  return 0;
}
