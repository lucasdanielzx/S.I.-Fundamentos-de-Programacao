#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Mini calculadora

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	float num1, num2;
	
	printf("Digite o primeiro número: ");
	scanf("%f", &num1);
	
	printf("Digite o segundo número: ");
	scanf("%f", &num2);
	
	system("cls");
	
	printf("OPERAÇÕES \n----------------- \n1 - SOMA\n2 - SUBTRAÇÃO\n3 - DIVISÃO\n4 - MULTIPLICAÇÃO\n-----------------");
	printf("\nDigite a opção: \n");
	scanf("%d", &opcao);
	
	system("cls");
	
	switch(opcao){
		case 1:
			printf("Resultado: %.2f", num1+num2);
			break;
		case 2:
			printf("Resultado: %.2f", num1-num2);
			break;
		case 3:
			printf("Resultado: %.2f", num1/num2);
			break;
		case 4:
			printf("Resultado: %.2f", num1*num2);
			break;		
		default: 
		printf("Opção invalida");
	}
	
	return 0;
}
