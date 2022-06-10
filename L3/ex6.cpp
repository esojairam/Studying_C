#include<iostream>
#include<locale.h>
#include<conio.h>
#include<string>
using namespace std;

string nome[10]={};
int idade[10]={};

int main(){
	setlocale(LC_ALL,"Portuguese");
	for(int i=0;i<10;i++){
		cout<<"digite o nome e a idade da "<<i+1<<"º pessoa: ";cin>>nome[i]>>idade[i];
	}
	for(int r=0;r<10;r++){
		if(idade[r]>=18){
			cout<<nome[r]<<" tem "<<idade[r]<<" anos."<<endl;
		}
	}
	
	system("pause");
	return 0;
}
