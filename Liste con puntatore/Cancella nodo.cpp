#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
struct lista{
	int info;
	lista*next;
};
lista*il=NULL;
void caricamento_lista(lista*&il);
void stampa_lista(lista*il);
void cancella_nodo(lista*il,int numero);
int numero;
main(){
	srand(time(NULL));
	system("color 1F");
	caricamento_lista(il);
	cout<<"Prima la tua lista era: "<<endl;
	stampa_lista(il);
	cout<<"Inserire numero: ";
	cin>>numero;
	cancella_nodo(il,numero);
	cout<<"Ora la tua lista e': "<<endl;
	stampa_lista(il);
}
void caricamento_lista(lista*&il){
	for(int i=0;i<20;i++){
		lista*nuovo=new lista;
		nuovo->info=1+rand()%100;
		nuovo->next=il;
		il=nuovo;
	}
}
void stampa_lista(lista*il){
	lista*tmp=il;
	while(tmp!=NULL){
		cout<<tmp->info<<endl;
		tmp=tmp->next;
	}
}
void cancella_nodo(lista*il,int numero){
	if(numero==0){
		lista*tmp=il;
		il=il->next;
		delete tmp;
	}
	else{
		lista*ilx=il;
		for(int i=0;i<numero-1;i++){
			ilx=ilx->next;
			lista*tmp=ilx->next;
			ilx->next=ilx->next->next;
			delete tmp;
		}	
	}
}
