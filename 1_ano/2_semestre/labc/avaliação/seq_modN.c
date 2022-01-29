#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {

  int n = atof(argv[1]);
  int result = 0;


  if(argc == 3) { //CASO TENHA SO LAST
    for(int i = 1; i<= atof(argv[2]); i++) {
      result = i%n;
      printf("%d\n", result);
    }

   //CASO TENHA FIRST E LAST
 } else if(argc == 4) {
    for (int i = atof(argv[2]); i <= atof(argv[3]); i++) {
      result = i%n;
      printf("%d\n", result);
    }

  } else { //CASO TENHA OS TRES

    int increment = atof(argv[3]);
    if(increment < 0) {
      int incr = abs(increment);
      int num = atof(argv[2]);
      int last1 = atof(argv[4]);
      result = num%n;
      printf("%d\n", result);
      while(num -= incr) {
        result = num%n;
        printf("%d\n", result);
        if(num == last1) break;
      }
    }
    if(increment > 0) {
      int first2 = atof(argv[2]);
      int last2 = atof(argv[4]);
      for(int i = first2; i <= last2; i += increment) {
        result = i%n;
        printf("%d\n", result);
      }
    }

  } //fim do else first inc e last

  return 0;
}
