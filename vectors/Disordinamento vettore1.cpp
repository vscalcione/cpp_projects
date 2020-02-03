#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
int vettore[100],n;
void caricamento_vettore(int vettore[],int n);
void disordinamento_vettore(int vettore[],int n);
void stampa_vettore(int vettore[],int n);;
main(){
	system("color 1F");
	srand(time(NULL));
	cout<<endl<<endl;
	cout<<"Quanti elementi vuoi che abbia il tuo vettore? ";
	cin>>n;
	caricamento_vettore(vettore,n);
	stampa_vettore(vettore,n);
	disordinamento_vettore(vettore,n);
	cout<<"Ora il tuo vettore e': "<<endl;
	stampa_vettore(vettore,n);
}
void caricamento_vettore(int vettore[],int n){
	for(int i=0;i<n;i++){
		vettore[i]=1+rand()%100;
	}
}
void disordinamento_vettore(int vettore[],int n){
	int p=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			p=rand()%2;
			if(p==1){
				int tmp;
				tmp=vettore[j+1];
				vettore[j+1]=vettore[j];
				vettore[j]=tmp;
			}
		}
	}
}
void stampa_vettore(int vettore[],int n){
	for(int i=0;i<n;i++){
		cout<<vettore[i]<<endl;
	}
}
