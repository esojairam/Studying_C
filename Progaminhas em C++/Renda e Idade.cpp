#include<iostream>
#include<conio.h>
#include<locale>
using namespace std;

int idd; float rend;

int main(){
	setlocale(LC_ALL,"Portuguese");
	cout<<"Informe sua idade: "<<endl;cin>>idd;
	cout<<"Informe sua renda: "<<endl;cin>>rend;
	if(idd>=21 && rend<1200){
		cout<<"Voc� pode participar desse programa"<<endl;
	}else{
		cout<<"Voc� n�o pode participar desse programa"<<endl;
	}
	return 0;
}
