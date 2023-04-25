#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num, fatorial = 1, cont = 1;
	
	printf("Digite o número que você deseja o fatorial: ");
	scanf("%d", &num);	
	system("cls");
	
	do {
		fatorial = fatorial * cont;
		cont++;
	} while (cont <= num);
	
	printf("Fatorial: %d", fatorial);
	
	return 0;
}
