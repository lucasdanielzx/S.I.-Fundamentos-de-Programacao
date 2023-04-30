#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// FOR (PARA)
/* Implemente um algoritmo para ler o valor de 10 salários e escrever quais os três maiores 
valores dos salários lidos. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int cont;
	float salario, topUm, topDois = 0, topTres = 0;
	
	for (cont = 1; cont <= 10; cont++) {
		printf("Digite o valor do %dº salário: ", cont);
		scanf("%f", &salario);
		
		if (cont == 1) {
			topUm = salario;
		}
		else { //Definir top 3
			if (salario > topUm) {
				topTres = topDois;
				topDois = topUm;
				topUm = salario;
			}
			else if (salario < topUm && salario > topDois) {
				topTres = topDois;
				topDois = salario;
			} 
			else if (salario < topDois && salario > topTres) {
				topTres = salario;
			}
		}		
	}

	system("cls");

	printf("Maior salário: %.2f\n", topUm);
	printf("Segundo maior salário: %.2f\n", topDois);
	printf("Terceiro maior salário: %.2f", topTres);
	
	return 0;
}
