#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Faça um programa que leia dentro de um laço 10 números inteiros e armazene em um vetor “A”, 
em seguida, através de um segundo laço, o programa deve preencher um vetor “B” com os valores 
do vetor “A” de forma invertida, por fim o programa deve mostrar os valores contidos no vetor “B” 
através de um terceiro laço. 
Ex.: A [5, 6, 8, 9, 2, 7, 8, 6, 1, 10] | B [10, 1, 6, 8, 7, 2, 9, 8, 6, 5] */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int numeros[10], numerosInvertidos[10], cont;
	
	for(cont = 0; cont < 10; cont++) { //preencher o vetor
		printf("Digite o %dº número: ", cont+1);
		scanf("%d", &numeros[cont]);
	}
	
	system("cls");	

	for(cont = 0; cont < 10; cont++) { //preencher o vetor invertido
		numerosInvertidos[cont] = numeros[10-cont];
	}
	
	for(cont = 0; cont < 10; cont++) { //imprimir vetor invertido
		if (cont == 0) {
			printf("Vetor invertido = [%d, ", numerosInvertidos[cont]);
		}
		else if (cont >= 1 && cont < 9) {
			printf("%d, ", numerosInvertidos[cont]);
		}
		else {
			printf("%d]", numerosInvertidos[cont]);
		}	
	}
	
	return 0;
}
