#include<stdio.h>
#include<conio.h>
#include<locale.h>

float n;

main(void){
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite um n�mero: ");
	scanf("%f", &n);
	
	if(n>0){
		printf("O n�mero %.2f � maior do que 0", n);
	}
	else if(n<0){
		printf("O n�mero %.2f � menor do que 0", n);
	}
	else if(n==0){
		printf("O n�mero %.2f � igual a 0", n);
	}
	
	return 0;
}
