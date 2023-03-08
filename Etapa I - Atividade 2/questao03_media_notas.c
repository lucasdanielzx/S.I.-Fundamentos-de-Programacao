#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Faça um programa para a leitura de três notas de um aluno. 
O programa deve calcular a média alcançada por aluno e apresentar:
• A mensagem "Aprovado com Distinção", se a média for igual a dez
• A mensagem "Aprovado", se a média alcançada for maior ou igual a sete e menor que dez;
• A mensagem "Reprovado", se a média for menor do que sete; */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float nota, somaNotas, media;
	int cont;
	
	for (cont = 1; cont <= 3; cont++) {		
		printf("Digite a %dº nota: ", cont);
		scanf("%f", &nota);
	
		somaNotas = nota + somaNotas;
	}
	
	system("cls");
	media = somaNotas / 3;
	
	if (somaNotas / 3 == 10) {
		printf("Sua média foi %.1f, portando você está APROVADO COM DISTINÇÃO!", media);
	}
	else if (media >= 7 && media < 10) {
		printf("Sua média foi %.1f, portando você está APROVADO!", media);
	}
	else {
		printf("Sua média foi %.1f, portando você está REPROVADO.", media);
	}
}
