#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

//Mini calculadora

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int opcao;
	float num1, num2;
	
	printf("Digite o primeiro n�mero: ");
	scanf("%f", &num1);
	
	printf("Digite o segundo n�mero: ");
	scanf("%f", &num2);
	
	system("cls");
	
	printf("OPERA��ES \n----------------- \n1 - SOMA\n2 - SUBTRA��O\n3 - DIVIS�O\n4 - MULTIPLICA��O\n-----------------");
	printf("\nDigite a op��o: \n");
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
		printf("Op��o invalida");
	}
	
	return 0;
}
