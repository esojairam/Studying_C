#include<stdio.h>
#include<conio.h>
#include<locale.h>

float n;

main(void){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite um número: ");
	scanf("%f", &n);
	
	if(n>0){
		printf("O número %.2f é maior do que 0", n);
	}
	else if(n<0){
		printf("O número %.2f é menor do que 0", n);
	}
	else if(n==0){
		printf("O número %.2f é igual a 0", n);
	}
	
	return 0;
}
