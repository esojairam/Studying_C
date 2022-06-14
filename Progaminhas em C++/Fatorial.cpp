#include<iostream>
#include<locale.h>
#include<math.h>
using namespace std;
int n, fato;

int fat(int x){
	int fato=1;
	for(int i=1; i<=x;i++){
		fato*=i;
	}
	return fato;
}

int main(){
	setlocale(LC_ALL,"Portuguese");
	cout<<"Digite o número a ser fatoriado"<<endl;cin>>n;
	int v=fat(n);
	cout<<"O valor de "<<n<<" fatorial é "<<v<<endl;
	return 0;
}
