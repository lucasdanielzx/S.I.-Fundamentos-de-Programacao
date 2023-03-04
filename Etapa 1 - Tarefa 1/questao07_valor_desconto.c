#include<stdio.h>
#include<stdlib.h>

/* Uma loja de informática está com uma promoção de Dia dos Pais, oferecendo um desconto de 
25% em todos os produtos. Implemente um algoritmo que receba o valor total da compra e mostre 
como saída: o valor da compra, o valor do desconto e o valor final a ser pago. */

int main () {
	
	float valorCompra;
	//float valorDesconto, valorFinal;
	
	printf("Digite o valor total da compra: ");
	scanf("%f", &valorCompra);
	
	//valorDesconto = valorCompra * 0.25;
	//valorFinal = valorCompra - valorDesconto;
	
	system("cls");
	
	printf("Valor total: %.2f", valorCompra);
	printf("\nValor desconto: %.2f", (valorCompra * 0.25));
	printf("\nValor final: %.2f", (valorCompra - (valorCompra * 0.25)));
}
