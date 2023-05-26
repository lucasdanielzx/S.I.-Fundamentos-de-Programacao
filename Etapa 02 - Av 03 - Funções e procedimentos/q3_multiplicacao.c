#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<string.h>

/* Implemente um algoritmo que receba um número inteiro e imprima na tela a tabuada de
multiplicação de 1 a 10. O número deve ser lido na função MAIN e passado para um
procedimento que fará a impressão da tabuada. */

int tabuada (int numero);

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Digite o número que deseja a tabuada: ");
	scanf("%d", &numero);
	
	system("cls");
	
	tabuada(numero);
}

int tabuada (int numero) {
	int cont;
	
	for (cont = 1; cont <= 10; cont++) {
		printf("%d x %d = %d\n", numero, cont, numero*cont);
	}
}
