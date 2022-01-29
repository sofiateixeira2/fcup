#include <stdio.h>

int main() {

  int n;
  scanf("%d", &n);

  int space = (n-1)/2;
  int o = 1;

  //up

  while(space > 0) {
    for(int i = 1; i <= space; i++) {
      printf(" ");
    }
    for(int i = 1; i <= o; i++) {
      if(i%2 == 0) printf("+");
      else printf("o");
    }
    space--;
    o+=2;
    printf("\n");
  }

  //middle and down

  while(o > 0) {
    for (int i = 1; i <= space; i++) {
        printf(" ");
      }
      for (int i = 1; i <= o; i++) {
        if(i%2 == 0) printf("+");
        else printf("o");
      }
      o-=2;
      space++;
      printf("\n");
  }

  return 0;
}
