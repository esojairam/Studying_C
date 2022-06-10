#include<iostream>
#include<locale.h>
#include<conio.h>
using namespace std;

float n[4],media;
int r;

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	for(int i=0; i<4;i++){
		cout<<"digite o "<<i+1<<"º número: ";cin>>n[i];
	}
	
	media=(n[0]+n[1]+n[2]+n[3])/4;
	
	while(r<5){
		cout<<"a media desses números é: "<<media<<endl;
		r++;
	}
	
	cout<<endl;
	system("pause");
	return 0;
}
