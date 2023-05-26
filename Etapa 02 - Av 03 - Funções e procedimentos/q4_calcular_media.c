#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<string.h>

/* Fa�a um algoritmo que leia, calcule e imprima a m�dia de um aluno, sabendo-se que:
� A m�dia � composta por tr�s notas que devem ser lidas na fun��o MAIN e enviadas como
par�metros para uma fun��o que realizar� o c�lculo a m�dia;
� A m�dia calculada � a ponderada, sendo que os pesos aplicados para as notas ser�o: 3
para a primeira e segunda nota e 4 para terceira nota;
� A fun��o de c�lculo da m�dia dever� retornar a m�dia para a fun��o MAIN imprimir da tela. */

float calcularMedia(float nota1, float nota2, float nota3);

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	float nota1, nota2, nota3;
	
	printf("Digite a 1� nota: ");
	scanf("%f", &nota1);
	printf("Digite a 2� nota: ");
	scanf("%f", &nota2);
	printf("Digite a 3� nota: ");
	scanf("%f", &nota3);
	
	system("cls");
	
	printf("M�dia do aluno = %.1f", calcularMedia(nota1, nota2, nota3));
}

float calcularMedia(float nota1, float nota2, float nota3) {	
	return (nota1*3+nota2*3+nota3*4)/12;
}
