#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {
  int m = atoi(argv[1]);
  int mcount = 1;
  int n = atoi(argv[2]);
  int ncount = 1;
  bool flag = true;

  for(int i = 1; i <= m; i++)
    for(int j = 1; j <= n; j++)
      printf("%d.%d\n", i, j);

  return 0;
}
