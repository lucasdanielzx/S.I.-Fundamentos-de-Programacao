#include<stdio.h>
#include<stdlib.h>

/* Tendo como dados de entrada a altura de uma pessoa, 
implemente um algoritmo que calcule e mostre o peso ideal, usando a seguinte fórmula: (72.7*altura) - 58. */

int main () {
	
	float altura;
	//float pesoIdeal;
	
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	//pesoIdeal = (72.7 * altura) - 58;
	
	printf("\nCom base na altura informada, o seu peso ideal e: %.2f", ((72.7 * altura) - 58));
}
