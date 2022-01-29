#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdbool.h>
#include <limits.h>

int main(int argc, char *argv[]) {

  int opt, i, temp = 0, len, max = INT_MIN, total = argc;
  bool sopt = false, fopt = false, wopt = false;
  char sformat[255] = "%d";
  char fformat[255] = "";
  char wformat[255] = "%0";
  double j;

  opterr = 0;
  while((opt = getopt(argc, argv, "-s:wf:")) != -1) {
    switch(opt) {
      case 's':
        sopt = true; argc -= 2;
        break;
      case 'f':
        fopt = true;
        break;
      case 'w':
        wopt = true; argc -= 1;
        break;
    }
  }

  for(; optind < argc; optind++)
    temp++;

  if(wopt == true) {
    for(int h = 2; h < total; h++) {
      if(total == 5 && h == 3) continue;
      len = strlen(argv[h]);
      if(len > max)
        max = len;
    }
  }

  wformat[2] = max + '0';
  wformat[3] = 'd';
  wformat[4] = '\n';

  strcat(sformat, argv[2]);
  strcpy(fformat, argv[2]);
  strcat(fformat, "\n");

  if(argc == 2) { //CASO TENHA SO LAST
    printf("entrei\n");
    if(sopt == true) {
      for(i = 1; i< atof(argv[3]); i++)
        printf(sformat, i);
      printf("%d\n", i);

    } else if(fopt == true) {
      for(j = 1; j < atof(argv[3]); j++)
        printf(fformat, j);
      printf(fformat, j);

    } else if(wopt == true && fopt == false) {
      for(i = 1; i < atof(argv[2]); i++)
        printf(wformat, i);
      printf(wformat, i);

    } else {
      for(int i = 1; i<= atof(argv[1]); i++)
        printf("%d\n", i);
    }

   //CASO TENHA FIRST E LAST
 } else if(argc == 3) {
    if(sopt == true) {
      for (i = atof(argv[3]); i < atof(argv[4]); i++) {
        printf(sformat, i);
      }
      printf("%d\n", i);

    } else if(fopt == true) {
      for (j = atof(argv[3]); j < atof(argv[4]); j++)
        printf(fformat, j);
      printf(fformat, j);

    } else if(wopt == true && fopt == false) {
      for (i = atof(argv[2]); i < atof(argv[3]); i++)
        printf(wformat, i);
      printf(wformat, i);

    } else {
      for (int i = atof(argv[1]); i <= atof(argv[2]); i++)
        printf("%d\n", i);
    }
  } else { //CASO TENHA OS TRES

    if(sopt == true) {
      float increment = atof(argv[4]);
      if(increment < 0) {
        float incr = abs(increment);
        int n = atof(argv[3]);
        int last1 = atof(argv[5]);
        for(n = atof(argv[3]); n - incr >= last1; n -= incr)
          printf(sformat, n);
        printf("%d\n", n);
      }
      if(increment > 0) {
        int first2 = atof(argv[3]);
        int last2 = atof(argv[5]);
        for( i = first2; i + increment <= last2; i += increment)
        printf(sformat, i);
        printf("%d\n", i);
      }

    } else if(fopt == true) {
      float increment = atof(argv[4]);
      if(increment < 0) {
        float incr = abs(increment);
        int n = atof(argv[3]);
        double x = (double) n;
        int last1 = atof(argv[5]);
        for(x = atof(argv[3]); x - incr >= last1; x -= incr)
          printf(fformat, x);
        printf(fformat, x);
      }
      if(increment > 0) {
        double first2 = atof(argv[3]);
        double last2 = atof(argv[5]);
        for( j = first2; j + increment <= last2; j += increment)
          printf(fformat, j);
        printf(fformat, j);
      }

    } else if(wopt == true && fopt == false) {
      float increment = atof(argv[3]);
      if(increment < 0) {
        float incr = abs(increment);
        int n = atof(argv[2]);
        int last1 = atof(argv[4]);
        for(n = atof(argv[2]); n - incr >= last1; n -= incr)
          printf(wformat, n);
        printf(wformat, n);
      }
      if(increment > 0) {
        double first2 = atof(argv[2]);
        double last2 = atof(argv[4]);
        for( i = first2; i + increment <= last2; i += increment)
          printf(wformat, i);
        printf(wformat, i);
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
      if(increment > 0) {
        int first2 = atof(argv[1]);
        int last2 = atof(argv[3]);
        for(int i = first2; i <= last2; i += increment)
          printf("%d\n", i);
      }

    }


  } //fim do else first inc e last

  return 0;
}
