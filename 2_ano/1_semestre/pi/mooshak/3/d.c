#include <stdio.h>

int main() {

  int v[6] = {0}, m, flag = 0; //2, 1, 50, 20, 10, 5

  for(int i = 0; i < 6; i++) {
    scanf("%d", &m);
    v[i] = m;
  }

  for(int i = 0; i < 6; i++)
    printf("%d ", v[i]);
  printf("\n");

  int e, c;
  scanf("%d %d", &e, &c);
  printf("%d %d\n", e, c);

  while(flag == 0) {
    printf("oi\n");
    scanf("%d", &m);
    while(m!=0) {
      if(m == 2) v[0]++;
      if(m == 1) v[1]++;
      if(m == 50) v[2]++;
      if(m == 20) v[3]++;
      if(m == 10) v[4]++;
      if(m == 5) v[5]++;
      scanf("%d", &m);
    }
    scanf("%d %d", &e, &c);
    if((e == 0) && (c == 0)) flag++;
  }
  for(int i = 0; i < 6; i++)
    printf("%d ", v[i]);
  printf("\n");
  return 0;
}
