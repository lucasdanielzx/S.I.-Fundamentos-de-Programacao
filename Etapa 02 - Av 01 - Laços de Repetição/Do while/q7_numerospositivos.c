#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// DO...WHILE (FA�A ... ENQUANTO)
/* Implemente um algoritmo que leia n�meros enquanto forem positivos e imprima quantos 
n�meros foram digitados depois do la�o de repeti��o. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num, cont;
	
	do {
		printf("Digite um n�mero: ");
		scanf("%d", &num);
		
		if (num > 0) {
			cont++;
		}
	} while (num > 0);
	
	system("cls");
	printf("Quantidade de n�meros positivos digitados: %d", cont);
	
	return 0;
}
