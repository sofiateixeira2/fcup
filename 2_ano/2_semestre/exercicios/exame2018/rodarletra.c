#include <stdio.h>
#include <ctype.h>

char rodar_letra(char ch) {

  if(!(isalpha(ch))) {

    return ch;

  } else if(isupper(ch)) {

    ch = ch - 'A';
    ch = (ch + 1) % 26;
    ch = ch + 'A';

  } else {

    ch = ch - 'a';
    ch = (ch +1) % 26;
    ch = ch + 'a';

  }

  return ch;
}

int main() {

  char ch;

  printf("Insert a letter: \n");
  scanf("%c", &ch);

  printf("%c\n", rodar_letra(ch));

  return 0;
}
