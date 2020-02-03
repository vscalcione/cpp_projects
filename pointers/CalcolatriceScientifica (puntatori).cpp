#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int scelta,risposta;
double numero1,numero2,sum,diff,prod,quoz;
int numero,base,esponente,fatt,pot,quad,cub;
double somma (double *numero1, double *numero2);
double differenza (double *numero1, double *numero2);
double prodotto (double *numero1, double *numero2);
double quoziente (double *numero1, double *numero2);
int fattoriale (int numero);
int potenza (int base, int esponente);
int quadrato_n (int *numero);
int cubo_n (int *numero);
main(){
	system("color 1F");
	do{
		do{
			system("cls");
			cout<<"*********************************************************"<<endl;
			cout<<"Menu' Calcolatrice Scientifica "<<endl;
			cout<<"1. Somma "<<endl;
			cout<<"2. Differenza "<<endl;
			cout<<"3. Prodotto "<<endl;
			cout<<"4. Quoziente "<<endl;
			cout<<"5. Fattoriale di un numero "<<endl;
			cout<<"6. Potenza "<<endl;
			cout<<"7. Quadrato di un numero "<<endl;
			cout<<"8. Cubo di un numero "<<endl;
			cout<<"***********************************************************"<<endl;
			cout<<"Scelta: ";
			cin>>scelta;
			if(scelta<1 or scelta>8){
				cout<<"Error";
			}
		}
		while(scelta<1 or scelta>8);
		if(scelta==1){
			system("cls");
			cout<<"Somma "<<endl;
			cout<<"Inserire primo valore: ";
			cin>>numero1;
			cout<<"Inserire secondo valore: ";
			cin>>numero2;
			sum=somma(&numero1,&numero2);
			cout<<"Somma: "<<sum<<endl;
		}
		if(scelta==2){
			system("cls");
			cout<<"Differenza "<<endl;
			cout<<"Inserire primo valore: ";
			cin>>numero1;
			cout<<"Inserire secondo valore: ";
			cin>>numero2;
			diff=differenza(&numero1,&numero2);
			cout<<"Differenza: "<<diff<<endl;			
		}
		if(scelta==3){
			system("cls");
			cout<<"Prodotto "<<endl;
			cout<<"Inserire primo valore: ";
			cin>>numero1;
			cout<<"Inserire secondo valore: ";
			cin>>numero2;
			prod=prodotto(&numero1,&numero2);
			cout<<"Prodotto: "<<prod<<endl;			
		}
		if(scelta==4){
			system("cls");
			cout<<"Quoziente "<<endl;
			cout<<"Inserire primo valore: ";
			cin>>numero1;
			cout<<"Inserire secondo valore: ";
			cin>>numero2;
			quoz=quoziente(&numero1,&numero2);
			cout<<"Quoziente: "<<quoz<<endl;			
		}
		if(scelta==5){
			system("cls");
			cout<<"Fattoriale "<<endl;
			cout<<"Inserire numero: ";
			cin>>numero;
			fatt=fattoriale(numero);
			cout<<"Fattoriale: "<<fatt<<endl;
		}
		if(scelta==6){
			system("cls");
			cout<<"Potenza "<<endl;
			cout<<"Inserire base: ";
			cin>>base;
			cout<<"Inserire esponente: ";
			cin>>esponente;
			pot=potenza(base,esponente);
			cout<<"Potenza di "<<base<<" elevata alla "<<esponente<<": "<<pot<<endl;
		}
		if(scelta==7){
			system("cls");
			cout<<"Quadrato "<<endl;
			cout<<"Inserire numero: ";
			cin>>numero;
			quad=quadrato_n(&numero);
			cout<<"Quadrato: "<<quad<<endl;
		}
		if(scelta==8){
			system("cls");
			cout<<"Cubo "<<endl;
			cout<<"Inserire numero: ";
			cin>>numero;
			cub=cubo_n(&numero);
			cout<<"Cubo: "<<cub<<endl;
		}
		cout<<"L'utente vuole eseguire un'altra operazione? 1=si, 0=no ";
		cin>>risposta;
		if(risposta!=1 or risposta==0){
			break;
		}
	}
	while(risposta==1);
}
double somma (double *numero1, double *numero2){
	double x;
	x=*numero1 + *numero2;
	return x;	
}
double differenza (double *numero1, double *numero2){
	double y;
	y=*numero1 - *numero2;
	return y;
}
double prodotto (double *numero1, double *numero2){
	double k;
	k=*numero1 * *numero2;
	return k;
}
double quoziente (double *numero1, double *numero2){
	double z;
	if(*numero1==0 or *numero2==0){
		return 0;
	}
	else{
		z=*numero1 / *numero2;
		return z;
	}
}
int fattoriale (int numero){
	int j;
	if(numero==0){
		return 1;
	}
	else{
		j=numero * fattoriale(numero-1);
		return j;
	}
}
int potenza (int base, int esponente){
	int q;
	if(esponente<=0){
		return 1;
	}
	else{
		q=base * potenza(base,esponente-1);
		return q;
	}
}
int quadrato_n (int *numero){
	int w;
	w=*numero * *numero;
	return w;
}
int cubo_n (int *numero){
	int m;
	m=*numero * *numero * *numero;
	return m;
}
