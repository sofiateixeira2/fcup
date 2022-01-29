#include <stdio.h>

int main() {

  int c, n, p, t = 0;
  //char d[50] = {'\0'};
  char d[53] = {'\0'};
  scanf("%d %d\n", &c, &n);

  for(int i = 0; i < n; i++) {
    scanf("%d\n", &p);
    //printf("%d\n", p);
    scanf("%[^\n]s", d);
    //fgets(d, 53, stdin);
    if((c - p) >= 0) {
      c -= p;
      t += p;
      printf("%s\n", d);
    } else continue;
  }
  printf("%d %d\n", t, c);

  return 0;
}
