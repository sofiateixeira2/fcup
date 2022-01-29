#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

void f3(char* vec) {

  for(int i = 0; i < strlen(vec); i++) {
    //printf("%c\n", *(vec+i));
    if(*(vec+i) >= 'a' && *(vec+i) <= 'z') {
      *(vec+i) = *(vec+i) - 'A' + 33;
      //printf("max = %c\n", *(vec+i) - 'A' + 33);
    }
  }

  printf("%s\n", vec);

  return;
}

void f2(char* vec) {

  for(int i = 0; i < strlen(vec); i++) {
    printf("%c <--> %p\n", *(vec+i), vec+i);
  }

  return;
}

void f1(char* vec, char s[]) {

  for(int i = 0; i < strlen(s); i++) {
    *(vec+i) = s[i];
  }

  return;
}

int main() {

  char s[MAX];
  scanf("%s", s);

  char* vec;
  vec = malloc(strlen(s));

  f1(vec, s);

  printf("%s\n", vec);

  f2(vec);

  f3(vec);

  //printf("%s\n", vec);

  return 0;
}
