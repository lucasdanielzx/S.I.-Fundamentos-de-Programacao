#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<string.h>

/* Implemente uma fun��o para retornar para a fun��o MAIN o maior valor entre 3 n�meros
inteiros recebidos como par�metros. */

int maiorValor(int valor1, int valor2, int valor3);

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int valor1, valor2, valor3;
	
	printf("Digite o 1� valor: ");
	scanf("%d", &valor1);
	printf("Digite o 2� valor: ");
	scanf("%d", &valor2);
	printf("Digite o 3� valor: ");
	scanf("%d", &valor3);
	
	system("cls");
	
	printf("Maior valor digitado: %d", maiorValor(valor1, valor2, valor3));
}

int maiorValor(int valor1, int valor2, int valor3) {
	int maiorValor;
	
	if(valor1 > valor2 && valor1 > valor3) {
		maiorValor = valor1;
	} 
	else if (valor2 > valor1 && valor2 > valor3) {
		maiorValor = valor2;
	}
	else {
		maiorValor = valor3;
	}
	
	return maiorValor;
}
