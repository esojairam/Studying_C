#include<iostream>
#include<locale.h>
#include<conio.h>
using namespace std;
int n[15], par;

int main(){
	setlocale(LC_ALL,"Portuguese");
	for(int i=0;i<15;i++){
		cout<<"digite o "<<i+1<<"º número: ";cin>>n[i];
	}
	for(int r=0;r<15;r++){
		par=n[r]%2;
		if(par==0){
			cout<<n[r]<<" é um número par."<<endl;
		}
	}
	system("pause");
	return 0;
}
