#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/mman.h>

int main(int argc, char *argv[]) {
  FILE *f;
  int n, m, k;
  char c;
  pid_t pid;

  m = atoi(argv[2]); k = atoi(argv[3]);

  f = fopen(argv[1], "r");

  c = fgetc(f);
  n = (int)(c) - 48;

  int rows = 0, cols = 0;
  int matrix[n][n];

  while((c = fgetc(f)) != EOF) {
    if(c != '\n' && c != ' ') {
      matrix[rows][cols] = (int)(c) - 48;
      cols++;
      if(cols == n) {
        cols = 0;
        rows++;
      }
      if(rows == n) break;
    }
  }

  int itr = 0;
  int sum = 0;
  int flag = 0;

  int *parciais = (int*)mmap(NULL, 100*sizeof(int), PROT_READ | PROT_WRITE, MAP_SHARED | MAP_ANONYMOUS, -1, 0);

  for(int i = 0; i < m; i++) {
    if((pid = fork()) == 0) {
      for(int j = 0; j < n; j++) {
        if(j%m == i) {
          flag++;
          for(int d = 0; d < n; d++) {
            if(matrix[j][d] > k) sum++;
          }
        } else flag = 0;
        if(flag != 0) {
          parciais[itr] = sum;
          sum = 0;
        }
        itr++;
      }
      exit(0);
    }
  }
  for(int i = 0; i < m; i++) wait(NULL);

  int ans = 0;
  for(int i = 0; i < n; i++) ans += parciais[i];
  printf("%d\n", ans);

  return 0;
}
