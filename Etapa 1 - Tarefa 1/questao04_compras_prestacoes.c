#include<stdio.h>
#include<stdlib.h>

/* A loja Mam�o com A��car est� vendendo seus produtos em 5 presta��es sem juros. 
Fa�a um algoritmo que receba o valor de tr�s produtos e em seguida mostre o total da compra e o valor das presta��es. */

int main () {
	
	float produto1, produto2, produto3;
	//float total, prestacoes;
	
	printf("Digite o valor do primeiro produto: ");
	scanf("%f", &produto1);
	printf("Digite o valor do segundo produto: ");
	scanf("%f", &produto2);
	printf("Digite o valor do terceiro produto: ");
	scanf("%f", &produto3);
	
	//total = produto1 + produto2 + produto3;
	//prestacoes = total/5;
	
	system("cls");
	
	printf("Valor total da compra: %.2f", (produto1 + produto2 + produto3));
	printf("\nValor das prestacoes: %.2f", ((produto1 + produto2 + produto3)/5));
}
