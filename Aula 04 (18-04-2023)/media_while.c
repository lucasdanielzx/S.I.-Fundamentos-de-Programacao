#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float notas, somaNotas, menor, maior;
	int cont = 1;
	
	while(cont <= 10) {
		printf("Digite a nota do %d� aluno: ", cont);
		scanf("%f", &notas);
		somaNotas = notas + somaNotas;
		
		if (cont == 1) {
			menor = notas;
			maior = notas;
		}
		else {			
			if (notas < menor) {
				menor = notas;
			}
			else {
				maior = notas;
			}
		}
			
		cont++;
	}
	
	system("cls");
	
	printf("A m�dia dos 10 alunos � igual a %.1f \n", somaNotas/10);
	printf("Menor nota: %.1f \n", menor);
	printf("Maior nota: %.1f \n", maior);
}
