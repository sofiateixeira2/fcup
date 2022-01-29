#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
bool c_opt = false, d_opt = false, i_opt = false;

void uniq(FILE *f) {
  int end = 0, count = 1;
  char line1[100];
  char line2[100];
  char prev[100] = " ";

  if(c_opt) {

    fgets(prev, 100, f);
    while(!end) {
      int repeated = 0;
      do {
        repeated++;
        if(fgets(line1, 100, f) == NULL) end = 1;
      } while(!end && (strcasecmp(line1, prev) == 0));
      printf("%d %s", repeated, prev);
      strcpy(prev, line1);
    }

  }else if(d_opt) {

    while(fgets(line1, 100, f) != NULL) {
      while(fgets(line2, 100, f) != NULL) {
        if(strcmp(line1, line2) == 0) count++;
        else break;
      }
      if(count != 1)
      printf("%s", line1);
      count = 1;
    }
  } else if(i_opt) {
    while(fgets(line1, 100, f)) {
      if(strcasecmp(prev, line1) != 0) printf("%s", line1);
      strcpy(prev, line1);
    }
  } else {
    while(fgets(line1, 100, f)) {
      if(strcmp(prev, line1) != 0) printf("%s", line1);
      strcpy(prev, line1);
    }
  }
}

int main(int argc, char *argv[]) {

  FILE *f;
  int opt;

  while((opt = getopt(argc, argv, "cdi")) != -1) {
    switch(opt) {
      case 'c':
        c_opt = true;
        break;
      case 'd':
        d_opt = true;
        break;
      case 'i':
        i_opt = true;
        break;
    }
  }

  if(optind == argc || argv[optind][0] == '-') uniq(stdin);
  else if((f = fopen(argv[optind], "r")) == NULL) printf("No such file\n");
  else uniq(f);


  return 0;
}
