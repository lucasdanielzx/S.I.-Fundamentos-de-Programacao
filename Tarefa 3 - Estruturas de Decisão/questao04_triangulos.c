#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Fa�a um programa que leia o tamanho de 3 lados de um poss�vel tri�ngulo. Em seguida o programa 
dever� informar se os valores informados podem ser um tri�ngulo ou n�o. Caso os lados informados 
formem um tri�ngulo, o programa deve indicar se o mesmo �: equil�tero, is�sceles ou escaleno. 
Dicas: 
� Tr�s lados formam um tri�ngulo quando a soma de dois lados for maior que o terceiro; 
� Tri�ngulo Equil�tero: tr�s lados iguais; 
� Tri�ngulo Is�sceles: dois lados iguais; 
� Tri�ngulo Escaleno: tr�s lados diferentes; */

float cond_existencia_triangulo (float l1, float l2, float l3) {
	if ((l1 + l2) > l3 && (l1 + l3) > l2 && (l2 + l3) > l1) {
		return 1;
	}
	else {
		return 0;
	}
}

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	float l1, l2, l3;
	
	printf("Informe o valor do primeiro lado: ");
	scanf("%f", &l1);
	printf("Informe o valor do segundo lado: ");
	scanf("%f", &l2);
	printf("Informe o valor do terceiro lado: ");
	scanf("%f", &l3);
	
	system("cls");
	
	if (cond_existencia_triangulo(l1, l2, l3) == 1) {
		if (l1 == l2 && l1 == l3 && l2 == l3) {
			printf("Os valores informados formam um tri�ngulo EQUIL�TERO");
		}
		else if (l1 != l2 && l1 != l3 && l2 != l3) {
			printf("Os valores informados formam um tri�ngulo ESCALENO");
		}
		else {
			printf("Os valores informados formam um tri�ngulo IS�SCELES");
		}
	}
	else {
		printf("Os valores informados n�o formam um tri�ngulo.");
	}
	
	return 0;
}
