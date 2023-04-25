#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num, soma, cont, qtdNum;
	float media;
	
	printf("Digite a quantidade de números que serão lidos: ");
	scanf("%d", &qtdNum);
	system("cls");
	
	for(cont = 1; cont <= qtdNum; cont++) {
		printf("Digite o %dº número: ", cont);
		scanf("%d", &num);
		
		soma = soma + num;
		
		system("cls");
	}
	
	media = soma/qtdNum;
	
	printf("Soma dos valores digitados = %d\n", soma);
	printf("Média dos valores digitados = %.1f", media);
	
	return 0;
}
