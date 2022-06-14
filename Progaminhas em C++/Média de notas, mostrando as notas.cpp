#include<iostream>
#include<conio.h>
#include<locale>
using namespace std;

int n;
float resp,media;

int main(){
	setlocale(LC_ALL,"Portuguese");
	cout<<"Informe o número de notas a ser calculado a média: "<<endl;cin>>n;
	float* div =new float[n];
	int i;
	for(i=0;i<n;i++){
		cout<<"Informe a "<<i+1<<"º nota: "<<endl;cin>>div[i];
	}
	for(i=0;i<n;i++){
		cout<<"A "<<i+1<<"º nota foi: "<<div[i]<<endl;
	}
	for(i=0;i<n;i++){
		media+=div[i];
	}
	resp=media/n;
	cout<<"A média foi: "<<resp<<endl;
	return 0;
}
