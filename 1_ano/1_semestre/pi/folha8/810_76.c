#include <stdio.h>
#include <string.h>
#include <assert.h>

#define MAX_SIZE  100

int decimal(char str[]) {

  int val=0, x=1, n=0;
  int c=0;

  c=strlen(str)-1;

  for(int j=0; j<c; j++) {
    assert(str[j]>='0' && str[j]<='9');
  }

  for(int k=1; k<c; k++) {
    x*=10;
  }

  for(int i=0; str[i]!='\n'; i++) {
    n=str[i]-'0';
    val = val + n*x;
    x=x/10;
  }

  return val;
}

int main() {

  char str[MAX_SIZE];

  printf("Introduza o número:\n");
  fgets(str, MAX_SIZE, stdin);

  printf("%d\n", decimal(str));

  return 0;
}
