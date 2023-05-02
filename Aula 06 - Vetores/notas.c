#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float notas[5], somaNotas, maiorNota;
	int cont;
	
	for(cont = 0; cont <= 4; cont++) {
		printf("Digite a %dº nota: ", cont);
		scanf("%f", &notas[cont]);
	}
	
	system("cls");
	
	for(cont = 0; cont <= 4; cont++) {
		somaNotas = somaNotas + notas[cont];
		
		if (cont == 0) {
			maiorNota = notas[cont];
		}
		else {
			if (notas[cont] > maiorNota) {
				maiorNota = notas[cont];
			}
		} 
	}

	printf("Média do aluno = %.1f", somaNotas/5);
	printf("Maior nota: %.1f", maiorNota);

	return 0;
}
