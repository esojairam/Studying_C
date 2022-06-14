#include<stdio.h>
#include<conio.h>
#include<locale.h>
#include<math.h>

float n[10];

main(void){
	setlocale(LC_ALL, "Portuguese");
	
	n[0]=12.48+19;
	n[1]=12.5+0.07;
	n[2]=12.8+3.27;
	n[3]=31.1+29.7;
	n[4]=107.03+32.7;
	n[5]=83.92+16.08;
	n[6]=275.04+129.3;
	n[7]=94.28+36.571;
	n[8]=189.76+183.24;
	n[9]=13.273+2,48;
	
	printf("a) 12.48+19 = %.3f \n", n[0]);
	printf("b) 12.5+0.07 = %.3f \n", n[1]);
	printf("c) 12.8+3.27 = %.3f \n", n[2]);
	printf("d) 31.1+29.7 = %.3f \n", n[3]);
	printf("e) 107.03+32.7 = %.3f \n", n[4]);
	printf("f) 83.92+16.08 = %.3f \n", n[5]);
	printf("g) 275.04+129.3 = %.3f \n", n[6]);
	printf("h) 94.28+36.571 = %.3f \n", n[7]);
	printf("i) 189.76+183.24 = %.3f \n", n[8]);
	printf("j) 13.273+2,48 = %.3f", n[9]);
	
	return 0;
}
