#include <stdio.h>
#include <stdlib.h>

void pedirDatos();
void mostrarDatos();

int numFilas, numColumnas, **p_matriz;

int main(){
	pedirDatos();
	mostrarDatos();
	free(p_matriz);
	return 0;
}

void pedirDatos(){
	printf("Ingrese Cantidad de Filas \n");
	scanf("%d", &numFilas);

	printf("Ingrese Cantidad de Columnas \n");
	scanf("%d", &numColumnas);

	p_matriz = (int **)malloc(numFilas * sizeof(int *));
	for(int i = 0; i < numColumnas; i += 1){
		p_matriz[i] = (int *)malloc(numColumnas * sizeof(int ));
	}
	if(p_matriz == NULL){
		printf("Error Reservando Memoria\n");
		exit (1);
	}else{
		printf("Valores Matriz \n");
		for(int f = 0; f < numFilas; f += 1){
			for(int c = 0; c < numColumnas; c += 1){
				printf("ingrese dato posicion [%d, %d] \n", f, c);
				scanf("%d", &(*(*(p_matriz+c)+f)));
			}
		}

	}

}

void mostrarDatos(){
    printf("\nLA MATRIS ES\n");
	for(int f = 0; f < numFilas; f += 1){
        printf("\n");
		for(int c = 0; c < numColumnas; c += 1){
			printf("%d ",*(*(p_matriz+c)+f));
		}
	}

    printf("\n\nLA TRANSPUESTA ES\n");
	for(int f = 0; f < numFilas; f += 1){
        printf("\n");
		for(int c = 0; c < numColumnas; c += 1){
			printf("%d ",*(*(p_matriz+f)+c));
		}
	}
}
