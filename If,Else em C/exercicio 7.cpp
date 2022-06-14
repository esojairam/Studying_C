#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<conio.h>

float a, b, c;

main(void){
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite três valores: ");
	scanf("%f%f%f", &a, &b, &c);
	
	if(a+b>c && a+c>b && c+b>a ){
		printf("Pode-se construir um triângulo!");
		if(a==b && a==c)
			printf("\nEquilatero");
		else
			if(a==b || a==c || b==c)
				printf("\nIsosceles");
			else
				printf("\nEscaleno");
	}
	else 
		printf("Não se pode construir um triângulo!");

return 0;	
}


