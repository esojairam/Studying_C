#include<stdio.h>
#include<conio.h>
#include<locale.h>

int idd;

main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite sua idade: ");
	scanf("%i", &idd);
	
	if(idd>=18){
		printf("Você pode digirir!");
	}
	else{
		printf("Você não pode digirir!");
	}
	
	return 0;
}
