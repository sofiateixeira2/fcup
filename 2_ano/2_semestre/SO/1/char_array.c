#include <stdio.h>

int main() {
  int i;
  char msg[] = "Hello World";
  char* p;
  p = msg;
  for(i = 0; i < sizeof(msg); i++) {
    printf("%c <--> %c <--> %c\n", msg[i], *(msg + i), *(p+i));
  }

  //msg comporta-se como um apontador

  return 0;
}
