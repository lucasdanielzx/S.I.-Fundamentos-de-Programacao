#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include<string.h>

int calcular (int populacao, float taxa);

int main() {
	setlocale(LC_ALL, "Portuguese");
	
	int populacaoA = 90000, populacaoB=300000, anos=0;
	float taxaA = 0.03, taxaB = 0.012;
	
	do {
		populacaoA = calcular(populacaoA, taxaA);
		populacaoB = calcular(populacaoB, taxaB);
		
		anos++;
	} 
	while(populacaoA < populacaoB);
	
	printf("Anos necessários para a população da cidade A ultrapassar a da cidade B: %d", anos);
	
	return 0;
}

int calcular (int populacao, float taxa) {
	int populacaoNova;
	
	populacaoNova = (populacao * taxa) + populacao;
	
	return populacaoNova;
}

