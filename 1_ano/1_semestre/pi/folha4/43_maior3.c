#include <stdio.h>

int main(void) {

  int n, max=0,med=0;

  printf("Introduza os valores: 0 termina \n");
  scanf("%d",&n );

  while(n!=0){
      if(n>max){
        max=n;
      }
      else{
        med=n;
      }
      if(med>max){
        max=med;
              }
      scanf("%d",&n );
  }
  printf("%d\n\n",max);
  return 0;
}
