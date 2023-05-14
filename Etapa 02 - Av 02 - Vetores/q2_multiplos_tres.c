#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Fa�a um algoritmo para ler e armazenar 10 n�meros inteiros em um vetor atrav�s de um la�o de 
repeti��o, em seguida, utilizando um segundo la�o, imprima os n�meros contidos neste vetor que 
s�o m�ltiplos de tr�s. No final do programa, o algoritmo deve exibir o total de n�meros m�ltiplos 
encontrados. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int vetorNumeros[10], totalMultiplos = 0, cont;
	
	for(cont = 0; cont<=9; cont++) {
		printf("Digite o %d� n�mero: ", cont+1);
		scanf("%d", &vetorNumeros[cont]);
	}
	
	system("cls");
	
	printf("N�meros digitados que s�o multiplos de tr�s: ");	
	for(cont = 0; cont<=9; cont++) {
		if (vetorNumeros[cont] % 3 == 0) {
			printf("%d ", vetorNumeros[cont]);
			totalMultiplos++;
		}
	}
	
	printf("\nQuantidade de m�ltiplos: %d", totalMultiplos);
		
	return 0;
}
