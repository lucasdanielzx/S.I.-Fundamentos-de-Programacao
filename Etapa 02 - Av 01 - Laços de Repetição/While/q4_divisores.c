#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// WHILE (ENQUANTO)
/* Implemente um algoritmo para ler 20 n�meros e imprimir todos os seus divisores. Ex.: 
N�mero: 10 / Divisores: 1, 2, 5 e 10 */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num, cont = 1, contDiv = 1;
	
	while (cont <= 20) {
		printf("Digite o %d� n�mero: ", cont);
		scanf("%d", &num);	
		
		system("cls");
		
		printf("N�mero: %d / Divisores: ", num);
		if (num != 0) {
			while (contDiv <= num) {						
										
				if (num % contDiv == 0) {
					if (contDiv < num) {
						printf("%d, ", contDiv);
					}
					else {
						printf("%d;\n\n", contDiv);
					}
				}
					
				contDiv++;
			}		
		}
		else {
			printf("Todos os n�meros s�o divisores de zero, exceto o pr�prio zero;\n\n");
		}
		
		cont++;
		contDiv = 1;
	}

	return 0;
}
