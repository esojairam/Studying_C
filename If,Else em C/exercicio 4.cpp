#include<stdio.h>
#include<conio.h>
#include<locale.h>

int idd;

main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite sua idade: ");
	scanf("%i", &idd);
	
	if(idd>=18){
		printf("Voc� pode digirir!");
	}
	else{
		printf("Voc� n�o pode digirir!");
	}
	
	return 0;
}
