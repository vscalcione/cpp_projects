#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;
struct lista{
	int info;
	lista*next;
};
lista*il=NULL;
int risposta;
void caricamento_lista(lista*&il);
void stampa_lista(lista*il);
main(){
	system("color 1F");
	srand(time(NULL));
	do{
		system("cls");
		caricamento_lista(il);
		cout<<"La tua lista "<<endl;
		stampa_lista(il);
		cout<<endl;
		cout<<"L'utente vuole eseguire un'altra operazione? 1=si, 0=no ";
		cin>>risposta;
		if(risposta==0 or risposta!=1){
			break;
		}
	}
	while(risposta==1);
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

