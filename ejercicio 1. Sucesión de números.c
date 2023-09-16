//Ejercicio 1. Sucesión de números
#include<stdio.h>
int main(){
	int i, vec, neg=0;
	
	printf("Ingrese cuantas veces desea repetir su bucle: ");
	scanf("%d", &vec);
	
	for (i=1; i<=vec; ++i){
		neg=i*(-1);
		printf("%d %d ", i, neg);
	}
	
	return 0;
}
