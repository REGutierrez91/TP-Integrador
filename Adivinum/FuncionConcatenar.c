#include <math.h>
#include <stdio.h>
int Concatenar(int x[]);

int main(int argc, char const *argv[]) {
  int a[4]={4,5,2,6};

  int resultado=Concatenar(a);
  printf("%d\n",resultado);

  return 0;
}





int Concatenar(int x[]){
int numero_completo=0, j=3
;
  for (int i = 0; i < 4; i++) {
    numero_completo=numero_completo+x[i]*pow(10,j);
    j--;

  }
  return numero_completo;
}
