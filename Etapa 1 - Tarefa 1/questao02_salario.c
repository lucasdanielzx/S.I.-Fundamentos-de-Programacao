#include<stdio.h>
#include<stdlib.h>

/* Fa�a um algoritmo que pergunte para o usu�rio quanto ele ganha por hora e o n�mero de horas trabalhadas no m�s.
Calcule e mostre o total do seu sal�rio. */

int main () {

	float ganhos, horas;
	//float salario;
	
	printf("Digite o quanto voce ganha por hora trabalhada: ");
	scanf("%f", &ganhos);
	printf("Digite a quantidade de horas que voce trabalha em um mes: ");
	scanf("%f", &horas);
	
	//salario = horas * ganhos;
	
	printf("\nCom base no informado, o seu salario e: %.2f", (horas * ganhos));
}
