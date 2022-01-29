//EXERCICIO C

#include <stdio.h>

#define R 10
#define C 4

void print_m(int v, int r, char m[R][C]) {

  if(v == 77) {
    return;
  }

  printf("%c", m[v][r-1]);

}

int main() {

  char m[][C] = {
                  {'+'},
                  {'_'},
                  {'A', 'B', 'C'},
                  {'D', 'E', 'F'},
                  {'G', 'H', 'I'},
                  {'J', 'K', 'L'},
                  {'M', 'N', 'O'},
                  {'P', 'Q', 'R', 'S'},
                  {'T', 'U', 'V'},
                  {'W', 'X', 'Y', 'Z'}
                };

/*  //print matrix
  for(int i = 0; i < 10; i++) {
    printf("i %d: ", i);
    for(int j = 0; j < 4; j++) {
      printf("%c ", m[i][j]);
    }
    printf("\n");
  }*/

  int prev, next;
  int count = 1;
  //int flag = 0;

  scanf("%d", &prev);

  while(prev != 99) {

    scanf("%d", &next);

    if(prev == next) {
      count++;
    } else {
      print_m(prev, count, m);
      count = 1;
    }

    prev = next;

  }
  printf("\n");

  return 0;
}
