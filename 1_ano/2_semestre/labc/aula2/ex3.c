#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int count=0;

  FILE *f1 = fopen("fich1.txt", "r");
  char c;
  while((c = fgetc(f1)) != EOF) {
    count++;
    if(c == ' ' || c == '\n' || c == '\0' || c == '\t') {
      count --;
    }
  }
  fclose(f1);

  FILE *f2 = fopen("fich2.txt", "w");
  fprintf(f2, "%d\n", count);
  fclose(f2);

  return 0;
}
