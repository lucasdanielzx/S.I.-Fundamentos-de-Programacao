#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Crie um programa que receba o pre�o de um produto e a condi��o de pagamento. O usu�rio deve
digitar o n�mero 1 quando a compra for �� vista� ou 2 quando for �a prazo�. Se o pagamento for
� vista o produto dever� ter um desconto de 5%, se for a prazo, um acr�scimo de 2%. Mostre o
valor final da compra para o cliente. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float preco;
	int condPagamento;
	
	printf("Digite o pre�o do produto: ");
	scanf("%f", &preco);
	
	printf("\nOP��ES DE PAGAMENTO: [1] - � vista; [2] - A prazo.");
	printf("\nEscolha uma das op��es a partir do seu n�mero: ");
	scanf("%d", &condPagamento);
	
	if (condPagamento == 1) {
		printf("\nValor final da compra: %.2f", preco * 0.95);
	}
	else {
		printf("\nValor final da compra: %.2f", preco * 1.02);
	}
}
