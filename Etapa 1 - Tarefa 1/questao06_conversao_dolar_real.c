#include<stdio.h>
#include<stdlib.h>

/* Fa�a o algoritmo que calcule o valor em reais correspondente aos de d�lares. 
O programa deve  solicitar a quantidade de d�lares e a cota��o do d�lar no dia,  
em seguida deve mostrar o valor total em reais. */

int main () {
	
	float valorDolar, cotacaoDolar;
	//float totalConvertido;
	
	printf("Digite a quantia em dolares: ");
	scanf("%f", &valorDolar);
	printf("Digite a cotacao do dolar do dia: ");
	scanf("%f", &cotacaoDolar);
	
	//totalConvertido = valorDolar * cotacaoDolar;
	
	printf("\nCom base nos valores informados, o total em reais corresponde a: %.2f", (valorDolar * cotacaoDolar));
}
