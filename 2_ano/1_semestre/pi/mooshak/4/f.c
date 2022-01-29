#include <stdio.h>

int main() {

  int n, m;
  scanf("%d %d", &n, &m);
  char seq[256] = {'\0'};
  int zero[255] = {0};
  int one[255] = {0};


  for(int i = 0; i < n; i++) {
    scanf("%s", seq);
    for(int j = 0; j < m; j++) {
      if(seq[j] == '0') zero[j]++;
      if(seq[j] == '1') one[j]++;
    }
  }

  for(int i = 0; i < m; i++) {
    if(zero[i] >= one[i]) printf("0");
    else printf("1");
  }
  printf("\n");

  return 0;
}
