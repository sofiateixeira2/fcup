#include <stdio.h>
#include <string.h>

int main() {

  char s[100];
  scanf("%s", s);
  char c = s[0];
  char new;
  int i = 1, f = 1;

  do {
    new = s[i++];
    if(new == c) f++;
    else {
      if(f >= 4) printf("c%c%df", c, f);
      else {
        while(f-- > 0) printf("%c", c);
      }
      c = new;
      f = 1;
    }
  } while(new != '\0');

  printf("\n");  

  return 0;
}
