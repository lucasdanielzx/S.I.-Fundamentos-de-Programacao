#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
	int senha, cont = 1;
	
	do{
		printf("%dº tentativa. Digite a senha: ", cont);
		scanf("%d", &senha);
		
		system("cls");
		
		if(senha != 123) {
			printf("Senha incorreta!\n");
			cont++;
		}
	}while (senha != 123 && cont <= 3);
	
	if(cont > 3) {
		printf("Ultrapassou o limite de tentativas.\n");
	}
	if (senha == 123) {
		printf("VOCÊ DESCOBRIU A SENHA");
	}
	
	return 0;
}
