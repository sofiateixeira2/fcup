#include <stdio.h>

int main(void) {
  int age, teenager;

  printf("Introduza a uma idade\n");
  scanf("%d", &age);

  if (age>=13 && age<=19)
    teenager=1;
  else teenager=0;

  printf("%d\n", teenager);

    return 0;
}
