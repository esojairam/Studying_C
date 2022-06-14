#include<iostream>
#include<locale.h>
#include<math.h>
using namespace std;

float nota[3]={},mediat,media;


int main(){
	setlocale(LC_ALL,"Portuguese");	
	for(int i=0;i<3;i++){
		cout<<"Informe a "<<i+1<<"º nota do aluno"<<endl;cin>>nota[i];
	}
	cout<<"Informe a media geral da turma"<<endl;cin>>mediat;
	media=(nota[0]+nota[1]+nota[2])/3;
	
	if(media==mediat){
		cout<<"A media do aluno foi "<<media<<"\nEsse aluno esta dentro da media geral da turma"<<endl;
	}else if(media<mediat){
		cout<<"A media do aluno foi "<<media<<"\nEsse aluno esta abaixo da media geral da turma"<<endl;
	}else{
		cout<<"A media do aluno foi "<<media<<"\nEsse aluno esta acima da media geral da turma"<<endl;
	}
	return 0;
}
