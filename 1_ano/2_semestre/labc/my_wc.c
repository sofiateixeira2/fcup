#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <string.h>

int main(int argc, char *argv[]) {

  FILE *f;
  int lines, words, bytes;
  char c;
  char temp = ' ';
  int flag = 0, flag2 = 0, temp2 = 0;
  int linest = 0, wordst = 0, bytest = 0;
  int opt;
  bool cBytes = false, cWords = false, cLines = false, cLLine = false;
  int curLine, longLine, max = 0;


  while((opt = getopt(argc, argv, "clwL")) != -1) {
    switch(opt) {
      case 'c':
        cBytes = true;
        break;
      case 'l':
        cLines = true;
        break;
      case 'w':
        cWords = true;
        break;
      case 'L':
        cLLine = true;
        break;
    }
  }

  if(argc < 2) {
    argc = 2;
    flag++;
  } else {
      for(; optind < argc; optind++)
        temp2++;
  }

  for(int i=1; i<argc; i++) {
    bytes = words = lines = curLine = longLine = 0;
    if((flag || ((*++argv)[0] == '-' && (*argv)[1] == '\0'))) {
      f = stdin;
    } else if((f = fopen(*argv, "r")) == NULL) {
      if(!(!strcmp(*argv, "-c") || !strcmp(*argv, "-l") || !strcmp(*argv, "-w") || !strcmp(*argv, "-L")))
        fprintf(stderr, "./my_wc: <%s>: No such file or directory\n", *argv);
      continue;
    }

    while((c = getc(f)) != EOF) {

      curLine++;

      if(bytes == 0)
        temp = c;

      if(c == '\n') {
        lines++, longLine = curLine > longLine ? curLine : longLine, curLine = 0;
        if(temp != ' ' && temp != '\n' && temp != '\t')
          words++;
      } else if((c == ' ' || c == '\n' || c == '\t') && (temp != ' ' && temp != '\n' && temp != '\t')) {
        words++;
      }
      temp = c;

      bytes++;
    }

    longLine = curLine > longLine ? curLine : longLine;
    longLine--;

    if(cLines == false && cWords == false && cBytes == false && cLLine == false)
      printf("%d %d %d\n", lines, words, bytes);
    else if(cLines && cWords && cBytes && cLLine)
      printf("%d %d %d %d\n", lines, words, bytes, longLine);
    else if(cLines && cWords && cBytes)
      printf("%d %d %d\n", lines, words, bytes);
    else if(cLines && cWords && cLLine)
      printf("%d %d %d\n", lines, words, longLine);
    else if(cLines && cBytes && cLLine)
      printf("%d %d %d\n", lines, bytes, longLine);
    else if(cWords && cBytes && cLLine)
      printf("%d %d %d\n", words, bytes, longLine);
    else if(cLines && cWords)
      printf("%d %d\n", lines, words);
    else if(cLines && cBytes)
      printf("%d %d\n", lines, bytes);
    else if(cLines && cLLine)
      printf("%d %d\n", lines, longLine);
    else if(cWords && cBytes)
      printf("%d %d\n", words, bytes);
    else if(cWords && cLLine)
      printf("%d %d\n", words, longLine);
    else if(cBytes && cLLine)
      printf("%d %d\n", bytes, longLine);
    else if(cLines)
      printf("%d\n", lines);
    else if(cWords)
      printf("%d\n", words);
    else if(cBytes)
      printf("%d\n", bytes);
    else if(cLLine)
      printf("%d\n", longLine);




    linest += lines;
    wordst += words;
    bytest += bytes;
    if(longLine > max)
      max = longLine;

  }

  if(temp2 > 1) {

  if(cLines == false && cWords == false && cBytes == false && cLLine == false)
    printf("%d %d %d total\n", linest, wordst, bytest);
  else if(cLines && cWords && cBytes && cLLine)
    printf("%d %d %d %d total\n", linest, wordst, bytest, max);
  else if(cLines && cWords && cBytes)
    printf("%d %d %d total\n", linest, wordst, bytest);
  else if(cLines && cWords && cLLine)
    printf("%d %d %d total\n", linest, wordst, max);
  else if(cLines && cBytes && cLLine)
    printf("%d %d %d total\n", linest, bytest, max);
  else if(cWords && cBytes && cLLine)
    printf("%d %d %d total\n", wordst, bytest, max);
  else if(cLines && cWords)
    printf("%d %d total\n", linest, wordst);
  else if(cLines && cBytes)
    printf("%d %d total\n", linest, bytest);
  else if(cLines && cLLine)
    printf("%d %d total\n", linest, max);
  else if(cWords && cBytes)
    printf("%d %d total\n", wordst, bytest);
  else if(cWords && cLLine)
    printf("%d %d total\n", wordst, max);
  else if(cBytes && cLLine)
    printf("%d %d total\n", bytest, max);
  else if(cLines)
    printf("%d total\n", linest);
  else if(cWords)
    printf("%d total\n", wordst);
  else if(cBytes)
    printf("%d total\n", bytest);
  else if(cLLine)
    printf("%d total\n", max);
  }

  return 0;
}
