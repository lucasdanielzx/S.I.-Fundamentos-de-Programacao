#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<string.h>

/* Implemente um algoritmo que receba um n�mero inteiro e imprima na tela a tabuada de
multiplica��o de 1 a 10. O n�mero deve ser lido na fun��o MAIN e passado para um
procedimento que far� a impress�o da tabuada. */

int tabuada (int numero);

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int numero;
	
	printf("Digite o n�mero que deseja a tabuada: ");
	scanf("%d", &numero);
	
	system("cls");
	
	tabuada(numero);
}

int tabuada (int numero) {
	int cont;
	
	for (cont = 1; cont <= 10; cont++) {
		printf("%d x %d = %d\n", numero, cont, numero*cont);
	}
}
