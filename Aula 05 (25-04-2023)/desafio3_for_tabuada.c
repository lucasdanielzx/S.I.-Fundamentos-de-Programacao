#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main () {
	setlocale(LC_ALL, "Portuguese");
	
	int num, cont, calc;
	
	printf("Qual tabuada desejada: ");
	scanf("%d", &num);
	system("cls");
	
	for (cont = 1; cont <= 10; cont++) {
		calc = num * cont;
		
		printf("%d x %d = %d\n", num, cont, calc);
	}
	
	return 0;
}
