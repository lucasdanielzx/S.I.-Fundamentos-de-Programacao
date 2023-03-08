#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* As Organiza��es Tabajara resolveram dar um aumento de sal�rio aos seus colaboradores e lhe
contrataram para desenvolver o programa que calcular� os reajustes. Fa�a um programa que recebe o 
sal�rio de um colaborador e calcule o reajuste segundo os crit�rios abaixo, baseado no sal�rio atual:

� Sal�rio menor que R$ 1.200,00 - aumento de 20%
� Sal�rio maior ou igual que R$1.200,00 e menor que R$ 2.500,00 - aumento de 15%
� Sal�rio maior ou igual que R$ 2.500,00 e menor que R$ 3.500,00 - aumento de 10%
� Sal�rio maior ou igual R$ 3.500,00 em diante - aumento de 5%

Ap�s o aumento ser atribu�do, informe na tela:
� O sal�rio antes do reajuste;
� O percentual de aumento aplicado;
� O valor do aumento;
� O novo sal�rio, ap�s o aumento. */

float calculoAjuste (float salario, float percentual) {
	return salario + (salario * percentual);
}

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float salario, percentual, salarioAjustado;
	
	printf("Digite o sal�rio: ");
	scanf("%f", &salario);
	
	if (salario < 1200) {
		percentual = 0.20;
		salarioAjustado = calculoAjuste(salario, percentual);
	}
	else if (salario >= 1200 && salario < 2500) {
		percentual = 0.15;
		salarioAjustado = calculoAjuste(salario, percentual);

	}
	else if (salario >= 2500 && salario < 3500) {
		percentual = 0.10;
		salarioAjustado = calculoAjuste(salario, percentual);
	}
	else {
		percentual = 0.05;
		salarioAjustado = calculoAjuste(salario, percentual);
	}
	
	system("cls");
	
	printf("Sal�rio antes do reajuste: %.2f", salario);
	printf("\nPercentual de aumento aplicado: %.0f por cento", percentual * 100);
	printf("\nValor do aumento: %.2f", salarioAjustado - salario);
	printf("\nValor do sal�rio ajustado: %.2f", salarioAjustado);
}
