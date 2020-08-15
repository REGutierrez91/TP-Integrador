#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

main() {
	char letra;
  printf("Escribe un caracter:\n");
  scanf("%c", &letra);
	if (isalpha(letra)) {
    printf("Es una letra");
  } else {
    printf("NO es una letra\n");
  }
  return 0;
}
