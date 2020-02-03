#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;
int n,ric_massimo,ric_minimo,vettore[100];
void caricamento_vettore(int vettore[],int n);
void stampa_vettore(int vettore[],int n);
int ricerca_massimo(int vettore[],int n);
int ricerca_minimo(int vettore[],int n);
main(){
	system("color 1F");
	srand(time(NULL));
	cout<<endl<<endl;
	cout<<"Quanti elementi vuoi che abbia il tuo vettore? ";
	cin>>n;
	caricamento_vettore(vettore,n);
	stampa_vettore(vettore,n);
	ric_massimo=ricerca_massimo(vettore,n);
	ric_minimo=ricerca_minimo(vettore,n);
	cout<<endl;
	cout<<"Elemento massimo: "<<ric_massimo<<endl;
	cout<<"Elemento minimo: "<<ric_minimo<<endl;	
}
void caricamento_vettore(int vettore[],int n){
	for(int i=0;i<n;i++){
		vettore[i]=1+rand()%100;
	}
}
void stampa_vettore(int vettore[],int n){
	for(int i=0;i<n;i++){
		cout<<vettore[i]<<endl;
	}
}
int ricerca_massimo(int vettore[],int n){
	int max=0;
	for(int i=0;i<n;i++){
		if(vettore[i]>max){
			max=vettore[i];
		}
	}
	return max;
}
int ricerca_minimo(int vettore[],int n){
	int min=100;
	for(int i=0;i<n;i++){
		if(vettore[i]<min){
			min=vettore[i];
		}
	}
	return min;
}
