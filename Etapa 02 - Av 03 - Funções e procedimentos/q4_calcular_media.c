#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<string.h>

/* Faça um algoritmo que leia, calcule e imprima a média de um aluno, sabendo-se que:
• A média é composta por três notas que devem ser lidas na função MAIN e enviadas como
parâmetros para uma função que realizará o cálculo a média;
• A média calculada é a ponderada, sendo que os pesos aplicados para as notas serão: 3
para a primeira e segunda nota e 4 para terceira nota;
• A função de cálculo da média deverá retornar a média para a função MAIN imprimir da tela. */

float calcularMedia(float nota1, float nota2, float nota3);

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, nota3;
	
	printf("Digite a 1º nota: ");
	scanf("%f", &nota1);
	printf("Digite a 2º nota: ");
	scanf("%f", &nota2);
	printf("Digite a 3º nota: ");
	scanf("%f", &nota3);
	
	system("cls");
	
	printf("Média do aluno = %.1f", calcularMedia(nota1, nota2, nota3));
}

float calcularMedia(float nota1, float nota2, float nota3) {	
	return (nota1*3+nota2*3+nota3*4)/12;
}
