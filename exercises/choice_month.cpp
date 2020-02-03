#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int numero,risposta;
main(){
	system("color 1A");
	do{
		system("cls");
		cout<<endl;
		cout<<"Inserisci il numero del mese: ";
		cin>>numero;
		if(numero==1){
			cout<<"Gennaio "<<endl;
		}
		if(numero==2){
			cout<<"Febbraio "<<endl;
		}
		if (numero==3){
			cout<<"Marzo "<<endl;
		}
		if (numero==4){
			cout<<"Aprile "<<endl;
		}
		if (numero==5){
			cout<<"Maggio "<<endl;
		}
		if (numero==6){
			cout<<"Giugno "<<endl;
		}
		if (numero==7){
			cout<<"Luglio "<<endl;
		}
		if (numero==8){
			cout<<"Agosto "<<endl;
		}
		if (numero==9){
			cout<<"Settembre "<<endl;
		}		
		if (numero==10){
			cout<<"Ottobre "<<endl;
		}
		if (numero==11){
			cout<<"Novembre "<<endl;
		}
		if(numero==12){
			cout<<"Dicembre "<<endl;
		}
		cout<<"L'utente vuole eseguire un'altra operazione? 1=si, 0=no ";
		cin>>risposta;
		if(risposta==0 or risposta!=1){
			break;
		}
	}
	while(risposta==1);
}

