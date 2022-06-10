#include<stdio.h>
#include<conio.h>
#include<locale.h>

int idade;

main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite sua idade: ");
	scanf("%i", &idade);
	
	if(idade>=16){
		printf("Pode votar!");
	} else{
		printf("Não pode votar!");
	}
	
	return 0;
}
