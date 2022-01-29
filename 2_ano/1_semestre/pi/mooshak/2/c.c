#include <stdio.h>

int main() {

  int c;
  scanf("%d", &c);

  int i, j, s, t;

  for(int n = 0; n < c; n++) {
    scanf("%d %d", &i, &j);
    scanf("%d %d", &s, &t);

    if(i >= s) {
      if((j == t) || (j < t)) printf("Com alibi\n");
      if(j > t) printf("Sem alibi\n");
    } else if(i < s) {
      printf("Sem alibi\n");
    }
  }

  return 0;
}
