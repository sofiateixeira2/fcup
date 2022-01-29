#include <stdio.h>

int main() {

  int c, n, p;
  int q, r;
  scanf("%d", &c);
  char l1, l2;

  for(int i = 0; i < c; i++) {
    q = 0; r = 0;
    scanf("%d %d", &n, &p);
    q = n/p;
    r = n%p;
    scanf(" %c %c", &l1, &l2);
    
    if(l1 == 'R' && l2 == 'Q') printf("R: %d Q: %d\n", r, q);
    else printf("Q: %d R: %d\n", q, r);
  }

  return 0;
}
