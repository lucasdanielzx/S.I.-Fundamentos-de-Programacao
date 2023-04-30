#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// WHILE (ENQUANTO)
/* Implemente um algoritmo para ler 20 números e imprimir todos os seus divisores. Ex.: 
Número: 10 / Divisores: 1, 2, 5 e 10 */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num, cont = 1, contDiv = 1;
	
	while (cont <= 20) {
		printf("Digite o %dº número: ", cont);
		scanf("%d", &num);	
		
		system("cls");
		
		printf("Número: %d / Divisores: ", num);
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
			printf("Todos os números são divisores de zero, exceto o próprio zero;\n\n");
		}
		
		cont++;
		contDiv = 1;
	}

	return 0;
}
