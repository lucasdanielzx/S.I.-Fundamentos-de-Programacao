#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// FOR (PARA)
/* Implemente um algoritmo que imprima uma tabela de convers�o de polegadas para cent�metros. 
Deseja-se que a tabela conste valores de 1 polegada at� 20 polegadas inteiras. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int cont;
	
	for (cont = 1; cont <= 20; cont++) {
		printf("%d POLEGADAS = %.2f CENT�METROS\n", cont, cont*2.54);		
	}
	
	return 0;
}
