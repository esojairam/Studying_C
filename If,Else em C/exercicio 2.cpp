#include<stdio.h>
#include<conio.h>
#include<locale.h>

float n[2];

main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o 1º número: ");
	scanf("%f", &n[0]);
	printf("Digite o 2º número: ");
	scanf("%f", &n[1]);
	
	if(n[0]>n[1]){
		printf("O maior número entrado é %.2f", n[0]);
	}
	else if(n[1]>n[0]){
		printf("O maior número entrado é %.2f", n[1]);
	}
	
	return 0;
}
