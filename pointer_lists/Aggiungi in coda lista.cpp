#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
struct lista{
	int info;
	lista*next;
};
lista*il=NULL;
int elemento,n;
void caricamento_lista(lista*&il,int n);
void stampa_lista(lista*il,int n);
void aggiungi_coda(lista*il,int elemento);
main(){
	system("color 3F");
	srand(time(NULL));
	cout<<"Aggiungi in coda "<<endl;
	cout<<"Quanti elementi vuoi che abbia la tua lista? ";
	cin>>n;
	caricamento_lista(il,n);
	cout<<"La tua lista : "<<endl;
	stampa_lista(il,n);
	cout<<"Inserire elemento da aggiungere in coda alla tua lista: ";
	cin>>elemento;
	aggiungi_coda(il,elemento);
	cout<<"Ora la tua lista \212: "<<endl;
	stampa_lista(il,n);
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
void aggiungi_coda(lista*il,int elemento){
	lista*tmp=il;
	while(il!=NULL){
		tmp=il;
		il=il->next;
	}
	lista*nuovo=new lista;
	nuovo->info=elemento;
	nuovo->next=NULL;
	tmp->next=nuovo;
}
