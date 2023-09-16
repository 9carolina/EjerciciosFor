#include<stdio.h>
int main(){
	int i, suma=0;
	
	for (i=1; i<=100; i++){
		suma+=i*i;
	}
	printf("Suma de los cuadrados de los primeros 100 numeros: %d", suma);
	
	return 0;
}
