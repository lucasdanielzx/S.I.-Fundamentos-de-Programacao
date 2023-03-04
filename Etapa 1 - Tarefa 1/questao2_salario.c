#include<stdio.h>
#include<stdlib.h>

/* Faça um algoritmo que pergunte para o usuário quanto ele ganha por hora e o número de horas trabalhadas no mês.
Calcule e mostre o total do seu salário. */

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
