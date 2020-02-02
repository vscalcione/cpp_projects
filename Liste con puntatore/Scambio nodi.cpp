#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
struct lista{
	int info;
	lista*next;
};
lista*il=NULL;
int n,*punt,*punt_1;
void caricamento_lista(lista*&il);
void stampa_lista(lista*il);
void scambia_nodi(lista*il);
main(){
	system("color 3F");
	caricamento_lista(il);
	cout<<"Prima la tua lista era: "<<endl;
	stampa_lista(il);
	scambia_nodi(il);
	cout<<endl;
	cout<<"Ora la tua lista \212: "<<endl;
	stampa_lista(il);
}
void caricamento_lista(lista*&il){
	for(int i=0;i<10;i++){
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
void scambia_nodi(lista*il)
{
	int temp,pos1,pos2;
	cout<<"Inserire posizione1: ";
	cin>>pos1;
	cout<<"Inserire posizione2: ";
	cin>>pos2;
	for(int i=0;i<10;i++){
		if(i==pos1){
			punt=&il->info;
		}
		if(i==pos2){
			punt_1=&il->info;
		}
		il=il->next;
	}
	temp=*punt;
	*punt=*punt_1;
	*punt_1=temp;
}
