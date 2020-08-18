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
