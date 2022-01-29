#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

  if(argc == 2) {
    for(int i = 1; i<= atof(argv[1]); i++) {  //apenas 1 argumento (last)
      printf("%d\n", i);
    }
  } else if(argc == 3) {
    for (int i = atof(argv[1]); i <= atof(argv[2]); i++) {  //dois argumentos (first e last)
      printf("%d\n", i);
    }
  } else {  //os três argumentos (first, increment e last)
    float increment = atof(argv[2]);
    float incr = abs(increment);

    if(increment < 0) {
      if(strchr(argv[2], '.') != NULL) {  //caso seja float
        double n = atof(argv[1]);
        float last = atof(argv[3]);
        printf("%.1f\n", n);
        while(n -= incr) {
          printf("%.1f\n", n);
          if(n == last) break;
        }
      } else {  //caso seja inteiro
        int n = atof(argv[1]);
        int last1 = atof(argv[3]);
        printf("%d\n", n);
        while(n -= incr) {
          printf("%d\n", n);
          if(n == last1) break;
        }
      }

    } else { //caso increment seja positivo
      int first2 = atof(argv[1]);
      int last2 = atof(argv[3]);
      if((strchr(argv[2], '.') != NULL) && increment > 0) { //caso seja float
        for(double i = atof(argv[1]); i <= atof(argv[3]); i += increment) {
          printf("%.1f\n", i);
        }
      printf("%.1f\n", atof(argv[3]));
      } else { //caso seja inteiro
        for(int i = first2; i <= last2; i += increment) {
          printf("%d\n", i);
        }
      }
    }
  }

  return 0;
}
