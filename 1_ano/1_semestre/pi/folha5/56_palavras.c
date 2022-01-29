#include <stdio.h>
#include <ctype.h>

int main(void) {

  int pal=0;
  int ch, ant=' ';

  while ((ch=getchar())!= EOF) {
    if ((ant==' ' || ant=='\n' || ant=='\t') && (ch!=' ' && ch!='\n' && ch!='\t')) {
      pal ++;
    }

    ant = ch;

  }

  printf("\n%d\n", pal);

  return 0;

}
