#include <stdio.h>
#include <string.h>

int main() {

  char s1[] = "clap your hands";
  char s2[] = "bata palmas";
  char s[20];
  char c;


  while((c = getchar()) != EOF) {
    while(getchar() != '\n');
    if('i'== c || 'c' == c) {
      strcpy(s, s1);
    }
    if('a' == c || 'b' == c) {
      strcpy(s, s2);
    }
    printf("%s\n", s);
  }

  return 0;
}
