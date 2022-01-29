#include <stdio.h>
#include <string.h>

int main() {

  char s[100];
  fgets(s, 100, stdin);

  char tmp[100];
  int j = 0;

  for(int i = 0; i < strlen(s); i++) {
    if(s[i] != ' ') {
      tmp[j] = s[i];
      j++;
    }
  }

  printf("%s", tmp);

  return 0;
}
