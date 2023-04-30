#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// WHILE (ENQUANTO)
// Implemente um algoritmo para imprimir todos os números de 100 até 1 de forma decrescente.

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int cont = 100;
	
	while (cont >= 0) {
		printf("%d ", cont);
		cont--;
	}
	
	return 0;
}
