#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <iostream>
#include <ctype.h>

#define CANT_INTENTOS 10
#define INTENTOS_MIN 0
#define ULTIMO_INTENTO 1
#define INFERIOR_M 1
#define SUPERIOR_M 999


int aleatorio_en_rango(int minimo, int maximo);
void Nombre();

int main() {

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
      printf("Correcto. El número secreto es %d. Tu puntaje es %d y lo adivinaste en el %d "
             "intento",
             secreto, puntos, intentoWinner
			 );
      break;
    }

    if (intentos == INTENTOS_MIN ) {
	      printf("Game Over. El número Secreto es %d", secreto);
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
		          " Te quedan %d Intentos : Error ! el número Secreto es mayor, y se encuentra entre %d y %d \n",
		          intentos, men, may);
		      }else{
		      	printf("Error! ingresa un num mayor.\n" );
			  }
		}

			   if(respuesta > secreto  ) {
		    	if(respuesta < may){

		      may=respuesta;
		      printf(
		          " Te quedan %d Intentos : Error! el número Secreto es menor, y se encuentra entre %d y %d \n",
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
}


int aleatorio_en_rango(int minimo, int maximo) {
  return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

void Nombre(){
printf("========================================================================\n");
printf("  .___  ___.      ___      ____    ____ .___  ___.  _______ .__   __. \n");
printf("  |   \\/   |     /   \\     \\   \\  /   / |   \\/   | |   ____||  \\ |  | \n");
printf("  |  \\  /  |    /  ^  \\     \\   \\/   /  |  \\  /  | |  |__   |   \\|  | \n");
printf("  |  |\\/|  |   /  /_\\  \\     \\_    _/   |  |\\/|  | |   __|  |  . `  | \n");
printf("  |  |  |  |  /  _____  \\      |  |     |  |  |  | |  |____ |  |\\   | \n");
printf("  |__|  |__| /__/     \\__\\     |__|     |__|  |__| |_______||__| \\__| \n\n");
printf("========================================================================\n");
}
