#include <stdio.h>
#include <string.h>

int main() {

  char p1[12], p2[12];
  int c1 = 0, c2 = 0;

  fgets(p1, 12, stdin);
  fgets(p2, 12, stdin);

  for(int i = 0; i < 10; i++) {
    if(p1[i] == 'T' && p2[i] == 'P') c1++;
    else if(p2[i] == 'T' && p1[i] == 'P') c2++;
    else if(p1[i] == 'R' && p2[i] == 'T') c1++;
    else if(p2[i] == 'R' && p1[i] == 'T') c2++;
    else if(p1[i] == 'P' && p2[i] == 'R') c1++;
    else if(p2[i] == 'P' && p1[i] == 'R') c2++;
  }

  printf("%d\n%d\n", c1, c2);

  return 0;
}
