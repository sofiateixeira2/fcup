#include <stdio.h>

int main() {

  int n;
  scanf("%d", &n);

  int sum = 0, flag = 0;
  int s1, s2, s;
  scanf("%d %d", &s1, &s2);

  for(int i = 0; i < n - 2; i++) {
    scanf("%d", &s);
    if((s != s1 && s != s2) && ((s%s2 == 0) || s > s1))
      sum += s;
    else flag++;
  }

  if(flag == (n-2)) printf("Resposta G - nenhum valor satisfaz\n");
  else printf("Resposta G - soma: %d\n", sum);

  return 0;
}
