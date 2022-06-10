#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<locale.h>

float n1[13]={3,21,7,9.6,4064,1.5,4.8,1.776,7.502,0.906,50.20,21.73,35.28},
n2[10]={2,50,3.2,30,4.8,12.4,3,5,1.06,9.8}, 
res[13];

main(void){
	setlocale(LC_ALL, "Portuguese");
	
	res[0]=n1[0]/n2[0];
	res[1]=n1[1]/n2[0];
	res[2]=n1[2]/n2[1];
	res[3]=n1[3]/n2[2];
	res[4]=n1[4]/n2[2];
	res[5]=n1[5]/n2[0];
	res[6]=n1[6]/n2[3];
	res[7]=n1[7]/n2[4];
	res[8]=n1[8]/n2[5];
	res[9]=n1[9]/n2[6];
	res[10]=n1[10]/n2[7];
	res[11]=n1[11]/n2[8];
	res[12]=n1[12]/n2[9];
	
	printf("a) 3:2 = %.3f \n", res[0]);
	printf("b) 21:2 = %.3f \n", res[1]);
	printf("c) 7:50 = %.3f \n", res[2]);
	printf("d) 9.6:3.2 = %.3f \n", res[3]);
	printf("e) 4064:3.2 = %.3f \n", res[4]);
	printf("f) 1.5:2 = %.3f \n", res[5]);
	printf("g) 4.8:30 = %.3f \n", res[6]);
	printf("h) 1.776:4.8 = %.3f \n", res[7]);
	printf("i) 7.502:12.4 = %.3f \n", res[8]);
	printf("j) 0.906:3 = %.3f \n", res[9]);
	printf("k) 50.20:5 = %.3f \n", res[10]);
	printf("l) 21.73:1.06 = %.3f \n", res[11]);
	printf("m) 35.28:9.8 = %.3f ", res[12]);
	
	return 0;
}
