#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

// DO...WHILE (FAÇA ... ENQUANTO)
/* Faça um algoritmo que receba a idade, a altura e o peso de 10 pessoas. 
Depois do laço de repetição, calcule e imprima: 
• a quantidade de pessoas com idade >= 0 e <= 21 anos;
• a quantidade de pessoas com idade > 21 e <= 50 anos;
• a quantidade de pessoas com idade superior a 50 anos;
• a média das idades das pessoas;
• a média das alturas das pessoas;
• a média dos pesos das pessoas; */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int idade, cont = 1, contJovens = 0, contAdultos = 0, contIdosos = 0, somaIdades;
	float altura, peso, somaAlturas, somaPesos;
	
	do {
		printf("Digite a IDADE da %dº pessoa: ", cont);
		scanf("%d", &idade);
		printf("Digite a ALTURA da %dº pessoa: ", cont);
		scanf("%f", &altura);
		printf("Digite o PESO da %dº pessoa: ", cont);
		scanf("%f", &peso);
		
		somaIdades = somaIdades + idade;
		somaAlturas = somaAlturas + altura;
		somaPesos = somaPesos + peso;
		
		if (idade >= 0 && idade <= 21) {
			contJovens++;
		} 
		else if (idade > 21 && idade <= 50) {
			contAdultos++;
		} 
		else {
			contIdosos++;
		}
		
		system("cls");
		cont++;
	} while (cont <= 10);
	
	printf("Quantidade de pessoas com idade >= 0 && idade <= 21: %d\n", contJovens);
	printf("Quantidade de pessoas com idade idade > 21 && idade <= 50: %d\n", contAdultos);
	printf("Quantidade de pessoas com idade superior a 50 anos: %d\n", contIdosos);
	printf("Média das idades das pessoas: %d\n", somaIdades/10);
	printf("Média das alturas das pessoas: %.2f\n", somaAlturas/10);
	printf("Média dos pesos das pessoas: %.2f", somaPesos/10);
	
	return 0;
}
