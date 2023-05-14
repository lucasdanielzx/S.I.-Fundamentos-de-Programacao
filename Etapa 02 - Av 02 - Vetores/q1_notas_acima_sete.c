#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Faça um algoritmo para ler 5 notas de um aluno e armazenar em um vetor através de um laço de 
repetição, em seguida, usando uma segunda estrutura de repetição, imprima na tela somente as 
notas maiores que 7,0. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float notas[5];
	int cont;
	
	for(cont = 0; cont <= 4; cont++) {
		printf("Digite a %dº nota: ", cont+1);
		scanf("%f", &notas[cont]);
	}
	
	system("cls");
	
	printf("Notas digitadas maiores que 7: ");
	for(cont = 0; cont <= 4; cont++) {
		if (notas[cont] > 7) {
			printf("%.1f ", notas[cont]);
		}
	}
	
	return 0;
}
