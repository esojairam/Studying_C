#include<stdio.h>
#include<conio.h>
#include<locale.h>

float n[2];

main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o 1� n�mero: ");
	scanf("%f", &n[0]);
	printf("Digite o 2� n�mero: ");
	scanf("%f", &n[1]);
	
	if(n[0]>n[1]){
		printf("O maior n�mero entrado � %.2f", n[0]);
	}
	else if(n[1]>n[0]){
		printf("O maior n�mero entrado � %.2f", n[1]);
	}
	
	return 0;
}
