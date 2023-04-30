#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// DO...WHILE (FAÇA ... ENQUANTO)
/* Implemente um algoritmo que leia números enquanto forem positivos e imprima quantos 
números foram digitados depois do laço de repetição. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num, cont;
	
	do {
		printf("Digite um número: ");
		scanf("%d", &num);
		
		if (num > 0) {
			cont++;
		}
	} while (num > 0);
	
	system("cls");
	printf("Quantidade de números positivos digitados: %d", cont);
	
	return 0;
}
