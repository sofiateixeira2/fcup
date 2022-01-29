#include <stdio.h>
#include <string.h>

int main() {

  int n, t = 0, max = 0, min = 0;
  scanf("%d ", &n);
  char seq[1000];

  while(n != 0) {
    t++;
    scanf("%[^\n]s", seq);
    int l = strlen(seq);
    seq[l] = '\0';
    if(n == 2) {
      max++;
      if((strcmp(seq, "piupiu") != 0) && (strcmp(seq, "cocorocoo") != 0) && (strcmp(seq, "quaqua") != 0) && (strcmp(seq, "cacaraca") != 0))
        min++;
    }
    scanf("%d ", &n);
  }
  printf("%d %d %d\n", t, min, max);

  return 0;
}
