#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// WHILE (ENQUANTO)
/* Implemente um algoritmo para ler 10 n�meros e depois do la�o de repeti��o imprima quantos 
desses valores lidos est�o no intervalo entre 10 e 50 (incluindo os valores 10 e 50 no intervalo) e 
quantos deles est�o fora deste intervalo. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num, dentroIntervalo = 0, foraIntervalo = 0, cont = 1;
	
	while (cont <= 10) {
		printf("Digite o %d� n�mero: ", cont);
		scanf("%d", &num);
		
		if (num >= 10 && num <= 50) {
			dentroIntervalo++;
		}
		else {
			foraIntervalo++;
		}

		cont++;
	}
	
	system("cls");
	
	printf("%d dos n�meros digitados est�o DENTRO do intervalo de 10 a 50\n", dentroIntervalo);
	printf("%d dos n�meros digitados est�o FORA do intervalo de 10 a 50", foraIntervalo);
	
	return 0;
}
