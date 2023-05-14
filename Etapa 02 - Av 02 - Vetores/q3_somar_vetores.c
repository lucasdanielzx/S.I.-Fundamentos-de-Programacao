#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Fa�a um algoritmo que leia e armazene n�meros inteiros em dois vetores de cinco posi��es cada
identificados como �A� e �B�, em seguida calcule a soma entre os elementos de mesma posi��o nos 
dois vetores e armazene os resultados em um vetor chamado de �SOMA�. Ao final, imprima na tela 
os valores do vetor �SOMA�. Use quatro la�os de repeti��o, dois la�os para armazenar os valores 
nos vetores �A� e �B�, um la�o para realizar a soma e guardar o resultado no terceiro vetor, e um 
quarto la�o para imprimir os valores armazenados neste terceiro vetor.
Ex.: A [5, 6, 8, 9, 2] | B [1, 10, 5, 7, 3] | SOMA [6, 16, 13, 16, 5] */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int numerosA[5], numerosB[5], soma[5], cont;
	
	for(cont = 0; cont <= 4; cont++) { //preencher primeiro vetor da soma
		printf("Digite o 1� n�mero da %d� soma: ", cont+1);
		scanf("%d", &numerosA[cont]);
	}
	
	system("cls");
	
	for(cont = 0; cont <= 4; cont++) { //preencher segundo vetor da soma
		printf("Digite o 2� n�mero da %d� soma: ", cont+1);
		scanf("%d", &numerosB[cont]);
	}
	
	system("cls");
	
	for(cont = 0; cont <= 4; cont++) { //realizar a soma dos vetores
		soma[cont] = numerosA[cont] + numerosB[cont];
	}
	
	for(cont = 0; cont <= 4; cont++) { //exibir resultados
		printf("%d + %d = %d\n", numerosA[cont], numerosB[cont], soma[cont]);
	}
	
	return 0;
}
