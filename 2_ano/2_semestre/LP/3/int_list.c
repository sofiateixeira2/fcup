#include <stdio.h>
#include <stdlib.h>

typedef struct lnode* List;
typedef struct lnode {
  int info;
  List next;
} List_node;

List new_list() {

  List aux;
  aux = (List) malloc(sizeof(List_node));
  if(aux != NULL) {
    aux->info = 0;
    aux->next = NULL;
  }

  return aux;
}

void find_list(List list, int key, List *prev, List *atl) {

  *prev = list; *atl = list->next;
  while((*atl) != NULL && (*atl)->info < key) {
    *prev = *atl;
    *atl = (*atl)->next;
  }
  if((*atl) != NULL && (*atl)->info != key)
    *atl = NULL;

}

void insert_list(List list, int n) {
  List node;
  List prev, tmp;
  node = (List) malloc(sizeof(List_node));
  if(node != NULL) {
    node->info = n;
    find_list(list, n, &prev, &tmp);
    node->next = prev->next;
    prev->next = node;
  }
}

void print_list(List list) {
  List l = list->next;
  while(l) {
    printf("%d ", l->info);
    l = l->next;
  }
  printf("\n");
}

int main() {

  int n;
  scanf("%d", &n);

  List list = new_list();

  while(n != -1) {
    insert_list(list, n);
    scanf("%d", &n);
  }

  print_list(list);

  return 0;
}
