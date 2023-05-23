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
		printf("Eleição 2022\n\n");
		printf("0 - Voto em branco\n");
		printf("1 - José\n");
		printf("2 - João\n");
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
				printf("[0] - Não | [1] - Sim\n");
				scanf("%d", &exit);
			default:
				printf("\nValor inválido!");
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
	system("pause"); //pausa a execução do código
}

void resultado(){
	system("cls");
	
	char senha[10];
	
	do {
		printf("Digite a senha para exibir o resultado: ");
		scanf("%s", senha);
		
		if (strcmp(senha, "eleicao2022") != 0) {
			system("cls");
			printf("Senha inválida!\n");
		}
	}
	while (strcmp(senha, "eleicao2022") != 0);
	
	if (strcmp(senha, "eleicao2022") == 0) { //função retorna 0 se as strings comparadas forem iguais
		system(cls);
		
		printf("Resultado:\n\n");
		
		printf("Votos em branco: %d\n", voto[0]);
		printf("José: %d\n", voto[1]);
		printf("João: %d\n", voto[2]);
		printf("Maria: %d\n\n", voto[3]);
		
		printf("Votos válidos: %d", voto[1]+voto[2]+voto[3]);
	}
	
	system("pause");
}
