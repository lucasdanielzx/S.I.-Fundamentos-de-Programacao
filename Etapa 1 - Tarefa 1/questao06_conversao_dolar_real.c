#include<stdio.h>
#include<stdlib.h>

/* Faça o algoritmo que calcule o valor em reais correspondente aos de dólares. 
O programa deve  solicitar a quantidade de dólares e a cotação do dólar no dia,  
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
