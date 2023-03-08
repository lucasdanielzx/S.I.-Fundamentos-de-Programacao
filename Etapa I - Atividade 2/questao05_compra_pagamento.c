#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Crie um programa que receba o preço de um produto e a condição de pagamento. O usuário deve
digitar o número 1 quando a compra for “à vista” ou 2 quando for “a prazo”. Se o pagamento for
à vista o produto deverá ter um desconto de 5%, se for a prazo, um acréscimo de 2%. Mostre o
valor final da compra para o cliente. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float preco;
	int condPagamento;
	
	printf("Digite o preço do produto: ");
	scanf("%f", &preco);
	
	printf("\nOPÇÕES DE PAGAMENTO: [1] - À vista; [2] - A prazo.");
	printf("\nEscolha uma das opções a partir do seu número: ");
	scanf("%d", &condPagamento);
	
	if (condPagamento == 1) {
		printf("\nValor final da compra: %.2f", preco * 0.95);
	}
	else {
		printf("\nValor final da compra: %.2f", preco * 1.02);
	}
}
