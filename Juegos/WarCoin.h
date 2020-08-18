

int ingresoMin(){
	int cantMin2,i,n=1;
	for(i=0;i<n;i++){
		printf("\n\nIngresa la cantidad minima de monedas que se pueden retirar: ");
		scanf("%i",&cantMin2);
		if(cantMin2>=1 && cantMin2<=20){
			break;
		}
		else{
			printf("Ingrese nuevamente un valor entre 1 y 20");
			cantMin2=0;
			n++;
		}
	}
	
return cantMin2;
}

int ingresoMax(){
	int cantMax2,i,n=1;
	for(i=0;i<n;i++){
		printf("\n\nIngresa la cantidad maxima de monedas que se pueden retirar: ");
		scanf("%i",&cantMax2);
		if(cantMax2>=1 && cantMax2<=20){
			break;
		}
		else{
			printf("Ingrese nuevamente un valor entre 1 y 20");
			cantMax2=0;
			n++;
		}
	}
	
return cantMax2;
}



int verificadorPila(){
	int l,n=1,pila2;
	for(l=0;l<n;l++){
		pila2=10+rand()%41;
		if(10<=pila2<=50){
			break;
		}
		else{
			n++;
		}
	}
	
return pila2;
}



int turnos(int cantMin,int cantMax,int pila,int A){
	int B,C,i,j,k,l,n=1,p=1; 
		for(i=0;pila>0;i++){
		
	
		
		if(A==1){
			for(j=0;j<n;j++){
				printf("\nIngresa la cantidad de monedas que vas a eliminar entre %i y %i:  ",cantMin,cantMax);
				scanf("%i",&B);
				if(B>=cantMin && B<=cantMax){
					if(pila-B>=0){
						pila=pila-B;
						break;
					}
					else{
						if(pila<cantMin){
							break;
						}
						else{
							printf("Ingrese un valor menor a %i\n",pila);
							n++;
						}
							
					}
				}
				else{
					printf("\nERROR: se deben desapilar entre %i y %i monedas. Intentalo de nuevo!!!!: \n",cantMin,cantMax);
					n++;
				}
			}	
			printf("Quedan %i monedas.\n",pila);
			A=2;
		}
		
		
		
		else{
			for(k=0;k<p;k++){
				C=1+rand()%41;
				if(C>=cantMin && C<=cantMax){
					if(pila-C>=0){
						pila=pila-C;
						printf("\nLa computadora saco %i monedas de la pila",C);
						printf("\nQuedan %i monedas.\n",pila);
						break;
					}
					else{
						if(pila<cantMin){
							break;
						}
						else{
							C=0;
							p++;	
						}	
					}
				}
				else{
					C=0;
					p++;
				}
			}
			A=1;
		}
		B=0;
		C=0;



		if(pila<cantMin){
			break;
		}
	}
	
return A;
}






