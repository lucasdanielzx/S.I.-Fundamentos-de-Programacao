#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float notas[5];
	int cont;
	
	for(cont = 1; cont <= 5; cont++) {
		printf("Digite a %dº nota: ", cont);
		scanf("%f", &notas[cont]);
	}
	
	system("cls");
	
	printf("Notas digitadas maiores que 7: ");
	for(cont = 1; cont <= 5; cont++) {
		if (notas[cont] > 7) {
			printf("%.1f ", notas[cont]);
		}
	}
	
	return 0;
}

