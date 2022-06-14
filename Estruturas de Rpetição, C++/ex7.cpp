#include<iostream>
#include<locale.h>
#include<conio.h>
#include<string>
using namespace std;

float n1[2],mp[2],n2[2],n3[2];
string nome[2];

int main(){
	setlocale(LC_ALL,"Portuguese");
	for(int i=0;i<2;i++){
		cout<<"digite o nome do aluno: ";cin>>nome[i];
		cout<<"digite a 1º nota do aluno: ";cin>>n1[i];
		cout<<"digite a 2º nota do aluno: ";cin>>n2[i];
		cout<<"digite a 3º nota do aluno: ";cin>>n3[i];
	}
	
	for(int r=0;r<2;r++){
		mp[r]=(n1[r]*2+n2[r]*4+n3[r]*3)/10;
		cout<<nome[r]<<"tem a media ponderada de "<<mp[r]<<endl;
	}
	system("pause");
	return 0;
}
