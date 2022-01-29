#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct date {
  int d;
  int m;
  int y;
} Date;

typedef struct socio {
  int numSocio;
  char *name;
  int age;
  char *job;
  char *adress;
  Date inscr;
} Socio;

typedef struct lnode* List;
typedef struct lnode {
  Socio info;
  List next;
} List_node;

List new_list() {

  List aux;
  aux = (List) malloc(sizeof(List_node));
  if(aux != NULL) {
    aux->info = "0";
    aux->next = NULL;
  }

  return aux;
}


int main() {

  printf("Opções:\n");
  printf("1 - Inserir sócio\n");
  printf("2 - Remover sócio\n");
  printf("3 - Alterar ficha de sócio\n");
  printf("4 - Visualizar sócio\n");
  printf("5 - Pesquisar sócio\n");
  printf("6 - Ordenar sócios - alfabeticamente\n");
  printf("7 - Ordenar sócios - data de inscrição\n");
  printf("\n->  ");

  int n;
  scanf("%d", &n);

  List club = new_list();

  printf("\n");

  if(n == 1) {
    Socio s;
    char str[30];

    printf("Introduza o número de sócio\n->  ");
    scanf("%d", &s.numSocio);
    printf("\n");
    printf("Introduza o nome\n->  ");
    scanf("%s", str);
    s.name = str;
    printf("\n");
    printf("Introduza a idade\n->  ");
    scanf("%d", &s.age);
    printf("\n");
    printf("Introduza a profissão\n->  ");
    scanf("%s", str);
    s.job = str;
    printf("\n");
    printf("Introduxa a morada\n->  ");
    scanf("%s", str);
    s.adress = str;
    printf("\n");
    printf("Introduza a data de inscrição\n->  ");
    scanf("%d %d %d", &s.inscr.d, &s.inscr.m, &s.inscr.y);
    printf("\n");


  }


  return 0;
}
