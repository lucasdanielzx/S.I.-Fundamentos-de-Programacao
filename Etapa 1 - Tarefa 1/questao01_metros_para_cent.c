#include<stdio.h>
#include<stdlib.h>

/* Fa�a um algoritmo que receba do usu�rio uma quantidade de metros 	
e em seguida fa�a a convers�o para cent�metros, exibindo o resultado. */

int main () {
	float met;
	//float ent;
	
	printf("Digite o valor em metros: ");
	scanf("%f", &met);
	
	//cent = met * 100;
	
	printf("\nMetros convertidos para centimetros: %.2f cm", (met * 100));
}
