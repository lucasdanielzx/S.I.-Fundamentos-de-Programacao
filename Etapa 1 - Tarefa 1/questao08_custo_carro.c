#include<stdio.h>
#include<stdlib.h>

/* O custo ao consumidor de um carro novo � a soma do custo de f�brica com a percentagem do 
distribuidor e dos impostos (aplicados ao custo de f�brica).  
Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo que leia o custo de 
f�brica de um carro e escreva o custo ao consumidor. */

int main () {
	
	float custoFabrica;
	//float total;
	
	printf("Digite o custo de fabrica do carro: ");
	scanf("%f", &custoFabrica);
	
	//total = custoFabrica * 1.73;
	
	printf("\nCusto do carro ao consumidor: %.2f", (custoFabrica * 1.73));
}
