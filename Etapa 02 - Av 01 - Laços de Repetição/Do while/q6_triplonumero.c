#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// DO...WHILE (FA�A ... ENQUANTO)
/* Implemente um algoritmo que leia n�meros e ao lado de cada n�mero imprima o seu triplo. 
O ponto de parada do la�o � quando o usu�rio digitar o n�mero 0 (zero). Ex.: N�mero: 3 � Triplo: 9 */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num;
	
	do {
		printf("Digite o n�mero: ");
		scanf("%d", &num);
		
		system("cls");
		
		printf("N�mero: %d - Triplo: %d\n\n", num, num*3);
		
	} while (num != 0);
	
	return 0;
}
