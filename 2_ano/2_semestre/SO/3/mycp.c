#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 300

int main(int argc, char* argv[]) {

  FILE* f1;
  FILE* f2;

  f1 = fopen(argv[1], "r");
  f2 = fopen(argv[2], "w");

  char* s = (char*)malloc(sizeof(char));
  fgets(s, MAX, f1);

  fputs(s, f2);

  return 0;
}
