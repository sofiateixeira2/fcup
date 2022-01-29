#include <stdio.h>
#include <string.h>

int main() {

  char s[1000];
  int size, k = 0;
  scanf("%s", s);
  size = strlen(s);

  for(int i = 0; i < size; i++) {
    if(s[i] == 'P' || s[i] == 'p')
      k++;
  }

  printf("%d\n", k);

  return 0;
}
