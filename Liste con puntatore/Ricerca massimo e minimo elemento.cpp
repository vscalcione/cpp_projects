#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
struct lista{
	int info;
	lista*next;
};
lista*il=NULL;
int n,massimo,minimo;
void caricamento_lista(lista*&il,int n);
void stampa_lista(lista*il,int n);
int ricerca_massimo(lista*il,int n);
int ricerca_minimo(lista*il,int n);
main(){
	system("color 1F");
	srand(time(NULL));
	cout<<"Quanti elementi vuoi che abbia la tua lista? ";
	cin>>n;
	caricamento_lista(il,n);
	cout<<"La tua lista: "<<endl;
	stampa_lista(il,n);
	cout<<endl<<endl;
	massimo=ricerca_massimo(il,n);
	minimo=ricerca_minimo(il,n);
	cout<<"Massimo elemento trovato: "<<massimo<<endl;
	cout<<"Minimo elemento trovato: "<<minimo<<endl;
}
void caricamento_lista(lista*&il,int n){
	for(int i=0;i<n;i++){
		lista*nuovo=new lista;
		nuovo->info=1+rand()%100;
		nuovo->next=il;
		il=nuovo;
	}
}
void stampa_lista(lista*il,int n){
	lista*tmp=il;
	while(tmp!=NULL){
		cout<<tmp->info<<endl;
		tmp=tmp->next;
	}
}
int ricerca_massimo(lista*il,int n){
	int max=0;
	lista*tmp=il;
	while(tmp!=NULL){
		if(tmp->info>max){
			max=tmp->info;
		}
		tmp=tmp->next;
	}
	tmp=il;
	return max;
}
int ricerca_minimo(lista*il,int n){
	int min=100;
	lista*tmp=il;
	while(tmp!=NULL){
		if(tmp->info<min){
			min=tmp->info;
		}
		tmp=tmp->next;
	}
	tmp=il;
	return min;
}
