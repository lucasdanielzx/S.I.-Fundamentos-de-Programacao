#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Estrutura switch

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int diaSemana;
	
	printf("Digite o dia da semana [1 a 7]: ");
	scanf("%d", &diaSemana);
	
	switch(diaSemana){
		case 1: // funciona apenas como uma igualdade (n�o serve como condi��o relacional)
			printf("\nSegunda");
			break;
		case 2:
			printf("\nTer�a");
			break;
		case 3:
			printf("\nQuarta");
			break;
		case 4:
			printf("\nQuinta");
			break;
		case 5:
			printf("\nSexta");
			break;
		case 6:
			printf("\nS�bado");
			break;
		case 7:
			printf("\nDomingo");
			break;
		default: 
		printf("\nValor inv�lido");
	}
	
	return 0;
}
