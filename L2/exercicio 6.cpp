#include<stdio.h>
#include<locale.h>
#include<conio.h>

float a, b, c;

main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite três valores: ");
	scanf("%f%f%f", &a, &b, &c);
	
	if(a+b>c && c!=0 || a+c>b && b!=0 || b+c>a && a!=0){
		printf("Pode-se construir um triângulo!");
	}
	else{
		printf("Não se pode construir um triângulo!");
	}
return 0;
}


