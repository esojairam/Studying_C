#include<iostream>
#include<locale.h>
#include<conio.h>
#include<string>
using namespace std;

int idade[10]={};
string nome[10]={}, sexo[10]={};


int main(){
	setlocale(LC_ALL,"Portuguese");
	for(int i=0;i<10;i++){
		cout<<"digite o "<<i+1<<"º nome: ";cin>>nome[i];
		cout<<"digite o sexo do "<<i+1<<"º nome: ";cin>>sexo[i];
		cout<<"digite a idade do "<<i+1<<"º nome: "; cin>>idade[i];
	}
	
	for(int r=0;r<10;r++){
		cout<<nome[r]<<" é do sexo "<<sexo[r]<<" e tem "<<idade[r]<<" anos."<<endl;
	}
	
	system("pause");
	return 0;
}
