#include<iostream>
#include<conio.h>
#include<locale>
using namespace std;

float base, resp;
bool n;
int exp;

int main(){
	setlocale(LC_ALL,"Portuguese");
	do{
		cout<<"Digite a base da potência: "<<endl;cin>>base;
		cout<<"Digite um expoente inteiro: "<<endl;cin>>exp;
		resp=1;
		for(int i=1;i<=exp;i++){
			resp*=base;
		}
		cout<<"O resultado da potência "<<base<<"^"<<exp<<" é igual a: "<<resp<<endl;
		cout<<"Digite 1 para fazer outra potência e 0 para sair"<<endl;cin>>n;
	}while (n==true);
	return 0;
}
