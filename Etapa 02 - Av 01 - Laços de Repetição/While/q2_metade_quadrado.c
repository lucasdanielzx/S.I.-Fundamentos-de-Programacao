#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// WHILE (ENQUANTO)
/* Implemente um algoritmo para ler 10 n�meros e a lado de cada n�mero imprimir a metade
e o quadrado do n�mero. Ex: N�mero: 2 � Metade: 1 / Quadrado 4 */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int cont = 1;
	float num, metade;
	
	while (cont <= 10) {
		printf("N�mero: ");
		scanf("%f", &num);
		
		metade = num/2;
		
		printf(" - Metade: %.1f / Quadrado: %.0f\n\n", metade, num*num);
				
		cont++;
	}
	
	return 0;
}
