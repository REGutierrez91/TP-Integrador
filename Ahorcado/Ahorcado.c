#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>


void IngresarPalabra(char x[],int *y);
void ReemplazarLetras(char x[],int y);
//int ValidarAlfa(char x);

int main(void) {
  /* code */


  //char B[15]={'_','_','_','_','_','_','_','_','_','_','_','_','_','_','_',};
  char a[20];
  int cantCaracteres=0;

  IngresarPalabra(a,&cantCaracteres);


  printf("%d \n",cantCaracteres);





}

void IngresarPalabra(char x[],int *y){
  char z;
  for (int h = 0; h < 20; h++) {

    printf("Jugador A, ingresa una palabra letra por letra para empezar el juego\n");
    printf("Para finalizar ingresa un punto al final (.)\n\n");
    system("pause");
    system("cls");
    printf("Palabra:\n");

    //int i=0;
    do {
      scanf("%c",&z);

      if (isalpha(z)) {
        printf("Es una letra");
      } else {
        printf("NO es una letra");
      }
      /*

      }
      else{
        printf("debes ingresar solo letras, prueba otra vez\n");
        system("pause");
        system("cls");
      }*/
    } while(z!=0);




  }
}
/*
void ReemplazarLetras(char x[20],int y){
  char z;
  for (int i = 0; i <= y; i++) {
    printf("ingrese una letra:");
    scanf("%c",&z );



  }

}
int ValidarAlfa(char x){
  if (isalpha(x)) {
    printf("Es una letra");
  } else {
    printf("NO es una letra");
  }

  return isalpha(x);
}*/
