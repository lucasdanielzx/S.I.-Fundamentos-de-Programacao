#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num, cont, maior;
	
	for(cont = 1; cont <= 10; cont++) {
		printf("Digite o %d� n�mero: ", cont);
		scanf("%d", &num);
	
		if (cont == 1) {
			maior = num;
		}	
		else {
			if (num > maior) {
				maior = num;
			}
		}
		
		system("cls");
	}
	
	printf("Maior n�mero digitado = %d", maior);
}
