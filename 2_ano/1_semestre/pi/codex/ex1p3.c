#include <stdio.h>

int main() {

  int l, w, h;
  scanf("%d %d %d", &l, &w, &h);

  int v = l * w * h;
  printf("L=?W=?H=?LxWxH: %d*%d*%d (cm)\n", l, w, h);
  printf("Volume: %d (cm^3)\n", v);

  return 0;
}
