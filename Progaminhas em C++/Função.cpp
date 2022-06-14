#include<iostream>
#include<locale.h>
#include<math.h>
using namespace std;
float n;

float fun(float x){
	float func=((x*x)-(3*x)+5);
	return func;
}


int main(){
	setlocale(LC_ALL,"Portuguese");
	cout<<"A função é x^2-3x+5"<<endl;
	cout<<"Informe o valor de de X: "<<endl;cin>>n;
	float v=fun(n);
	cout<<"O valor da função é "<<v<<endl;
	return 0;
}
