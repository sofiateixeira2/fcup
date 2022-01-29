#include <stdio.h>

int main() {

  char prev, next;
  prev = getchar();

  printf("%c\n", prev);
  while(prev != '#') {
    scanf("\n%c", &next);
    if(prev == 'a') {
      if(next == 'c') printf("t\n");
      if(next == 't') printf("c\n");
      if(next == 'a') printf("a\n");
    } else if(prev == 'c') {
      if(next == 't') printf("a\n");
      if(next == 'a') printf("t\n");
      if(next == 'c') printf("c\n");
    } else {
      if(next == 'a') printf("c\n");
      if(next == 'c') printf("a\n");
      if(next == 't') printf("t\n");
    }
    prev = next;
  }


  return 0;
}
