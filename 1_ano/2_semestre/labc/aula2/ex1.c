#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int soma = 0, n;

  for(int i=1; i<argc; i++) {
    n = atoi(argv [i]);
    soma += n;
  }

  printf("%d\n", soma);

  return 0;
}
