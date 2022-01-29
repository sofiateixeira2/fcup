#include <stdio.h>

int main() {

  int r;
  scanf("%d", &r);

  if(r % 2 != 0) {
    r = r - 9;
    if(r % 3 == 0)
      printf("%d\n", r/3);
    else printf("Acho que te enaganaste nas contas.\n");
  } else {
    r = r - 9;
    if(r % 5 == 0)
      printf("%d\n", r/5);
    else printf("Acho que te enaganaste nas contas.\n");
  }

  return 0;
}
