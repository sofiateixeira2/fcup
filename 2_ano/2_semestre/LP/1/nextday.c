#include <stdio.h>
#include <stdbool.h>

bool isBissexto(int n) {

  if(n%400 == 0 || (n%4 == 0 && n%100 != 0)) return true;
  return false;
}

int end_month(int d, int m, int y) {

  if(m == 2) {
    if(isBissexto(y) && d == 29) return true;
    if(!isBissexto(y) && d == 28) return true;
  } else {
    if(m < 8) {
      if(m%2 != 0 && d == 31) return true;
      if(m%2 == 0 && d == 30) return true;
    } else {
      if(m%2 == 0 && d == 31) return true;
      if(m%2 != 0 && d == 30) return true;
    }
  }

  return false;
}

int main() {

  int d, m, y;
  scanf("%d %d %d", &d, &m, &y);

  if(end_month(d, m, y)) {
    d = 1;
    if(m == 12) {
      m = 1;
      y ++;
    } else m++;
  } else {
    d++;
  }

  printf("%d %d %d\n", d, m, y);

  return 0;
}
