#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// DO...WHILE (FAÇA ... ENQUANTO)
/* Faça um algoritmo para obter do usuário a quantidade de números que o programa irá ler e 
em seguida ler N números inteiros e escrever logo em seguida se o número é par ou ímpar.
Ex.: Número: 9 - Impar */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num, cont;
	
	printf("Digite a quantidade de números que serão lidos: ");
	scanf("%d", &cont);
	
	system("cls");
	
	do {
		printf("Digite o número: ");
		scanf("%d", &num);
		
		//system("cls");
		
		if(num % 2 == 0) {
			printf("Número: %d - Par\n\n", num);
		}
		else {
			printf("Número: %d - Impar\n\n", num);
		}
		
		cont--;
	} while (cont > 0);
	
	return 0;
}
