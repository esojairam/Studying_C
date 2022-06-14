#include<iostream>
#include<locale.h>
#include<conio.h>

using namespace std;

int r, par, numb;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	cout<<"digite um número: ";cin>>numb;
	cout<<endl;
	
	par=numb%2;
	
	if(par==0){
		numb *= 5;
		cout<<"o valor da conta nºx5x5x5= "<<numb<<endl;
		r++;
	}else{
		cout<<"digite um valor par"<<endl;
	}
	
	system("pause");
	return 0;
}
