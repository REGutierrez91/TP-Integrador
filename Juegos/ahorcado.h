
int Cargar_Palabra(char Palabra[]) {

  int contador = 0,a=0;
  bool bandera=true;
  do {
    printf("Jugador A, ingresa una palabra letra por letra para empezar el juego!!!\n");
    printf("Para finalizar ingresa un punto al final (.)\n\n");

    printf("Palabra:\n");
    do{
      scanf("%s",&Palabra[contador]);
      Palabra[contador]=toupper(Palabra[contador]);
      if(Palabra[contador] == '.') break;
      contador++;
    }while (Palabra[contador]!='.');

    for (int i = 0; i < contador; i++) {

      a=isalpha(Palabra[i]);
      if(a==0){
        printf("\n Error! - Debes ingresar solo letras -.-");
        printf("\nIntentalo otra vez!\n");
        system("pause");
        system("cls");
        bandera=true;
        contador=0;
        break;
      } else {
        bandera=false;
      }

    }

  } while(bandera);


  return contador;
}

void Cargar_Guiones(char Guiones[], int Cant_Caracteres) {

  for (int i = 0; i < Cant_Caracteres; i++) {
    Guiones[i]='_';
  }
}

void Grafico(int x) {
  if (x==0) {

    printf("***************************************************************\n");
    printf("*                    +--------+                               *\n");
    printf("*                    |        |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("***************************************************************\n");
  }
  if (x==1) {
    printf("***************************************************************\n");
    printf("*                    +--------+                               *\n");
    printf("*                    |        |                               *\n");
    printf("*                    O        |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("***************************************************************\n");
  }
  if (x==2) {
    printf("***************************************************************\n");
    printf("*                    +--------+                               *\n");
    printf("*                    |        |                               *\n");
    printf("*                    O        |                               *\n");
    printf("*                    |        |                               *\n");
    printf("*                    |        |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("***************************************************************\n");
  }
  if (x==3) {
    printf("***************************************************************\n");
    printf("*                    +--------+                               *\n");
    printf("*                    |        |                               *\n");
    printf("*                    O        |                               *\n");
    printf("*                   /|        |                               *\n");
    printf("*                    |        |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("***************************************************************\n");
  }
  if (x==4) {
    printf("***************************************************************\n");
    printf("*                    +--------+                               *\n");
    printf("*                    |        |                               *\n");
    printf("*                    O        |                               *\n");
    printf("*                   /|\\       |                               *\n");
    printf("*                    |        |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("***************************************************************\n");
  }
  if (x==5) {
    printf("***************************************************************\n");
    printf("*                    +--------+                               *\n");
    printf("*                    |        |                               *\n");
    printf("*                    O        |                               *\n");
    printf("*                   /|\\       |                               *\n");
    printf("*                  * |        |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("***************************************************************\n");
  }
  if (x==6) {
    printf("***************************************************************\n");
    printf("*                    +--------+                               *\n");
    printf("*                    |        |                               *\n");
    printf("*                    O        |                               *\n");
    printf("*                   /|\\       |                               *\n");
    printf("*                  * | *      |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("***************************************************************\n");
  }
  if (x==7) {
    printf("***************************************************************\n");
    printf("*                    +--------+                               *\n");
    printf("*                    |        |                               *\n");
    printf("*                    O        |                               *\n");
    printf("*                   /|\\       |                               *\n");
    printf("*                  * | *      |                               *\n");
    printf("*                   /         |                               *\n");
    printf("*                  /          |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("***************************************************************\n");
  }
  if (x==8) {
    printf("***************************************************************\n");
    printf("*                    +--------+                               *\n");
    printf("*                    |        |                               *\n");
    printf("*                    O        |                               *\n");
    printf("*                   /|\\       |                               *\n");
    printf("*                  * | *      |                               *\n");
    printf("*                   / \\       |                               *\n");
    printf("*                  /   \\      |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("***************************************************************\n");
  }
  if (x==9) {
    printf("***************************************************************\n");
    printf("*                    +--------+                               *\n");
    printf("*                    |        |                               *\n");
    printf("*                    O        |                               *\n");
    printf("*                   /|\\       |                               *\n");
    printf("*                  * | *      |                               *\n");
    printf("*                   / \\       |                               *\n");
    printf("*                 _/   \\      |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("***************************************************************\n");
  }
  if (x==10) {
    printf("***************************************************************\n");
    printf("*                    +--------+                               *\n");
    printf("*                    |        |                               *\n");
    printf("*                    O        |                               *\n");
    printf("*                   /|\\       |                               *\n");
    printf("*                  * | *      |                               *\n");
    printf("*                   / \\       |                               *\n");
    printf("*                 _/   \\_     |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("***************************************************************\n");
    /*
	  printf("***************************************************************\n");
    Printf("*               _____      ____      ____ ____ _______        *\n");
    printf("*              / ___ |    /   |     /   |/   | |  ___|        *\n");
    printf("*             | |        / /| |    / /|   /| | | |__          *\n");
    printf("*             | | __    / ___ |   / / |__/ | | |  __|         *\n");
    printf("*             | |_| |  / /  | |  / /       | | | |___         *\n");
    printf("*             \\_____/ /_/   |_| /_/        |_| |_____|        *\n");
    printf("*              _____   _     _   _____   _____                *\n");
    printf("*             /  _  \\ | |   / / |  ___| |  _  \\               *\n");
    printf("*             | | | | | |  / /  | |__   | |_| |               *\n");
    printf("*             | | | | | | / /   |  __|  |  _  /               *\n");
    printf("*             | |_| | | |/ /    | |___  | | \\ \\               *\n");
    printf("*             \\_____/ |___/     |_____| |_|  \\_\\              *\n");
    printf("***************************************************************\n");*/
  }
  if (x==11) {
    printf("***************************************************************\n");
    printf("*                    +--------+                               *\n");
    printf("*                    |        |                               *\n");
    printf("*                    O        |                               *\n");
    printf("*                   /|\\       |                               *\n");
    printf("*                  * | *      |                               *\n");
    printf("*                   / \\       |                               *\n");
    printf("*                 _/   \\_     |                               *\n");
    printf("*                             |                               *\n");
    printf("*                             |                               *\n");
    printf("***************************************************************\n");
    printf("*  ___                  _   _        _             _   _   _  *\n");
    printf("* | _ \\  ___   _ _   __| | (_)  ___ | |_   ___    | | | | | | *\n");
    printf("* |  _/ / -_) | '_| / _` | | | (_-< |  _| / -_)   |_| |_| |_| *\n");
    printf("* |_|   \\___| |_|   \\__,_| |_| /__/  \\__| \\___|   (_) (_) (_) *\n");
    printf("*                                                             *\n");
    printf("***************************************************************\n");
  }
}

void Ingreso_Letras(char Palabra[], char Guiones[], int Cant_Caracteres){
  char Letra_Ingresada;
  char Letras_Erroneas[12];
  int Errores=0;
  int bandera;
  int gano=0;
  int aciertos=0;

  system("cls");
  printf("\n\nJugador B, que comience el juego! >:)\n");
  system("pause");
  system("cls");

  do {
    system("cls");
    Grafico(Errores);
    printf("\t");
    for (int g = 0; g < Cant_Caracteres; g++) {   //impresion de
      printf(" %c",Guiones[g]);
    }
    printf("\n\nLetras erroneas ingresadas: ");
    for (int h = 0; h <= Errores; h++) {
      printf("%c ",Letras_Erroneas[h]);
    }
    printf("\nerrores:%d\n",Errores);
    printf("Aciertos:%d\n",aciertos);

    printf("\n\nIngrese una letra:");
    scanf("%s",&Letra_Ingresada);
    Letra_Ingresada=toupper(Letra_Ingresada);
    bandera=0;
    for (int i = 0; i < Cant_Caracteres; i++) {
      if (Letra_Ingresada==Palabra[i]) {
        Guiones[i]=Palabra[i];
        bandera++;
        }
      }
      if (bandera==0) {
        Letras_Erroneas[Errores]=Letra_Ingresada;
        Errores++;
      }
      aciertos=0;
      for (int j = 0; j < Cant_Caracteres; j++) {
        if (Palabra[j]==Guiones[j]) {
          aciertos++;
        }
      }
      if (aciertos==Cant_Caracteres) {
        gano=1;
        break;
      }



  } while(Errores<11 || gano==0);

  system("cls");
  if (gano==1) {
    printf("\nGano!!!!\n" );
  }
  if (Errores==11) {
    Grafico(11);
  }

  system("pause");
}
