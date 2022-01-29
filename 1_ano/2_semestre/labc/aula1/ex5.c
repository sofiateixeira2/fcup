#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {

  int l,c,i,j,v;
  FILE *f;

  f=fopen(argv[3], "w");

  l=atoi(argv[1]);
  c=atoi(argv[2]);

  fprintf(f, "%d %d ", l, c);

  for(i=0; i<l; i++) {
    for(j=0; j<c; j++) {
      scanf("%d", &v);
      fprintf(f, "%d", v);
    }
  }

  fclose(f);

  return 0;
}
