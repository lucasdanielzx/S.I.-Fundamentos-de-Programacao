#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// DO...WHILE (FA�A ... ENQUANTO)
/* Fa�a um algoritmo para obter do usu�rio a quantidade de n�meros que o programa ir� ler e 
em seguida ler N n�meros inteiros e escrever logo em seguida se o n�mero � par ou �mpar.
Ex.: N�mero: 9 - Impar */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num, cont;
	
	printf("Digite a quantidade de n�meros que ser�o lidos: ");
	scanf("%d", &cont);
	
	system("cls");
	
	do {
		printf("Digite o n�mero: ");
		scanf("%d", &num);
		
		//system("cls");
		
		if(num % 2 == 0) {
			printf("N�mero: %d - Par\n\n", num);
		}
		else {
			printf("N�mero: %d - Impar\n\n", num);
		}
		
		cont--;
	} while (cont > 0);
	
	return 0;
}
