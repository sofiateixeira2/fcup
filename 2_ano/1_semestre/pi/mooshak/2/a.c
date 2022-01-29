#include <stdio.h>

int main() {

  int p_eq, p_adv, j;
  scanf("%d %d %d", &p_eq, &p_adv, &j);

  int p = j * 3;

  if((p_eq > p_adv + p) && (p_eq > p_adv)) printf(":-D\n");
  else if((p_eq + p < p_adv) && (p_eq < p_adv)) printf(":-(\n");
  else if((p_eq + p > p_adv) && (p_eq < p_adv)) printf(":-|\n");
  else if((p_eq < p_adv + p) && (p_eq > p_adv)) printf(":-)\n");
  else {
    if((p_eq == p_adv + p) || (p_eq + p == p_adv)) {
      if(p_eq > p_adv) printf(":-D\n");
      else printf(":-(\n");
    }
  }

  return 0;
}
