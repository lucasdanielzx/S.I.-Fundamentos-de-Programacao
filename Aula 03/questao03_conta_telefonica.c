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

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int tipoTel, minLigacao, velInternet;
	
	printf("Telefones: 1 - Residencial; 2 - Comercial.\nDigite o tipo de telefone: ");
	scanf("%d", &tipoTel);
	
	printf("Digite a quantidade de minutos em ligação: ");
	scanf("%d", &minLigacao);
	
	system("cls");
	
	printf("Plano: 1 - 200 megas; 2 - ")
	printf("Digite a velocidade do plano: ")
	
	return 0;
}
