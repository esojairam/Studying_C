#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<locale.h>

float res,n1=(12.5),n2=(8);

main(void){
	setlocale(LC_ALL,"Portuguese");
	
	res= (n1/100)*n2;
	
	printf("7) Dos 8 irm�os que possuo, apenas 12,5% s�o mulheres. Quantas irm�s eu possuo? \n");
	printf("R: %f", res);
	
	return 0;
}
