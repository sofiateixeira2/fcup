#include <stdio.h>
#include <math.h>

double aprox_pi1(int n1) {

  double pi1, sum=0;
  int i, y;

  for(i=0; i<=10; i++) {

    if(i%2==0) {
      y=1.0;
    } else {
      y= -1.0;
    }

    sum=sum+(y/(2.0*i+1));
  }

  pi1=4.0*sum;

  return pi1;
}

double aprox_pi2(int n2) {

  double pi2, sum=0;
  int i, y;

  for(i=0; i<=100; i++) {

    if(i%2==0) {
      y=1.0;
    } else {
      y= -1.0;
    }

    sum=sum+(y/(2.0*i+1));
  }

  pi2=4.0*sum;

  return pi2;
}

double aprox_pi3(int n3) {

  double pi3, sum=0;
  int i, y;

  for(i=0; i<=1000; i++) {

    if(i%2==0) {
      y=1.0;
    } else {
      y= -1.0;
    }

    sum=sum+(y/(2.0*i+1));
  }

  pi3=4.0*sum;

  return pi3;
}

int main(void) {

  int n1=10, n2=100, n3=1000;

  printf("Para n=10: %f\n", aprox_pi1(n1));
  printf("Para n=100: %f\n", aprox_pi2(n2));
  printf("Para n=1000: %f\n", aprox_pi3(n3));
  printf("PI = %f\n", M_PI);

  return 0;

}
