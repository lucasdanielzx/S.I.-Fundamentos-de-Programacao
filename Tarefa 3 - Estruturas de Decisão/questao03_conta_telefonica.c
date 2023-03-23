#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Faça um algoritmo que calcule uma conta telefônica com base na cobrança dos seguintes serviços:

Tarifa para ligações interurbanas:
• Telefone residencial (código 1): R$ 2.00 por minuto
• Telefone comercial (código 2): R$ 4,00 por minuto

Internet banda larga:
• 200 Mega: R$ 50,00
• 500 Mega: R$ 100,00

O algoritmo deve solicitar as seguintes entradas de dados:
• O tipo do telefone: 1 - Residencial ou 2 - Comercial (o programa deve aceitar somente umas das opções indicadas);
• A quantidade de minutos utilizados em ligações interurbanas;
• A velocidade da internet utilizada no plano (o programa deve aceitar somente umas das opções de velocidades de conexão indicadas);

Por fim, o algoritmo deve imprimir:
• Valor total de ligações interurbanas;
• Valor total da conta */

int validarOpcoes (int opcaoTel, int opcaoVel) {	
	if ((opcaoTel == 1 || opcaoTel == 2) && (opcaoVel == 1 || opcaoVel == 2)) {
		return 1;
	}
	else {
		return 0;
	}
}

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int tipoTel, minLigacao, velInternet;
	float valorLigacoes;
	
	printf("TIPOS DE TELEFONE\n1 - Residencial;\n2 - Comercial.\n\nDigite o tipo de telefone: ");
	scanf("%d", &tipoTel);
	
	printf("\nDigite a quantidade de minutos em ligação: ");
	scanf("%d", &minLigacao);
	
	system("cls");
	
	printf("VELOCIDADE DA INTERNET\n1 - 200 megas;\n2 - 500 megas.\n\nDigite a velocidade da internet usada no plano: ");
	printf("Digite a velocidade do plano: ");
	scanf("%d", &velInternet);
	
	system("cls");
	
	if (validarOpcoes(tipoTel, velInternet) == 1) {
		if(tipoTel == 1) {
			valorLigacoes = 2 * minLigacao;
		}
		else if (tipoTel == 2) {
			valorLigacoes = 4 * minLigacao;
		}
		
		if(velInternet == 1) {
			printf("Valor das ligações interurbanas: %.2f", valorLigacoes);
			printf("\nValor total da conta: %.2f", valorLigacoes + 50);
		}
		else {
			printf("Valor das ligações interurbanas: %.2f", valorLigacoes);
			printf("\nValor total da conta: %.2f", valorLigacoes + 100);
		}
	}
	else {
		printf("Uma das opções informada não é válida.");
	}
	
	return 0;
}
