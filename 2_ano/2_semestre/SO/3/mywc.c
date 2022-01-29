#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 300

int main(int argc, char* argv[]) {

  if(argc == 2) {

    FILE* f;
    f = fopen(argv[1], "r");
    char c;
    int count = 0;
    while((c = getc(f)) != EOF) count++;
    printf("%d\n", count);
    fclose(f);

  } else if(argc > 2) {

    FILE* f;
    f = fopen(argv[2], "r");

    if(strcmp(argv[1], "-c") == 0) {
      char c;
      int count = 0;
      while((c = getc(f)) != EOF) count++;
      printf("%d\n", count);

    } else if(strcmp(argv[1], "-w") == 0) {
      char* s = (char*)malloc(sizeof(char));
      int count = 0;
      while(fscanf(f, "%s", s) == 1) {
        count++;
      }
      printf("%d\n", count);

    } else if(strcmp(argv[1], "-l") == 0) {
      char* s = (char*)malloc(sizeof(char));
      int count = 0;
      while(fgets(s, MAX, f) != NULL)
        count++;
      printf("%d\n", count);
    }

    fclose(f);
  }


  return 0;
}
