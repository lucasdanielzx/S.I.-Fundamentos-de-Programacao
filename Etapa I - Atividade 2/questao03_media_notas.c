#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Fa�a um programa para a leitura de tr�s notas de um aluno. 
O programa deve calcular a m�dia alcan�ada por aluno e apresentar:
� A mensagem "Aprovado com Distin��o", se a m�dia for igual a dez
� A mensagem "Aprovado", se a m�dia alcan�ada for maior ou igual a sete e menor que dez;
� A mensagem "Reprovado", se a m�dia for menor do que sete; */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float nota, somaNotas, media;
	int cont;
	
	for (cont = 1; cont <= 3; cont++) {		
		printf("Digite a %d� nota: ", cont);
		scanf("%f", &nota);
	
		somaNotas = nota + somaNotas;
	}
	
	system("cls");
	media = somaNotas / 3;
	
	if (somaNotas / 3 == 10) {
		printf("Sua m�dia foi %.1f, portando voc� est� APROVADO COM DISTIN��O!", media);
	}
	else if (media >= 7 && media < 10) {
		printf("Sua m�dia foi %.1f, portando voc� est� APROVADO!", media);
	}
	else {
		printf("Sua m�dia foi %.1f, portando voc� est� REPROVADO.", media);
	}
}
