#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int vettore[100],n,scelta;
void caricamento_vettore(int vettore[],int n);
void stampa_vettore(int vettore[],int n);
void ordinamento_vettore(int vettore[],int n);
void ordinamento_vettore1(int vettore[],int n);
main(){
	system("color 1F");
	srand(time(NULL));
	cout<<endl;
	cout<<"Quanti elementi vuoi che abbia il tuo vettore? ";
	cin>>n;
	caricamento_vettore(vettore,n);
	stampa_vettore(vettore,n);
	cout<<"***************************************************** "<<endl;
	do{
		cout<<"1. Ordinamento Bubble Sort (crescente) "<<endl;
		cout<<"2. Ordinamento Bubble Sort (decrescente) "<<endl;
		cout<<"Scelta: ";
		cin>>scelta;
		if(scelta<1 or scelta>2){
			cout<<"Error"<<endl;
		}
	}
	while(scelta<1 or scelta>2);
	if(scelta==1){	
		ordinamento_vettore(vettore,n);
		cout<<endl;
		cout<<"Ora il tuo vettore e': "<<endl;
		stampa_vettore(vettore,n);
	}
	if(scelta==2){
		ordinamento_vettore1(vettore,n);
		cout<<endl;
		cout<<"Ora il tuo vettore e': "<<endl;
		stampa_vettore(vettore,n);
	}
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
void ordinamento_vettore(int vettore[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(vettore[i]<vettore[j]){
				int tmp;
				tmp=vettore[i];
				vettore[i]=vettore[j];
				vettore[j]=tmp;
			}
		}
	}
}
void ordinamento_vettore1(int vettore[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(vettore[i]>vettore[j]){
				int tmp;
				tmp=vettore[i];
				vettore[i]=vettore[j];
				vettore[j]=tmp;
			}
		}
	}	
}
