#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Fa�a um algoritmo que preencha dois vetores com 5 n�meros inteiros cada. Use um la�o para cada 
vetor. Atrav�s de um terceiro la�o, preencha um terceiro vetor de 10 espa�os com os valores 
intercalados dos dois primeiros vetores. Por fim, escreve na tela os valores do terceiro vetor usando 
um quarto la�o de repeti��o. (0,5)
Ex.: A [5, 6, 8, 9, 2] | B [1, 10, 5, 7, 3] | C [5, 1, 6, 10, 8, 5, 9, 7, 2, 3] */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int vetorA[5], vetorB[5], vetorC[10], cont, contPreencher;
	
	for(cont = 0; cont <= 4; cont++) { //preencher primeiro vetor
		printf("Digite o %d� n�mero: ", cont+1);
		scanf("%d", &vetorA[cont]);
	}
	
	system("cls");
	
	for(cont = 0; cont <= 4; cont++) { //preencher segundo vetor
		printf("Digite o %d� n�mero: ", cont+1);
		scanf("%d", &vetorB[cont]);
	}
	
	system("cls");
	
	for(cont = 0, contPreencher = 0; cont <= 9; cont+=2, contPreencher++) { //preencher terceiro vetor
		vetorC[cont] = vetorA[contPreencher];
		vetorC[cont+1] = vetorB[contPreencher];
	}
	
	for(cont = 0; cont <= 9; cont++) { //imprimir na tela
		if (cont == 0) {
			printf("Vetor = [%d, ", vetorC[cont]);
		}
		else if (cont >= 1 && cont < 9) {
			printf("%d, ", vetorC[cont]);
		}
		else {
			printf("%d]", vetorC[cont]);
		}	
	}
	
	return 0;
}
