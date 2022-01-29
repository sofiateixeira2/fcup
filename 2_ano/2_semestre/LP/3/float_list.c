#include <stdio.h>
#include <stdlib.h>

typedef struct lnode* List;
typedef struct lnode {
  float info;
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

void find_list(List list, float key, List *prev, List *atl) {

  *prev = list; *atl = list->next;
  while((*atl) != NULL && (*atl)->info < key) {
    *prev = *atl;
    *atl = (*atl)->next;
  }
  if((*atl) != NULL && (*atl)->info != key)
    *atl = NULL;

}

void insert_list(List list, float n) {
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
    printf("%.1f ", l->info);
    l = l->next;
  }
  printf("\n");
}

int main() {

  int n, s;
  scanf("%d", &n);
  float vec[n];

  List list = new_list();

  for(int i = 0; i < n; i++) {
    scanf("%d", &s);
    vec[i] = s;
    insert_list(list, vec[i]);
  }

  print_list(list);

  return 0;
}
