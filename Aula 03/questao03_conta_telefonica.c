#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Fa�a um algoritmo que calcule uma conta telef�nica com base na cobran�a dos seguintes servi�os:

Tarifa para liga��es interurbanas:
� Telefone residencial (c�digo 1): R$ 2.00 por minuto
� Telefone comercial (c�digo 2): R$ 4,00 por minuto

Internet banda larga:
� 200 Mega: R$ 50,00
� 500 Mega: R$ 100,00

O algoritmo deve solicitar as seguintes entradas de dados:
� O tipo do telefone: 1 - Residencial ou 2 - Comercial (o programa deve aceitar somente umas das op��es indicadas);
� A quantidade de minutos utilizados em liga��es interurbanas;
� A velocidade da internet utilizada no plano (o programa deve aceitar somente umas das op��es de velocidades de conex�o indicadas);

Por fim, o algoritmo deve imprimir:
� Valor total de liga��es interurbanas;
� Valor total da conta */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int tipoTel, minLigacao, velInternet;
	
	printf("Telefones: 1 - Residencial; 2 - Comercial.\nDigite o tipo de telefone: ");
	scanf("%d", &tipoTel);
	
	printf("Digite a quantidade de minutos em liga��o: ");
	scanf("%d", &minLigacao);
	
	system("cls");
	
	printf("Plano: 1 - 200 megas; 2 - ")
	printf("Digite a velocidade do plano: ")
	
	return 0;
}
