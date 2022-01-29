#include <stdio.h>
#define  NONBLANK '-'

int main() {

  int ch, last;

  while ((ch=getchar()) != EOF) {

    if (ch==' ') {
      if (last!=' '){
        putchar(ch);
      }
    } else {
    putchar(ch);
      }

    last=ch;
  }

  printf("\n");

  return 0;
}
