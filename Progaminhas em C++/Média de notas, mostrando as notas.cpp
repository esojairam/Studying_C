#include<iostream>
#include<conio.h>
#include<locale>
using namespace std;

int n;
float resp,media;

int main(){
	setlocale(LC_ALL,"Portuguese");
	cout<<"Informe o n�mero de notas a ser calculado a m�dia: "<<endl;cin>>n;
	float* div =new float[n];
	int i;
	for(i=0;i<n;i++){
		cout<<"Informe a "<<i+1<<"� nota: "<<endl;cin>>div[i];
	}
	for(i=0;i<n;i++){
		cout<<"A "<<i+1<<"� nota foi: "<<div[i]<<endl;
	}
	for(i=0;i<n;i++){
		media+=div[i];
	}
	resp=media/n;
	cout<<"A m�dia foi: "<<resp<<endl;
	return 0;
}
