#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>
#include <unistd.h>
int size = 0, r_opt = 0, n_opt = 0;

void set_arr(FILE *f, char *arr[]) {
  char *line = malloc(1000 * sizeof(char));
  char cur;
  int flag = 0;

  for(int i = 0; fscanf(f, "%c", &cur) != EOF;) {
    *(line + i++) = cur;
    flag = 1;
    if(cur == '\n') {
      *(arr + size++) = line;
      line = malloc(1000 * sizeof(char));
      i = flag = 0;
    }
  }
  if(flag)
    *(arr + size++) = line;
}

void swap(char* a, char* b) {
  char* t = malloc(100 * sizeof(char));

  strcpy(t, a);
  strcpy(a, b);
  strcpy(b, t);
}

int partition(char* sort[], int low, int high) {
  char* pivot = sort[high];
  int i = low - 1;

  for(int j = low; j < high; j++)
    if(strcmp(sort[j], pivot) > 0 ? 0 : 1) swap(sort[++i], sort[j]);

  swap(sort[++i], sort[high]);

  return i;
}

void quicksort(char* sort[], int low, int high) {
  if(low < high) {
    int pivot = partition(sort, low, high);
    quicksort(sort, low, pivot - 1);
    quicksort(sort, pivot + 1, high);
  }
}

int main(int argc, char *argv[]) {

  int opt;
  FILE *f;
  char **arr = malloc(1000 * 1000 * sizeof(char));

  while((opt = getopt(argc, argv, "rn")) != -1) {
    switch(opt) {
      case 'r':
        r_opt = 1;
        break;
      case 'n':
        n_opt = 1;
        break;
    }
  }

  if(optind == argc) set_arr(stdin, arr);

  for(; optind < argc; optind++) {
    if(argv[optind][0] == '-') set_arr(stdin, arr);
    else if((f = fopen(argv[optind], "r")) == NULL) continue;
    else set_arr(f, arr);
  }

  quicksort(arr, 0, size-1);

  if(r_opt) {
    for(int i = size-1; i >= 0; i--) {
      printf("%s", *(arr + i));
      if(arr[i][strlen(arr[i]) - 1] != '\n') printf("\n");
    }
  } else {
    for(int i = 0; i < size; i++) {
      printf("%s", *(arr + i));
      if(arr[i][strlen(arr[i]) - 1] != '\n') printf("\n");
    }
  }


  if(f != stdin)
    fclose(f);


  return 0;
}
