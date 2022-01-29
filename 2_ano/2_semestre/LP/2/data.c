#include <stdio.h>
#include <stdbool.h>

typedef
  struct {
    int dia;
    int mes;
    int ano;
  }
  data;

void print(data d) {
  printf("%d %d %d\n", d.dia, d.mes, d.ano);
  return;
}

int cmp(data d1, data d2) {

  if(d1.ano == d2.ano) {
    if(d1.mes == d2.mes) {
      if(d1.dia == d2.dia) return 0;
      else if(d1.dia < d2.dia) return -1;
      else return 1;
    } else if(d1.mes < d2.mes) return -1;
    else return 1;
  } else if(d1.ano < d2.ano) return -1;
  else return 1;

}

bool isBissexto(int n) {

  if(n%400 == 0 || (n%4 == 0 && n%100 != 0)) return true;
  return false;
}

int end_month(data d) {

  if(d.mes == 2) {
    if(isBissexto(d.ano) && d.dia == 29) return true;
    if(!isBissexto(d.ano) && d.dia == 28) return true;
  } else {
    if(d.mes < 8) {
      if(d.mes%2 != 0 && d.dia == 31) return true;
      if(d.mes%2 == 0 && d.dia == 30) return true;
    } else {
      if(d.mes%2 == 0 && d.dia == 31) return true;
      if(d.mes%2 != 0 && d.dia == 30) return true;
    }
  }

  return false;
}

data nextday(data d) {
  data nd = d;
  if(end_month(d)) {
    nd.dia = 1;
    if(d.mes == 12) {
      nd.mes = 1;
      nd.ano ++;
    } else nd.mes++;
  } else {
    nd.dia++;
  }
  return nd;
}

data dif(data d1, data d2) {

  data result;
  result.dia = result.mes = result.ano = 0;
  data temp = d1;

  if(d1.ano == d2.ano) {
    result.ano = 0;
    if(d1.mes == d2.mes) {
      result.mes = 0;
      if(d1.dia == d2.dia) {
        result.dia = 0;
      }
      else if(d1.dia < d2.dia) {
        result.dia = d2.dia - d1.dia;
      }
      else {
        result.dia = d1.dia - d2.dia;
      }
    } else if(d1.mes < d2.mes) {
      int count = 0;
      while(cmp(temp, d2) != 0) {
        count++;
        if(temp.dia == d2.dia) {
          printf("1 mes\n");
          result.mes++;
          count = 0;
        }
        if(result.mes == 12) {
          result.ano++;
          result.mes = 0;
        }
        temp = nextday(temp);
      }
      result.dia = count;
      printf("%d\n", count);
    }
    else {
      int count = 0;
      while(cmp(temp, d1) != 0) {
        count++;
        if(temp.dia == d1.dia && temp.ano == d1.ano) {
          result.mes++;
          count = 0;
        }
        if(result.mes == 12) {
          result.ano++;
          result.mes = 0;
        }
        temp = nextday(temp);
      }
      printf("%d\n", count);

    }
  } //tmp
  /*} else if(d1.ano < d2.ano) {

  }
  else {

  }*/

  return result;
}

int main() {

  data d1, d2;
  scanf("%d %d %d", &d1.dia, &d1.mes, &d1.ano);
  scanf("%d %d %d", &d2.dia, &d2.mes, &d2.ano);

  data c = dif(d1, d2);
  print(c);

  return 0;
}
