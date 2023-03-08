#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// Faça um Programa que leia um valor e mostre na tela se o valor é positivo ou negativo.

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float valor;
	
	printf("Digite o valor: ");
	scanf("%f", &valor);
	
	if (valor >= 0) {
		printf("\nO valor %.1f é positivo.", valor);
	}
	else {
		printf("\nO valor %.1f é negativo.", valor);
	}
}
