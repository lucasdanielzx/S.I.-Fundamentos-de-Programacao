#include<stdio.h>
#include<stdlib.h>

/* Faça um algoritmo que receba do usuário uma quantidade de metros 	
e em seguida faça a conversão para centímetros, exibindo o resultado. */

int main () {
	float met;
	//float cent;
	
	printf("Digite o valor em metros: ");
	scanf("%f", &met);
	
	//cent = met * 100;
	
	printf("\nMetros convertidos para centimetros: %.2f cm", (met * 100));
}
