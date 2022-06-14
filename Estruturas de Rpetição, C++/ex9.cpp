#include<iostream>
#include<locale.h>
#include<conio.h>
#include<string>
using namespace std;

float saldo=0.00,sacar,deposito;
string nome;
char acao;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	cout<<"Digite o seu nome: ";cin>>nome;
	cout<<endl;
	
	do{
		cout<<"Sr(a)."<<nome<<" selecione uma opção abaixo:"<<endl;
		cout<<"\na) Consultar Saldo"<<endl;
		cout<<"b) Sacar"<<endl;
		cout<<"c) Depositar"<<endl;
		cout<<"d) Sair"<<endl;
		cin>>acao;
		
		if(acao=='a'){
			cout<<"\nSr(a)."<<nome<<" seu saldo é de: "<<saldo<<endl;
			cout<<endl;
		}else if(acao=='b'){
			cout<<"\nSr(a)."<<nome<<" lembre-se que se o valor sacado for maior do que o saldo atual a operação será cancelada!!"<<endl;
			cout<<"Sabendo disso digite o valor a ser sacado (ex: 51.35): ";cin>>sacar;
			saldo-= sacar;
			if(saldo<0.00){
				cout<<"\nSr(a)."<<nome<<" a operação foi cancelada pois o saldo ficaria negativo!!";
				cout<<endl;
				cout<<"Sr(a)."<<nome<<" obrigado por usar nosso programa tenha um bom dia!"<<endl;
				cout<<endl;
			}
			cout<<endl;
		}else if(acao=='c'){
			cout<<"\nSr(a)."<<nome<<" digite o valor a ser depositado (ex: 32.26): ";cin>>deposito;
			cout<<endl;
			saldo+=deposito;
			cout<<endl;
		}else{
			cout<<"\nSr(a)."<<nome<<" obrigado por usar nosso programa tenha um bom dia!\n"<<endl;
		}
	}while(acao=='a' || acao=='b' || acao=='c');
	
	system("pause");
	return 0;
}
