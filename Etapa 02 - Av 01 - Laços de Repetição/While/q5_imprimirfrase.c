#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// WHILE (ENQUANTO)
/* Implemente um algoritmo que leia o n�mero de vezes que se deseja imprimir na tela a
frase EU VOU APRENDER ESTRUTRUA DE REPETI��O. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	printf("Digite a quantidade de vezes que deseja imprimir a frase: ");
	scanf("%d", &num);
	
	while (num > 0) {
		printf("\nEU VOU APRENDER ESTRUTURA DE REPETI��O.");
		
		num--;
	}
	
	return 0;
}
