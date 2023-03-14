#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// Faça um Programa que leia dois números e imprima o maior deles.

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float qtdMaca, qtdMorango, totalKg, totalPreco, valorMorango, valorMaca;
	
	printf("Digite a quantidade de morangos em Kg: ");
	scanf("%f", &qtdMorango);
	
	printf("Digite a quantidade de maçãs em Kg: ");
	scanf("%f", &qtdMaca);
	
	if (qtdMorango <= 5) {
		valorMorango = qtdMorango * 2.50;
	}
	else {
		valorMorango = qtdMorango * 2.20;
	}
	
	if (qtdMaca <= 5) {
		valorMaca = qtdMaca * 1.80;
	}
	else {
		valorMaca = qtdMaca * 1.50;
	}
	
	//totalKg = valorMorango+valorMaca;
	
	if(qtdMorango+qtdMaca > 8 || valorMorango+valorMaca > 25){
		printf("Valor a ser pago: %.2f", (valorMorango+valorMaca)*0.90);
	}
	else{
		printf("Valor a ser pago: %.2f", valorMorango+valorMaca);
	}
}
