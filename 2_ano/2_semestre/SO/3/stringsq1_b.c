#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_STR_SIZE  64

void compare(char* s1, char* s2) {

  if(strstr(s2, s1)) {
    printf("True\n");
    int count = 0;
    for(int i = 0; i < strlen(s2); i++) {
      int j;
      for(j = 0; j < strlen(s1); j++)
        if(s2[i+j] != s1[j]) break;

      if(j == strlen(s1)) {
        count++;
        j = 0;
      }
    }

    printf("Found %d times!\n", count);

  } else printf("False\n");

    return;
}

int main(int argc, char* argv[]) {

  if(argc == 2) {
    char* s = (char*)malloc(MAX_STR_SIZE * sizeof(char));
    strcpy(s, argv[1]);
    char c;
    for(int i = 0; i < strlen(s); i++) {
      c = s[i];
      s[i] = tolower(c);
    }
    printf("%s\n", s);
  } else compare(argv[1], argv[2]);

  return 0;
}
