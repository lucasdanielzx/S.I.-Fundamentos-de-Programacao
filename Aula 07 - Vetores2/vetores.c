#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	char nome[10]; //cada letra � armazenada em um indice do vetor
	
	printf("Digite o nome: ");
	scanf("%s", &nome); //scanf quebra a string no espa�o
	//gets(nome); //fun��o para armazenar uma palavra composta
	
	printf("O nome digitado foi: %s", nome);
	
	int i = 0;
	while(nome[i] != '\n') { //um'\n' � guardado no final da string (depois da �ltima posi��o preenchida)
		
	}
	
	return 0;
}

// strcpy(nome, "teste"); -> fun��o para atribuir texto a uma variavel
