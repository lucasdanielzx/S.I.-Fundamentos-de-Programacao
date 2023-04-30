#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// DO...WHILE (FAÇA ... ENQUANTO)
/* Implemente um algoritmo para ler 20 números inteiros e em seguida o programa deve 
informar a quantidade de números pares e ímpares digitados. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num, cont = 1, contPar = 0, contImpar = 0;
	
	do {
		printf("Digite o %dº número: ", cont);
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
	
	printf("Quantidade de números ímpares: %d\n", contImpar);
	printf("Quantidade de números pares: %d\n", contPar);

	return 0;
}
