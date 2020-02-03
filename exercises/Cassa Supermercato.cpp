#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
float v[10],j[10];
char nome_prodotto[10][20];
void set_NomeProdotto(char nome_prodotto[][20]);
void set_PrezzoProdotto(float v[]);
void ordinamento(float v[]);
void stampa (float v[]);
void sconto_prezzi (float v[]);
void set_NomePrezzoProdotto (float v[],char nome_prodotto[][20]);
main(){
	system("color 3F");
	cout<<"SIMULATORE FUNZIONAMENTO CASSA SUPERMERCATO "<<endl<<endl;
	set_NomePrezzoProdotto(v,nome_prodotto);
	system("cls");
	ordinamento(v);
	stampa(v);
	sconto_prezzi(v);
}
void set_NomePrezzoProdotto (float v[],char nome_prodotto[][20]){
	for(int i=0;i<10;i++){
		cout<<"Nome del "<<i+1<<" prodotto: ";
		cin>>nome_prodotto[i];
		cout<<"Prezzo del "<<i+1<<" prodotto: ";
		cin>>v[i];
		cout<<"------------------------------------"<<endl;
	}
}
void ordinamento(float v[]){
	float temp;
	for(int i=0;i<9;i++){
		for(int j=i+1;j<10;j++){
			if(v[i]>v[j]){
				temp=v[i];
				v[i]=v[j];
				v[j]=temp;
			}
		}
	}
}
void stampa (float vettore[]){
	cout<<"prezzi ordinati:"<<endl;
	for(int i=0;i<10;i++){
		cout<<i+1<<") "<<v[i]<<"   ";
	}
}
void sconto_prezzi (float vettore[]){
	cout<<endl;
    cout<<"Prezzi scontati: "<<endl;
	for(int i=0;i<10;i++){
		j[i]=(vettore[i]/100)*20;
		cout<<"Il prezzo scontato del "<<i+1<<" prodotto e': "<<v[i]-j[i]<<endl;
	}
}

