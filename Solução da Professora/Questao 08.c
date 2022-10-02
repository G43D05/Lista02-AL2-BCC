//A SOLUAÇÃO DA PROFESSORA NÃO TEM MODULAÇÃO
//O QUE ESTÁ ENTRE /**/ É O ORIGINAL

#include <stdio.h>

void imprimir(int n);

int main()
{
    int n/*, a1, a2, i, aux*/;
    scanf("%d", &n);
    imprimir(n);
    /*a1 = 0;
    a2 = 1;
    printf("%d\n", a1);
    if (n >= 2){
        printf("%d\n", a2);
    }
    for (i = 3; i <= n; i++){
        aux = a1 + a2;
        printf("%d\n", aux);
        a1 = a2;
        a2 = aux;
    }*/
}

void imprimir(int n){
  int a1, a2, i, aux;
  a1 = 0;
  a2 = 1;
  printf("%d\n", a1);
  if (n >= 2){
      printf("%d\n", a2);
  }
  for (i = 3; i <= n; i++){
      aux = a1 + a2;
      printf("%d\n", aux);
      a1 = a2;
      a2 = aux;
  }
}
