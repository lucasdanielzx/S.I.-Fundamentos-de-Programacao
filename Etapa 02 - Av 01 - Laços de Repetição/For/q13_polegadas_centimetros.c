#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// FOR (PARA)
/* Implemente um algoritmo que imprima uma tabela de conversão de polegadas para centímetros. 
Deseja-se que a tabela conste valores de 1 polegada até 20 polegadas inteiras. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int cont;
	
	for (cont = 1; cont <= 20; cont++) {
		printf("%d POLEGADAS = %.2f CENTÍMETROS\n", cont, cont*2.54);		
	}
	
	return 0;
}
