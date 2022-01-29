#include <stdio.h>
#include <string.h>
#include <ctype.h>

void ord(char seq[], char sord[]) {

  int j = 0;
  char c;
  int n = strlen(seq);

  for(int i = 0; i < n; i++) {
    if(isalpha(seq[i]) != 0) {
      sord[j] = seq[i];
      sord[j+1] = '\0';
      j++;
    }
  }

  int s = strlen(sord);
  for(int i = 0; i < s-1; i++) {
    for(j = i+1; j < s; j++) {
      if(tolower(sord[i]) > tolower(sord[j])) {
        c = tolower(sord[i]);
        sord[i] = tolower(sord[j]);
        sord[j] = c;
      }
    }
  }
}

int main() {

  char s1[201] = {'\0'};
  char s2[201] = {'\0'};

  scanf("%[^\n]s", s1);
  scanf("\n%s", s2);

  int n = strlen(s1);
  int n1 = strlen(s2);

  char s1ord[n];
  char s2ord[n1];

  ord(s1, s1ord);
  ord(s2, s2ord);

  if(strlen(s1ord) != strlen(s2ord)) printf("no\n");
  else {
    if(strcmp(s1ord, s2ord) == 0) printf("yes\n");
    else printf("no\n");
  }

  return 0;
}
