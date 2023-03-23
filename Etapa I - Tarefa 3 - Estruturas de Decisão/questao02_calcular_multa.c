#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/*O prefeito de uma cidade está preocupado com o número de inadiplentes de IPTU e lhe contratou 
para criar um programa que calcule e imprima o valor da multa a ser paga por essas pessoas. 

Conside que o programa deve receber os seguintes dados do imóvel:
• Número do registro na prefeitura;
• Valor do imposto;
• Número de meses em atraso.

As multas devem ser calculadas a partir do valor do imposto e de acordo com a seguinte tabela:
Valor do Imposto / Percentual por mês em atraso
Até R$ 500,00 -> 1%
De R$ 500,01 a R$ 1.800,00 -> 2%
De R$ 1.800,01 a R$ 5.000,00 -> 4%
De 5.000,01 a R$ 12.000,00 -> 7%
Acima de R$12.000,00 -> 10%

Ao final, o programa deve mostrar para o usuário do sistema: o número do registro do imóvel, 
o valor da multa e o valor do imposto a ser pago. */

float calcularMulta (float valorImposto, float percentual) {
	return valorImposto * percentual;
}

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int numRegistro, mesesAtraso;
	float valorImposto, valorMulta, percentual;
	
	printf("Informe o número do registro do imóvel na prefeitura: ");
	scanf("%d", &numRegistro);
	
	printf("\nInforme o valor do imposto: ");
	scanf("%f", &valorImposto);
	
	printf("\nInforme a quantidade de meses em atraso: ");
	scanf("%d", &mesesAtraso);
	
	system("cls");
	
	if (valorImposto <= 500) {
		percentual = mesesAtraso * 0.01;
		valorMulta = calcularMulta(valorImposto, percentual);
	}
	else if (valorImposto > 500 && valorImposto <= 1800) {
		percentual = mesesAtraso * 0.02;
		valorMulta = calcularMulta(valorImposto, percentual);
	}
	else if (valorImposto > 1800 && valorImposto <= 5000) {
		percentual = mesesAtraso * 0.04;
		valorMulta = calcularMulta(valorImposto, percentual);
	}
	else if (valorImposto > 5000 && valorImposto <= 12000) {
		percentual = mesesAtraso * 0.07;
		valorMulta = calcularMulta(valorImposto, percentual);
	}
	else {
		percentual = mesesAtraso * 0.10;
		valorMulta = calcularMulta(valorImposto, percentual);
	}
	
	printf("Número do registro do imóvel: %d", numRegistro);
	printf("\nValor da multa: %.2f", valorMulta);
	printf("\nValor do imposto: %.2f", valorImposto);	
	printf("\nValor do imposto + multa: %.2f", valorImposto + valorMulta);
	
	return 0;
}
