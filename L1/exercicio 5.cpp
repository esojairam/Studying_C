#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>

int base=(10);
float res[5];

main(void){
	setlocale(LC_ALL, "Portuguese");
	
	res[0]=pow(base,6)*pow(base,2);
	printf("a) 10^6 x 10^2 = %.2f \n", res[0]);
	
	res[1]=10-12*pow(base,3);
	printf("b) 10-12 x 10^3 = %.2f \n", res[1]);
	
	res[2]=(2.3*pow(base,10))*(4*pow(base,7));
	printf("c) 2,3.10^10 x 4.10^7 = %.2f \n", res[2]);
	
	res[3]=pow(base,4)/pow(base,3);
	printf("d) 10^4:10^3 = %.2f \n", res[3]);
	
	res[4]=pow(base,-7)/pow(base,-2);
	printf("e) 10^-7: 10^-2 = %f", res[4]);
	
	return 0;
	
}
