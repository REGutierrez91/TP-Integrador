  
#include <stdio.h>  
#include <stdlib.h> 
#include <unistd.h> 
#include<iostream>

#define CANT_INTENTOS 10
#define INTENTOS_MIN 0
#define ULTIMO_INTENTO 1
#define INFERIOR 1 
#define SUPERIOR 999 


int aleatorio_en_rango(int minimo, int maximo);


int main() {
  
  srand(getpid());
 
  int secreto = aleatorio_en_rango(INFERIOR, SUPERIOR);
  
  printf("El secreto es %d\n\n", secreto);
  int respuesta, may=999, men=1, intentos = 10, puntos=11, intentoWinner=0;


  printf("***** MayMen ***** \n ");
  printf("***** El juego consiste en adivinar un numero secreto  ***** \n ");
  printf("Este número es al azar, y se encuentra entre %d y %d "
         "Solo tienes  %d intentos\n",
         INFERIOR, SUPERIOR, CANT_INTENTOS);
         printf(" Jugamos? \n ");
		  system("pause");  

  while (1) {
    intentos--;
    puntos --; 
	intentoWinner ++;
    printf("Ingresa un Num: ");
    scanf("%d", &respuesta);
    if (respuesta == secreto) {
      printf("Correcto. El número secreto es %d. Tu puntaje es %d y lo adivinaste en el %d "
             "intento",
             secreto, puntos, intentoWinner
			 );
      break;
    } 
    
	if(intentos > ULTIMO_INTENTO){
    	 
		     if (respuesta < secreto) {
		     	men=respuesta;
		      printf(
		          " Te quedan %d Intentos : Error ! el número Secreto es mayor, y se encuentra entre %d y %d \n",
		          intentos, men, may);
		           
		    } else if(respuesta > secreto) {
		      may=respuesta;
		      printf(
		          " Te quedan %d Intentos : Error! el número Secreto es menor, y se encuentra entre %d y %d \n",
		          intentos,men,may);
		          
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


// Definir función cuyo prototipo está al inicio
// Devuelve un número aleatorio en un rango
int aleatorio_en_rango(int minimo, int maximo) {
  return minimo + rand() / (RAND_MAX / (maximo - minimo + 1) + 1);
}

