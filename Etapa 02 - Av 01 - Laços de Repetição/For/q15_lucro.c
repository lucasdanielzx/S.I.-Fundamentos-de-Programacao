#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// FOR (PARA)
/* Faça um algoritmo que leia o preço de compra e o preço de venda de 10 mercadorias. 
O algoritmo deverá imprimir quantas mercadorias proporcionam: 
• lucro < 10 %
• 10 % <= lucro <= 20 % 
• lucro > 20 % */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int cont, contLucroBaixo = 0, contLucroMedio = 0, contLucroAlto = 0;
	float precoCompra, precoVenda, porcentagem;	

	for (cont = 1; cont <= 10; cont++) {
		printf("Digite o preço de COMPRA do %dº produto: ", cont);
		scanf("%d", &precoCompra);
		printf("Digite o preço de VENDA do %dº produto: ", cont);
		scanf("%d", &precoVenda);
		
		porcentagem = ((precoVenda - precoCompra) * 100) / precoCompra;
		
		if (porcentagem < 10) {
			contLucroBaixo++;
		}
		else if (porcentagem >= 10 && porcentagem <= 20) {
			contLucroMedio++;
		}
		else {
			contLucroAlto++;
		}
		
		system("cls");
	}
	
	printf("Quantidade de mercadorias com lucro < 10%: %d\n", contLucroBaixo);
	printf("Quantidade de mercadorias com 10% <= lucro <= 20%: %d\n", contLucroMedio);
	printf("Quantidade de mercadorias com lucro > 20%: %d", contLucroAlto);
	
	return 0;
}
