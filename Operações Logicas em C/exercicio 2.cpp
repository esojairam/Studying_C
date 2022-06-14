#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>

float n[10];

main(void){
	setlocale(LC_ALL,"Portuguese");
	
	n[0]=85.3-23.1;
	n[1]=97.42-31.3;
	n[2]=250.03-117.4;
	n[3]=431.2-148.13;
	n[4]=400-23.72;
	n[5]=1050.37-673.89;
	n[6]=3-1.07;
	n[7]=98-39.73;
	n[8]=43.87-17;
	n[9]=193-15.03;
	
	printf("a) 85.3-23.1 = %.3f \n", n[0]);
	printf("b) 97.42-31.3 = %.3f \n", n[1]);
	printf("c) 250.03-117.4 = %.3f \n", n[2]);
	printf("d) 431.2-148.13 = %.3f \n", n[3]);
	printf("e) 400-23.72 = %.3f \n", n[4]);
	printf("f) 1050.37-673.89 = %.3f \n", n[5]);
	printf("g) 3-1.07 = %.3f \n", n[6]);
	printf("h) 98-39.73 = %.3f \n", n[7]);
	printf("i) 43.87-17 = %.3f \n", n[8]);
	printf("j) 193-15.03 = %.3f ", n[9]);
	
	return 0;	
}
