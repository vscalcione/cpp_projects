#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;
int vettore[10],i,j,n;
void caricamento_vettore(int vettore[],int n);
void ordinamento_vettore(int vettore[],int n);
void stampa_vettore(int vettore[],int n);
main(){
	system("color 1F");
	srand(time(NULL));
	cout<<endl;
	cout<<"Quanti elementi vuoi che abbia il tuo vettore? ";
	cin>>n;
	caricamento_vettore(vettore,n);
	stampa_vettore(vettore,n);
	ordinamento_vettore(vettore,n);
	cout<<endl;
	cout<<"Vettore ordinato "<<endl;
	stampa_vettore(vettore,n);
}
void caricamento_vettore(int vettore[],int n){
	for(int i=0;i<n;i++){
		vettore[i]=1+rand()%100;
	}
}
void ordinamento_vettore(int vettore[],int n){
	int tmp;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(vettore[j]<vettore[i]){
				tmp=vettore[j];
				vettore[j]=vettore[i];
				vettore[i]=tmp;
			}
		}
	}
}
void stampa_vettore(int vettore[],int n){
	for(int i=0;i<n;i++){
		cout<<vettore[i]<<endl;
	} 
}
