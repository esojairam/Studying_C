#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<locale.h>

float res[7],n1[6]={16,13,13.57,133,0.35,14},n2[8]={250,100,200,23,85,1000,3,5},p=(100);

main(void){
	setlocale(LC_ALL,"Portuguese");
	
	res[0]=(n1[0]/p)*n2[0];
	printf("8) Em uma população de 250 ratos, temos que 16 por cento são brancos. Qual é o número de ratos brancos destapopulação? \n");
	printf("R: %f \n", res[0]);
	
	res[1]=(n1[1]/p)*n2[1];
	printf("9) Quanto é 13 por cento de 100? \n");
	printf("R: %f \n", res[1]);
	
	res[2]=(n1[1]/p)*n2[2];
	printf("10) Quanto é 13 por cento de 200? \n");
	printf("R: %f \n", res[2]);
	
	res[3]=(n1[2]/p)*n2[3];
	printf("11) Quanto é 13,57 por cento de 23? \n");
	printf("R: %f \n", res[3]);
	
	res[4]=(n1[3]/p)*n2[4];
	printf("12) Quanto é 133 por cento de 85? \n");
	printf("R: %f \n", res[4]);
	
	res[5]=(n1[4]/p)*n2[5];
	printf("13) Quanto é 0,35 por cento de 1000? \n");
	printf("R: %f \n", res[5]);
	
	res[6]=(n1[5]/p)*(n2[6]-n2[7]);
	printf("14) Quanto é 14 por cento de 3-5? \n");
	printf("R: %f", res[6]);
	
	
	return 0;
}
