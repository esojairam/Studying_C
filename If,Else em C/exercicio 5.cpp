#include<stdio.h>
#include<conio.h>
#include<locale.h>

int idd;

main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite sua idade: ");
	scanf("%i", &idd);
	
	if(idd<16){
		printf("N�o pode votar e nem dirigir!");
	}
	else if(idd>=18){
		printf("Pode votar e dirigir!");
	}
	else if(idd>=16 && idd<18){
		printf("Pode votar mas n�o pode dirigir!");
	}
	
	return 0;
}
