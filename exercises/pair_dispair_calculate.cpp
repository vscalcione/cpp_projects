#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int value;
void Calcolo_pariDispari (int numero);
int response;
main(){
	system("color 1F");
	do{
		system("cls");
		cout<<"Inserire value: ";
		cin >> value;
		Calcolo_pariDispari(value);
		cout<<"L'utente vuole eseguire un'altra operazione? 1=si, 0=no ";
		cin >> response;
		if(response == 0 or response != 1){
			break;
		}
	}
	while(response == 1);
}
void Calcolo_pariDispari(int numero){
	if(numero%2==0){
		cout<<"Il value "<<numero<<" e' pari "<<endl;
	}
	else{
		cout<<"Il value "<<numero<<" e' dispari "<<endl;
	}
}
