#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// FOR (PARA)
/* Implemente um algoritmo para ler o valor de 10 sal�rios e escrever quais os tr�s maiores 
valores dos sal�rios lidos. */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int cont;
	float salario, topUm, topDois = 0, topTres = 0;
	
	for (cont = 1; cont <= 10; cont++) {
		printf("Digite o valor do %d� sal�rio: ", cont);
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

	printf("Maior sal�rio: %.2f\n", topUm);
	printf("Segundo maior sal�rio: %.2f\n", topDois);
	printf("Terceiro maior sal�rio: %.2f", topTres);
	
	return 0;
}
