#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// Fa�a um Programa que leia dois n�meros e imprima o maior deles.

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2;
	
	printf("Digite o valor do 1� n�mero: ");
	scanf("%f", &n1);
	printf("Digite o valor do 2� n�mero: ");
	scanf("%f", &n2);
	
	system("cls");
	
	if (n1 == n2) {
		printf("Os n�meros digitados (%.1f) s�o iguais.", n1);
	} 
	else if (n1 > n2) {
		printf("O maior n�mero digitado foi %.1f.", n1);
	}
	else {
		printf("O maior n�mero digitado foi %.1f.", n2);
	}
}
