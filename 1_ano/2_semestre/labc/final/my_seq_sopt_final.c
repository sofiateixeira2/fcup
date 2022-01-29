#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>

int main(int argc, char *argv[]) {

  int opt, i;
  bool sopt = false;
  char format[255] = "%d";

  opterr = 0;
  while((opt = getopt(argc, argv, "-s")) != -1) {
    switch(opt) {
      case 's':
        sopt = true; argc -= 2;
        break;
    }
  }
  strcat(format, argv[2]);
//  for(int i = 0; i < argc; i++)
  //  printf("%s\n", argv[i]);

  if(argc == 2) { //CASO TENHA SO LAST
    if(sopt == true) {
      for(i = 1; i< atof(argv[3]); i++) {
        printf(format, i);
      }
      printf("%d\n", i);
    } else {
      for(int i = 1; i<= atof(argv[1]); i++)
        printf("%d\n", i);
    }

   //CASO TENHA FIRST E LAST
 } else if(argc == 3) {
    if(sopt == true) {
      for (i = atof(argv[3]); i < atof(argv[4]); i++) {
        printf(format, i);
      }
      printf("%d\n", i);
    } else {
      for (int i = atof(argv[1]); i <= atof(argv[2]); i++)
        printf("%d\n", i);
    }
  } else { //CASO TENHA OS TRES
    if(sopt == true) {
      float increment = atof(argv[4]);
      if(increment < 0) { //QUANDO INC É NEGATIVO
        float incr = abs(increment);
        int n = atof(argv[3]);
        int last1 = atof(argv[5]);
        for(n = atof(argv[3]); n - incr >= last1; n -= incr)
        printf(format, n);
        printf("%d\n", n);
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
      }
    }
    //QUANDO INC É POSITIVO
    if(sopt == true) {
      float increment = atof(argv[4]);
      if(increment > 0) {
        int first2 = atof(argv[3]);
        int last2 = atof(argv[5]);
        for( i = first2; i + increment <= last2; i += increment)
        printf(format, i);
        printf("%d\n", i);
      }
    } else {
      float increment = atof(argv[2]);
      if(increment > 0) {
        int first2 = atof(argv[1]);
        int last2 = atof(argv[3]);
        for(int i = first2; i <= last2; i += increment)
        printf("%d\n", i);
      }
    }

  }

  return 0;
}
