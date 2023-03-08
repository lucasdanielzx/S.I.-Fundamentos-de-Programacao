#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// Faça um Programa que leia dois números e imprima o maior deles.

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float n1, n2;
	
	printf("Digite o valor do 1º número: ");
	scanf("%f", &n1);
	printf("Digite o valor do 2º número: ");
	scanf("%f", &n2);
	
	system("cls");
	
	if (n1 == n2) {
		printf("Os números digitados (%.1f) são iguais.", n1);
	} 
	else if (n1 > n2) {
		printf("O maior número digitado foi %.1f.", n1);
	}
	else {
		printf("O maior número digitado foi %.1f.", n2);
	}
}
