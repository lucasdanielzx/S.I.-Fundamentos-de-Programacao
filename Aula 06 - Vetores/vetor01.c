#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num[5], cont;
	
	for(cont = 0; cont <= 4; cont++) {
		printf("Digite o valor da posi��o [%d]: ", cont);
		scanf("%d", &num[cont]);
	}
	
	system("cls");
	
	for(cont = 0; cont <= 4; cont++) {
		printf("Valor digitado na posi��o [%d]: %d", cont, num[cont]);
		
		if (num[cont] % 2 == 0) {
			printf(" - Par\n");
		}
		else {
			printf(" - Impar\n");
		}
	}

	
	return 0;
}
