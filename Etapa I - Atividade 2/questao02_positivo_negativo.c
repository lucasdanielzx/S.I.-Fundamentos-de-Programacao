#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// Fa�a um Programa que leia um valor e mostre na tela se o valor � positivo ou negativo.

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float valor;
	
	printf("Digite o valor: ");
	scanf("%f", &valor);
	
	if (valor >= 0) {
		printf("\nO valor %.1f � positivo.", valor);
	}
	else {
		printf("\nO valor %.1f � negativo.", valor);
	}
}
