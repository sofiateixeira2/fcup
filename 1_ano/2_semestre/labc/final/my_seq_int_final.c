#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

  if(argc == 2) {
    for(int i = 1; i<= atof(argv[1]); i++) {
      printf("%d\n", i);
    }
  } else if(argc == 3) {
    for (int i = atof(argv[1]); i <= atof(argv[2]); i++) {
      printf("%d\n", i);
    }
  } else {
    float increment = atof(argv[2]);

    if(increment < 0) {
      float incr = abs(increment);
      int n = atof(argv[1]);
      int last1 = atof(argv[3]);
      printf("%d\n", n);
      while(n -= incr) {
        printf("%d\n", n);
        if(n == last1) break;
      }
    } else {
      int first2 = atof(argv[1]);
      int last2 = atof(argv[3]);
      for(int i = first2; i <= last2; i += increment) {
        printf("%d\n", i);
      }
    }
  }

  return 0;
}
