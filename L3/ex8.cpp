#include<iostream>
#include<locale.h>
#include<conio.h>
#include<string>
using namespace std;

string nome;
int resp;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	do{
		cout<<"\nDigite o nome da pessoa: ";cin>>nome;
		cout<<"\nVocê cadastrou "<<nome<<"\n"<<endl;
		cout<<"Digite 1 para continuar e 0 para sair\n";cin>>resp;
	}while(resp==1);
	
	system("pause");
	return 0;
}
