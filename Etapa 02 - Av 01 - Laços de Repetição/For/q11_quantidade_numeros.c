#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// FOR (PARA)
/* Implemente um algoritmo para ler 15 números e imprimir a quantidade de números 
maiores que 30 foram digitados. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num, cont, quantidade = 0;
	
	for (cont = 1; cont <= 15; cont++) {
		printf("Digite o %dº número: ", cont);
		scanf("%d", &num);
		
		if (num > 30) {
			quantidade++;
		}
	}
	
	system("cls");
	
	printf("Quantidade de números maiores que 30 que foram digitados: %d", quantidade);
	
	return 0;
}
