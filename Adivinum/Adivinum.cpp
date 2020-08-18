#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<iostream>
#include <conio.h>
#include <time.h>
#include <windows.h>

#define CANT_INTENTOS 10
#define INTENTOS_MIN 0
#define ULTIMO_INTENTO 1
#define INFERIOR 1000
#define SUPERIOR 9999



int CrearNumero(int numero,int arreglo[],int tam);
int Concatenar(int x[]);
int Buscar_Posicion(int arreglo[],int numero[]);
int Buscar_Numero(int arreglo[],int numero[]);
void Generar_Arreglo(int numero, int arreglo[]);

int main() {
  int min,max;
    int num_aleatorio;
    int numeros[4];
    int fstop;
    int i;
    min=1;
    max=9;
    srand(time(NULL));
    for(i=0;i<4;i++)
    {
        do{
            num_aleatorio=min+rand()%(max-min+1);
            fstop=CrearNumero(num_aleatorio,numeros,4);
        }while(fstop);
        numeros[i]=num_aleatorio;
        // printf("%d ",numeros[i]);
    }
  //  return(EXIT_SUCCESS);

  srand(getpid());

	int secreto=Concatenar(numeros);
	  printf("\n El secreto es %d \n\n", secreto);


 // printf("\n El secreto es %d \n\n", secreto);
  int respuesta, intentos = 10, puntos=11, intentoWinner=0;
  int Numero_Ingresado[4];


  printf("***** Adivinum ***** \n ");
  printf("***** El juego consiste en adivinar un numero de cuatro digitos  ***** \n ");
  printf("Este número es al azar, y se encuentra entre %d y %d "
         "Solo tienes  %d intentos\n",
         INFERIOR, SUPERIOR, CANT_INTENTOS);
         printf(" Jugamos? \n ");
		  system("pause");

  while (1) {
    int posicion_correcta=0;
    int posicion_incorrecta=0;
    intentos--;
    puntos --;
	intentoWinner ++;
    printf("\nIngresa un Num: ");
    scanf("%d", &respuesta);
    Generar_Arreglo(respuesta,Numero_Ingresado);

    if (respuesta == secreto) {
      printf("Correcto. El número secreto es %d. Tu puntaje es %d y lo adivinaste en el %d "
             "intento",
             secreto, puntos, intentoWinner
			 );
      break;
    }

	if(intentos > ULTIMO_INTENTO){

		     if (respuesta != secreto) { // !=
           posicion_correcta=Buscar_Posicion(numeros,Numero_Ingresado);
           posicion_incorrecta=(Buscar_Numero(numeros,Numero_Ingresado)-posicion_correcta);

		      printf("\n\n Te quedan %d Intentos : Error ! ",intentos);
          printf("\n\n la cantidad de numeros en posicion correcta: %d",posicion_correcta);
          printf("\n\n la cantidad de numeros en otra posicion: %d\n\n",posicion_incorrecta);
		       }

	}else if(intentos == ULTIMO_INTENTO){
		printf("Error! Es tu ultimo Intento. " );

	}

    if (intentos == INTENTOS_MIN ) {
      printf("Game Over. El número Secreto es %d", secreto);
      break;
    }
}
}

int CrearNumero(int numero,int arreglo[],int tam){
    int i, stop=0;
    for (i=0;(i<4 && stop==0);i++)
    {
        if (arreglo[i]==numero)
            stop=1;
    }
    return stop;
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

int Buscar_Posicion(int arreglo[],int numero[]){
    int numero_en_posicion=0;

    for (int i = 0; i < 4; i++) {
      if (numero[i]==arreglo[i]) {
        numero_en_posicion++;
      }
    }
    return numero_en_posicion;
  }

int Buscar_Numero(int arreglo[],int numero[]){

    int numero_en_arreglo=0;

    for (int i = 0; i < 4; i++) {
      for (int j = 0; j < 4; j++) {
        if (numero[j]==arreglo[i]) {
          numero_en_arreglo++;
        }
      }
    }
    return numero_en_arreglo;
  }

void Generar_Arreglo(int numero, int arreglo[]) {
  int aux;
  aux=numero;
  for (int i = 3; i >= 0; i--) {
    arreglo[i]=aux%10;
    aux=aux/10;
  }

}
