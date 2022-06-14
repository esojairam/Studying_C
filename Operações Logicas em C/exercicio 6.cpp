#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<locale.h>

float id1=(17),id2=(32),res;

main(void){
	setlocale(LC_ALL,"Portuguese");
	
	res=(id1*100)/id2;
	printf("6) Eu tenho 32 anos. Meu primo tem 17 anos. A idade dele é quantos por cento da minha? \n");
	printf("R: %f", res);
	
	return 0;
}
