#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// DO...WHILE (FAÇA ... ENQUANTO)
/* Implemente um algoritmo que leia números e ao lado de cada número imprima o seu triplo. 
O ponto de parada do laço é quando o usuário digitar o número 0 (zero). Ex.: Número: 3 – Triplo: 9 */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	do {
		printf("Digite o número: ");
		scanf("%d", &num);
		
		system("cls");
		
		printf("Número: %d - Triplo: %d\n\n", num, num*3);
		
	} while (num != 0);
	
	return 0;
}
