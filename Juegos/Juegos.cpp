#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include <unistd.h>
#include <iostream>
#include <time.h>
#include <windows.h>

#include <ahorcado.h>
#include <WarCoin.h>
#include <Adivinum.h>
#include <MayMen.h>


#define CANT_INTENTOS 10
#define INTENTOS_MIN 0
#define ULTIMO_INTENTO 1
#define INFERIOR_M 1
#define SUPERIOR_M 999
#define INFERIOR 1000
#define SUPERIOR 9999

void MayMen(int x);
void Adivinum(int x);
void WarCoin(int x);
void Ahorcado(int x);

int main() {

  int Eleccion,x;

  do {
    system("cls");
    printf("**************************************************\n");
  	printf("*                                                *\n");
  	printf("*             ----- JUEGOS  -----                *\n");
  	printf("*                                                *\n");
  	printf("**************************************************\n");
  	printf("*                                                *\n");
  	printf("*  >JUEGOS NUMERICOS:                            *\n");
  	printf("*  1-MayMen                                      *\n");
  	printf("*  2-Adivinum                                    *\n");
  	printf("*  3-WarCoin                                     *\n");
    printf("*                                                *\n");
    printf("*------------------------------------------------*\n");
    printf("*                                                *\n");
  	printf("*  >JUEGOS DE LETRAS                             *\n");
  	printf("*  4-Ahorcado                                    *\n");
    printf("*                                                *\n");
    printf("*------------------------------------------------*\n");
    printf("*                                                *\n");
  	printf("*  5-Salir                                       *\n");
    printf("*                                                *\n");
  	printf("**************************************************\n\n");

    printf("Ingrese una opcion: ");
    scanf("%d",&Eleccion);


    switch (Eleccion) {
      case 1:
      MayMen(x);
      break;

      case 2:
      Adivinum(x);
      break;

      case 3:
      WarCoin(x);
      break;

      case 4:
      Ahorcado(x);
      break;

      case 5:
      EXIT_SUCCESS;
      break;

      default:
      printf("Debe ingresar una de las opciones correctas.\n");
      break;
    }

  } while(Eleccion!=5);



  return 0;
}

void Adivinum(int x) {
    system("cls");
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
	  //printf("\n El secreto es %d \n\n", secreto);


 // printf("\n El secreto es %d \n\n", secreto);
  int respuesta, intentos = 10, puntos=11, intentoWinner=0;
  int Numero_Ingresado[4];


  Logo_Adivinum();
  printf("***** El juego consiste en adivinar un numero de cuatro digitos  ***** \n ");
  printf("Este numero es al azar, y se encuentra entre %d y %d "
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
      printf("Correcto. El numero secreto es %d. Tu puntaje es %d y lo adivinaste en el %d "
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
      printf("Game Over. El numero Secreto es %d", secreto);
      break;
    }
}
system("pause");
}

void MayMen(int x) {
  system("cls");
  srand(getpid());

  int secreto = aleatorio_en_rango(INFERIOR_M, SUPERIOR_M);

  //printf("El secreto es %d\n\n", secreto);
  int respuesta, may=999, men=1, intentos = 10, puntos=10, intentoWinner=1;


  Nombre();
  printf("* El juego consiste en adivinar un numero secreto  * \n ");
  printf("Este numero es al azar, y se encuentra entre %d y %d "
         "Solo tienes  %d intentos\n",INFERIOR_M, SUPERIOR_M, CANT_INTENTOS);
         printf(" Jugamos? \n\n ");
		  system("pause");
      system("cls");

  Nombre();

	printf("\nEMPEZAMOS... \n\n");

  while (1) {

    printf("Ingresa un Num: ");
    scanf("%d", &respuesta);

 	 if(respuesta >= INFERIOR_M && respuesta <= SUPERIOR_M ){


    if (respuesta == secreto) {
      printf("Correcto. El numero secreto es %d. Tu puntaje es %d y lo adivinaste en el %d "
             "intento",
             secreto, puntos, intentoWinner
			 );
      break;
    }

    if (intentos == INTENTOS_MIN ) {
	      printf("Game Over. El numero Secreto es %d", secreto);
	      break;
	    }

	if(intentos == ULTIMO_INTENTO){
	intentos--;
    puntos --;
	intentoWinner ++;
		printf("Error! Es tu ultimo Intento. " );

	}else if(intentos > ULTIMO_INTENTO){
	intentos--;
    puntos --;
	intentoWinner ++;

		     if (respuesta < secreto ) {

		     	if(respuesta > men){

		     	men=respuesta;
		      printf(
		          " Te quedan %d Intentos : Error ! el numero Secreto es mayor, y se encuentra entre %d y %d \n",
		          intentos, men, may);
		      }else{
		      	printf("Error! ingresa un num mayor.\n" );
			  }
		}

			   if(respuesta > secreto  ) {
		    	if(respuesta < may){

		      may=respuesta;
		      printf(
		          " Te quedan %d Intentos : Error! el numero Secreto es menor, y se encuentra entre %d y %d \n",
		          intentos,men,may);
				}else{
						printf("Error! ingresa un num menor.\n" );
				}
		    }

	}else{
		printf("Solo esta permitido ingresar un num dentro del rango \n");

	}

	}

}
system("pause");
}

void WarCoin(int x){

  system("cls");
	int pila,A,D,cantMin,cantMax;

	srand (time(NULL));
  Logo();
	cantMin=ingresoMin();
	cantMax=ingresoMax();
  pila=verificadorPila();
	system("cls");
  Logo();
	printf("La cantidad minima de monedas a extraer es: %i y maxima: %i \n",cantMin,cantMax);
	printf("La cantidad inicial de monedas en la pila es: %i \n\n",pila);



	A=1+rand()%2;

	if(A==1){
		printf("Es tu turno. \n");
	}
	if(A==2){
		printf("Ahora juega la computadora. \n");
	}


	D=turnos(cantMin,cantMax,pila,A);



	if(D==1){
		printf("\n\n\n Game Over!!! Puntos: 0");
	}
	else{
		printf("\n\n\n Ganaste !!! Puntos: 5\n\n");
	}

system("pause");
}

void Ahorcado(int x) {
  system("cls");
  char Palabra[20];
  char Guiones[20];
  int Cant_Caracteres=0;

  Cant_Caracteres=Cargar_Palabra(Palabra);
  Cargar_Guiones(Guiones,Cant_Caracteres);
  Ingreso_Letras(Palabra,Guiones,Cant_Caracteres);
  system("pause");
}
