#include <stdio.h>

int main() {

  int red = 1, green = 0, blue = 0;
  int countr = 1, countg = 0, countb = 0;
  int cmp = 3, lag = 3;
  int c = 1, l = 1;
  //scanf("%d %d", &cmp, &lag);
  printf("%d %d\n", cmp, lag);

  int flag = 0;

  while(flag == 0) {
    printf("while: %d %d\n", c, l);
    if((c == cmp) && (l == lag)) flag++;
    red = c * l - 1;
    if(c > 1 || l > 1)
      green = c * l -1;
    if(c > 2 || l > 2) {
      blue = c * l - 1;
      printf("oi\n");
    }

    countr += red;
    if(c < 3 || l < 3) countr = 1;
    countg += green;
    countb += blue;

    if(c != cmp)
      c++;
    if(l != lag)
      l++;
  }

  printf("%d %d %d\n", countr, countg, countb);

  return 0;
}
