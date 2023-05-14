#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Faça um programa que armazene em um vetor 10 números inteiros e em seguida mostre a soma e a 
multiplicação desses números. Use dois laços de repetição, um para preencher o vetor e outro para 
fazer os cálculos. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int numeros[10], cont, soma, multiplicacao = 1;
	
	for(cont = 0; cont < 10; cont++) { //preencher o vetor
		printf("Digite o %dº número: ", cont+1);
		scanf("%d", &numeros[cont]);
	}
	
	system("cls");
	
	for(cont = 0; cont < 10; cont++) { //realizar os calculos
		soma = soma + numeros[cont];
		multiplicacao = multiplicacao * numeros[cont];
	}
	
	for(cont = 0; cont < 10; cont++) { //escrever a soma dos números e mostrar o resultado
		if (cont < 9) { //perfumaria para retirar o + e colocar = após o último nº do vetor
			printf("%d + ", numeros[cont]);
		}
		else {
			printf("%d = %d\n", numeros[cont], soma);
		}
	}
	
	for(cont = 0; cont < 10; cont++) { //escrever a multiplicação dos números e mostrar o resultado
		if (cont < 9) { //perfumaria para retirar o * e colocar = após o último nº do vetor
			printf("%d * ", numeros[cont]);
		}
		else {
			printf("%d = %d", numeros[cont], multiplicacao);
		}
	}
	
	return 0;
}
