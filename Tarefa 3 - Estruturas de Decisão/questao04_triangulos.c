#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

/* Faça um programa que leia o tamanho de 3 lados de um possível triângulo. Em seguida o programa 
deverá informar se os valores informados podem ser um triângulo ou não. Caso os lados informados 
formem um triângulo, o programa deve indicar se o mesmo é: equilátero, isósceles ou escaleno. 
Dicas: 
• Três lados formam um triângulo quando a soma de dois lados for maior que o terceiro; 
• Triângulo Equilátero: três lados iguais; 
• Triângulo Isósceles: dois lados iguais; 
• Triângulo Escaleno: três lados diferentes; */

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
			printf("Os valores informados formam um triângulo EQUILÁTERO");
		}
		else if (l1 != l2 && l1 != l3 && l2 != l3) {
			printf("Os valores informados formam um triângulo ESCALENO");
		}
		else {
			printf("Os valores informados formam um triângulo ISÓSCELES");
		}
	}
	else {
		printf("Os valores informados não formam um triângulo.");
	}
	
	return 0;
}
