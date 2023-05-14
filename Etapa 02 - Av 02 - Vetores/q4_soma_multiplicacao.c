#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Fa�a um programa que armazene em um vetor 10 n�meros inteiros e em seguida mostre a soma e a 
multiplica��o desses n�meros. Use dois la�os de repeti��o, um para preencher o vetor e outro para 
fazer os c�lculos. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int numeros[10], cont, soma, multiplicacao = 1;
	
	for(cont = 0; cont < 10; cont++) { //preencher o vetor
		printf("Digite o %d� n�mero: ", cont+1);
		scanf("%d", &numeros[cont]);
	}
	
	system("cls");
	
	for(cont = 0; cont < 10; cont++) { //realizar os calculos
		soma = soma + numeros[cont];
		multiplicacao = multiplicacao * numeros[cont];
	}
	
	for(cont = 0; cont < 10; cont++) { //escrever a soma dos n�meros e mostrar o resultado
		if (cont < 9) { //perfumaria para retirar o + e colocar = ap�s o �ltimo n� do vetor
			printf("%d + ", numeros[cont]);
		}
		else {
			printf("%d = %d\n", numeros[cont], soma);
		}
	}
	
	for(cont = 0; cont < 10; cont++) { //escrever a multiplica��o dos n�meros e mostrar o resultado
		if (cont < 9) { //perfumaria para retirar o * e colocar = ap�s o �ltimo n� do vetor
			printf("%d * ", numeros[cont]);
		}
		else {
			printf("%d = %d", numeros[cont], multiplicacao);
		}
	}
	
	return 0;
}
