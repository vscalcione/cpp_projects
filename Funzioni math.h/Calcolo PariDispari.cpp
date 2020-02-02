#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int numero;
void Calcolo_pariDispari (int numero);
int risposta;
main(){
	system("color 1F");
	do{
		system("cls");
		cout<<"Inserire numero: ";
		cin>>numero;
		Calcolo_pariDispari(numero);
		cout<<"L'utente vuole eseguire un'altra operazione? 1=si, 0=no ";
		cin>>risposta;
		if(risposta==0 or risposta!=1){
			break;
		}
	}
	while(risposta==1);
}
void Calcolo_pariDispari(int numero){
	if(numero%2==0){
		cout<<"Il numero "<<numero<<" e' pari "<<endl;
	}
	else{
		cout<<"Il numero "<<numero<<" e' dispari "<<endl;
	}
}
