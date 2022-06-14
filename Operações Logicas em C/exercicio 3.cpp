#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>

float n[10];

main(void){
	setlocale(LC_ALL, "Portuguese");
	
	n[0]=200*0.3;
	n[1]=130*1.27;
	n[2]=93.4*5;
	n[3]=208.06*3.15;
	n[4]=0.3*0.7;
	n[5]=112.21*3.12;
	n[6]=12.1*4.3;
	n[7]=243.5*2.53;
	n[8]=357*0.5;
	n[9]=793*0.07;
	
	printf("a) 200 x 0.3 = %.3f \n", n[0]);
	printf("b) 130 x 1.27 = %.3f \n", n[1]);
	printf("c) 93.4 x 5 = %.3f \n", n[2]);
	printf("d) 208.06 x 3.15 = %.3f \n", n[3]);
	printf("e) 0.3 x 0.7 = %.3f \n", n[4]);
	printf("f) 112.21 x 3.12 = %.3f \n", n[5]);
	printf("g) 12.1 x 4.3 = %.3f \n", n[6]);
	printf("h) 243.5 x 2.53 = %.3f \n", n[7]);
	printf("i) 357 x 0.5 = %.3f \n", n[8]);
	printf("j) 793 x 0.07 = %.3f \n", n[9]);
	
	return 0;
}
