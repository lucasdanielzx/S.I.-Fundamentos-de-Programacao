#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// WHILE (ENQUANTO)
/* Implemente um algoritmo que leia o número de vezes que se deseja imprimir na tela a
frase EU VOU APRENDER ESTRUTRUA DE REPETIÇÃO. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite a quantidade de vezes que deseja imprimir a frase: ");
	scanf("%d", &num);
	
	while (num > 0) {
		printf("\nEU VOU APRENDER ESTRUTURA DE REPETIÇÃO.");
		
		num--;
	}
	
	return 0;
}
