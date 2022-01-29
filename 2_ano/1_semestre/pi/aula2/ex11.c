#include <stdio.h>

int main() {

  int prev, next;
  int n;
  int count = 0;
  int flag = 0;

  scanf("%d", &n);
  scanf("%d", &prev);

  for(int i = 0; i < n - 1; i++) {
    scanf("%d", &next);
    if(prev < next) count++;
    else flag++;
    prev = next;
  }

  if(flag == 0) printf("true\n");
  else printf("false\n");

  return 0;
}
