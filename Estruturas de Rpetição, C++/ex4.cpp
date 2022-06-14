#include<iostream>
#include<locale.h>
#include<conio.h>
using namespace std;

float n[10], soma;

int main(){
	setlocale(LC_ALL,"Portuguese");
	for(int i=0;i<10;i++){
		cout<<"digite o "<<i+1<<"º número: ";cin>>n[i];
	}
	soma=n[0]+n[1]+n[2]+n[3]+n[4]+n[5]+n[6]+n[7]+n[8]+n[9];
	
	cout<<"a soma desses números é igual a : "<<soma<<endl;
	
	system("pause");
	return 0;
}
