#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Fa�a um algoritmo que receba a idade e o nome de um nadador e imprima o seu nome, a sua
idade e a categoria do mesmo, de acordo com as regras a seguir: 
INFANTIL A - 5 � 7 anos
INFANTIL B - 8 � 10 anos
JUVENIL A - 11 � 13
JUVENIL B - 14 � 17
S�NIOR - � PARTIR DE 18 ANOS */

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int idade;
	char nome[10];
	
	printf("Digite seu nome: ");
	scanf("%s", &nome);
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	
	system("cls");
	
	if (idade >= 5 && idade <= 7) {
		printf("%s, sua idade � %d anos, portanto sua categoria � a INFANTIL A.", nome, idade);
	}
	else if (idade >= 8 && idade <= 10) {
		printf("%s, sua idade � %d anos, portanto sua categoria � a INFANTIL B.", nome, idade);
	}
	else if (idade >= 11 && idade <= 13) {
		printf("%s, sua idade � %d anos, portanto sua categoria � a JUVENIL A.", nome, idade);
	}
	else if (idade >= 14 && idade <= 17) {
		printf("%s, sua idade � %d anos, portanto sua categoria � a JUVENIL B.", nome, idade);
	}
	else {
		printf("%s, sua idade � %d anos, portanto sua categoria � a S�NIOR.", nome, idade);
	}
}
