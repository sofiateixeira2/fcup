#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE  100

int forte(char str[]) {

  int lower=0, upper=0, digit=0;

  int c=0;
  c=strlen(str);

  if (c<6) {
    return 0;
  }

  for(int i=0; i<c; i++) {

    if(islower(str[i])) {
      lower++;
    }
    if(isupper(str[i])) {
      upper++;
    }
    if(isdigit(str[i])) {
      digit++;
    }
  }

  if (lower==0 || upper==0 || digit==0) {
    return 0;
  }

  return 1;
}

int main() {

  char str[MAX_SIZE];

  printf("Introduza a palavra passe:\n");
  fgets(str, MAX_SIZE, stdin);

  printf("%d\n", forte(str));

  return 0;
}
