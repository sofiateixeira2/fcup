#include <stdio.h>

int main() {

  int n, size;
  scanf("%d", &size);

  int l[size], t[size];

  for(int i = 0; i < size; i++) {
    scanf("%d", &n);
    l[i] = n;
  }
  for(int i = 0; i < size; i++) {
    scanf("%d", &n);
    t[i] = n;
  }

  int c = 0, p = 0;
  for(int i = 0; i < size; i++) {
    if(l[i] == t[i]) {
      c++;
      if((i < size && l[i+1] == t[i+1]) || (i > 0 && l[i-1] == t[i-1])) p+=3;
      else p+=1;
    }
  }
  if(c == 1) p = 1;
  printf("%d\n%d\n", c, p);

  return 0;
}
