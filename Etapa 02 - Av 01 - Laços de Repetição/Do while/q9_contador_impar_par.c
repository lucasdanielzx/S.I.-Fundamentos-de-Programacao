#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// DO...WHILE (FA�A ... ENQUANTO)
/* Implemente um algoritmo para ler 20 n�meros inteiros e em seguida o programa deve 
informar a quantidade de n�meros pares e �mpares digitados. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num, cont = 1, contPar = 0, contImpar = 0;
	
	do {
		printf("Digite o %d� n�mero: ", cont);
		scanf("%d", &num);
		
		if(num % 2 == 0) {
			contPar++;
		}
		else {
			contImpar++;
		}
		
		cont++;
	} while (cont <= 20);
	
	system("cls");
	
	printf("Quantidade de n�meros �mpares: %d\n", contImpar);
	printf("Quantidade de n�meros pares: %d\n", contPar);

	return 0;
}
