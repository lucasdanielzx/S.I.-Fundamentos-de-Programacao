#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<string.h>

void contVoto(int cod);
void resultado();
int voto[5]; //vetor global

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int cod, exit = 0;
	
	do {
		system("cls");
		printf("Elei��o 2022\n\n");
		printf("0 - Voto em branco\n");
		printf("1 - Jos�\n");
		printf("2 - Jo�o\n");
		printf("3 - Maria\n");
		printf("4 - Resultado\n");
		printf("5 - Sair do sistema\n\n");
		printf("Digite um codigo: ");
		scanf("%d", &cod);
		
		switch (cod) {
			case 0:
				contVoto(cod);
			break;
			case 1:
				contVoto(cod);
			break;
			case 2:
				contVoto(cod);
			break;
			case 3:
				contVoto(cod);
			break;
			case 4:
				resultado();
			break;
			case 5:
				printf("\nDeseja realmente sair do sistema?\n");
				printf("[0] - N�o | [1] - Sim\n");
				scanf("%d", &exit);
			default:
				printf("\nValor inv�lido!\n");
				system("pause");
		}
	}
	while (exit == 0);
	
	return 0;
}

//procedimentos
void contVoto(int cod) {
	system("cls");
	voto[cod]++; //contabilizar o voto
	printf("Obrigado pelo seu voto!\n");
	system("pause"); //pausa a execu��o do c�digo
}

void resultado(){
	system("cls");
	
	char senha[10];
	
	do {
		printf("Digite a senha para exibir o resultado: ");
		scanf("%s", senha);
		
		if (strcmp(senha, "eleicao2022") != 0) {
			system("cls");
			printf("Senha inv�lida!\n");
		}
	}
	while (strcmp(senha, "eleicao2022") != 0);
	
	if (strcmp(senha, "eleicao2022") == 0) { //fun��o retorna 0 se as strings comparadas forem iguais
		system("cls");
		
		printf("Resultado:\n\n");
		
		printf("Votos em branco: %d\n", voto[0]);
		printf("Jos�: %d\n", voto[1]);
		printf("Jo�o: %d\n", voto[2]);
		printf("Maria: %d\n\n", voto[3]);
		
		printf("Votos v�lidos: %d\n", voto[1]+voto[2]+voto[3]);
	}
	
	system("pause");
}
