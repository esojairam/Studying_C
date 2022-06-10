#include<stdio.h>
#include<math.h>
#include<locale.h>
#include<conio.h>

float peso, altura, imc;

main(void){
	
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	printf("Digite sua altura em metros: ");
	scanf("%f", &altura);
	
	imc=peso/(altura*altura);
	
	
	
	if(imc<20){
		printf("%f imc Abaixo do Normal", imc);
	}
	else if(imc>=20 && imc<=25){
		printf("%f imc Normal", imc);
	}
	else if(imc>=25 && imc<=30){
		printf("%f imc Sobrepeso", imc);
	}
	else if(imc>=30 && imc<=35){
		printf("%f imc Obsedide leve", imc);
	}
	else if(imc>=35 && imc<=40){
		printf("%f imc Obesidade moderada", imc);
	}
	else 
		printf("%f imc Obesidade morbida", imc);
	
	
	return 0;
}
