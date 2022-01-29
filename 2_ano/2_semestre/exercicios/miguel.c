#include <stdio.h>

int main(void) {
  int v[100],n,i,max=0,med=0;

  printf("quantos numeros sao? 0-sair\n\n");
  scanf("%d",&n);
while(n==0){break;}
  for(i=0;i<n;i++){
    printf("digite o numero %d:\n",i+1 );
    scanf("%d",&v[i]);
    if(v[i]>max){
      max=v[i];
    }
    else{med=v[i];}
    if(med>max){max=med;}
  }printf("%d\n",max);
  return 0;
}
