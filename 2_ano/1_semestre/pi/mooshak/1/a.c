#include <stdio.h>
#include <stdlib.h>

int main() {

  int level;
  scanf("%d", &level);

  int one, two;
  scanf("%d %d", &one, &two);

  if(one == 999 && two != 999) printf("2\n");
  else if(two == 999 && one != 999) printf("1\n");
  else if(one == 999 && two == 999) printf("0\n");
  else {
    if(abs(level - one) == abs(level -two)) {
      if(one >= two) printf("1\n");
      else printf("2\n");
    }
    else if(abs(level - one) < abs(level - two)) printf("1\n");
    else if(abs(level - one) > abs(level - two)) printf("2\n");
  }

  return 0;
}
