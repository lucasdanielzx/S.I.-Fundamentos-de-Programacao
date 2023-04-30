#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// WHILE (ENQUANTO)
/* Implemente um algoritmo para ler 10 números e depois do laço de repetição imprima quantos 
desses valores lidos estão no intervalo entre 10 e 50 (incluindo os valores 10 e 50 no intervalo) e 
quantos deles estão fora deste intervalo. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num, dentroIntervalo = 0, foraIntervalo = 0, cont = 1;
	
	while (cont <= 10) {
		printf("Digite o %dº número: ", cont);
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
	
	printf("%d dos números digitados estão DENTRO do intervalo de 10 a 50\n", dentroIntervalo);
	printf("%d dos números digitados estão FORA do intervalo de 10 a 50", foraIntervalo);
	
	return 0;
}
