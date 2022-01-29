#include <stdio.h>
#include <string.h>

#define MAX_SIZE  100

int montanhas(char str[]) {

  int height = 0, prevheight = 0, sum = 0;

  for(int i = 0; str[i] != '\0'; i++){

    if(str[i] == 'S'){
      height++;
    }
    else{
    height--;
    }

    if(height == 0 && prevheight == 1){
      sum++;
    }
    
    prevheight = height;
  }

  return sum;

}

int main() {

  char str[MAX_SIZE];

  printf("Introduza o percurso:\n");
  fgets(str, MAX_SIZE, stdin);

  printf("Número de montanhas: %d\n", montanhas(str));

  return 0;
}
