#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// FOR (PARA)
//  Faça um algoritmo que permita o usuário escolher qual a tabuada de multiplicar que se deseja imprimir.

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num, cont;
	
	printf("Digite a tabuada de multiplicar desejada: ");
	scanf("%d", &num);
	
	system("cls");
	
	for (cont = 1; cont <= 10; cont++) {
		printf("%d x %d = %d\n", num, cont, num*cont);
	}
	
	return 0;
}
