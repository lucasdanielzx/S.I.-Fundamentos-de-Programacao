#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* As Organizações Tabajara resolveram dar um aumento de salário aos seus colaboradores e lhe
contrataram para desenvolver o programa que calculará os reajustes. Faça um programa que recebe o 
salário de um colaborador e calcule o reajuste segundo os critérios abaixo, baseado no salário atual:

• Salário menor que R$ 1.200,00 - aumento de 20%
• Salário maior ou igual que R$1.200,00 e menor que R$ 2.500,00 - aumento de 15%
• Salário maior ou igual que R$ 2.500,00 e menor que R$ 3.500,00 - aumento de 10%
• Salário maior ou igual R$ 3.500,00 em diante - aumento de 5%

Após o aumento ser atribuído, informe na tela:
• O salário antes do reajuste;
• O percentual de aumento aplicado;
• O valor do aumento;
• O novo salário, após o aumento. */

float calculoAjuste (float salario, float percentual) {
	return salario + (salario * percentual);
}

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float salario, percentual, salarioAjustado;
	
	printf("Digite o salário: ");
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
	
	printf("Salário antes do reajuste: %.2f", salario);
	printf("\nPercentual de aumento aplicado: %.0f por cento", percentual * 100);
	printf("\nValor do aumento: %.2f", salarioAjustado - salario);
	printf("\nValor do salário ajustado: %.2f", salarioAjustado);
}
