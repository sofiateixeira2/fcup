#include <stdio.h>
#include <ctype.h>

int main(int argc, char *argv[]) {

  FILE *f;
  int lines = 0;
  int words = 0;
  int bytes = 0;
  char c;
  char temp = ' ';
  int flag = 0;
  int flag2 = 0;
  int linest = 0;
  int wordst = 0;
  int bytest = 0;

  if(argc < 2) {
    argc = 2;
    flag++;
  }

  for(int i=1; i<argc; i++) {
    if((flag || ((*++argv)[0] == '-' && (*argv)[1] == '\0'))) {
      f = stdin;
    } else if((f = fopen(*argv, "r")) == NULL) {
      fprintf(stderr, "./my_wc: <%s>: No such file or directory\n", *argv);
      continue;
    }
    while((c = getc(f)) != EOF) {
      if(flag2 == 0) {
        temp = c;
        flag2++;
      }
      if(c == '\n')
        lines++;

      if((c == ' ' || c == '\n' || c == '\t') && (temp != ' ' && temp != '\n' && temp != '\t'))
        words++;
      temp = c;

      bytes++;
    }

    if(f != stdin)
      fclose(f);

    if(argc > 2) {
      linest += lines;
      wordst += words;
      bytest += bytes;
    }

    printf("%d %d %d\n", lines, words, bytes);
    lines = 0;
    words = 0;
    bytes = 0;
  }

  if(argc > 2)
    printf("%d %d %d total\n", linest, wordst, bytest);

  return 0;
}
