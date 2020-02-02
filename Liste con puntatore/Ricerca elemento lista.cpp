#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
struct lista{
	int info;
	lista*next;
};
lista*il=NULL;
int n,elemento_ricerca;
void caricamento_lista(lista*&il,int n);
void stampa_lista(lista*il,int n);
void ricerca(lista*il,int elemento_ricerca);
main(){
	system("color 3F");
	srand(time(NULL));
	cout<<"Quanti elementi vuoi che abbia la tua lista? ";
	cin>>n;
	caricamento_lista(il,n);
	cout<<"La tua lista: "<<endl;
	stampa_lista(il,n);
	cout<<"Inserire elemento da ricercare: ";
	cin>>elemento_ricerca;
	ricerca(il,elemento_ricerca);
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
void ricerca(lista*il,int elemento_ricerca){
	lista*tmp;
	tmp=il;
	while(tmp!=NULL){
		if(tmp->info==elemento_ricerca){
			cout<<"TROVATO "<<endl;
			tmp=tmp->next;
		}
	}
}
