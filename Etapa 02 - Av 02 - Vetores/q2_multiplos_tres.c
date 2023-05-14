#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Faça um algoritmo para ler e armazenar 10 números inteiros em um vetor através de um laço de 
repetição, em seguida, utilizando um segundo laço, imprima os números contidos neste vetor que 
são múltiplos de três. No final do programa, o algoritmo deve exibir o total de números múltiplos 
encontrados. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int vetorNumeros[10], totalMultiplos = 0, cont;
	
	for(cont = 0; cont<=9; cont++) {
		printf("Digite o %dº número: ", cont+1);
		scanf("%d", &vetorNumeros[cont]);
	}
	
	system("cls");
	
	printf("Números digitados que são multiplos de três: ");	
	for(cont = 0; cont<=9; cont++) {
		if (vetorNumeros[cont] % 3 == 0) {
			printf("%d ", vetorNumeros[cont]);
			totalMultiplos++;
		}
	}
	
	printf("\nQuantidade de múltiplos: %d", totalMultiplos);
		
	return 0;
}
