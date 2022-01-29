#include <stdio.h>

int main() {

  int g;
  scanf("%d", &g);
  char conf[g];
  int k = 0;

  for(int i = 0; i < g; i++) {
    scanf(" %c", &conf[i]);
  }
  conf[g] = '\0';

  if(conf[0] == '#') k++;
  for(int i = 1; i < g; i++) {
    if(conf[i-1] == '#' && conf[i] == '#') k++;
  }
  printf("%d\n", k);

  return 0;
}
