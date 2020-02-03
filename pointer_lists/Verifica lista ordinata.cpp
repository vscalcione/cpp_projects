#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
struct lista{
	int info;
	lista*next;
};
lista*il=NULL;
int x=0,n;
void caricamento_lista(lista*&il,int n);
void stampa_lista(lista*il,int n);
int verifica_ordine(lista*il,int n);
void ordinamento_lista(lista*il,int n);
main(){
	system("color 3F");
	cout<<"Quanti elementi vuoi che abbia la tua lista? ";
	cin>>n;
	caricamento_lista(il,n);
	x=verifica_ordine(il,n);
	cout<<"----------------------------------------------"<<endl;
	if(x==-1){
		cout<<"Prima la tua lista era: "<<endl;
		stampa_lista(il,n);
		cout<<"----------------------------------------------"<<endl;
		cout<<"LISTA NON ORDINATA "<<endl;
		ordinamento_lista(il,n);
		cout<<"Ora la tua lista \212: "<<endl;
		stampa_lista(il,n);
	}
	else{
		cout<<"LISTA ORDINATA "<<endl;
		stampa_lista(il,n);
	}
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
int verifica_ordine(lista*il,int n){
	int max=0;
	lista*tmp=il;
	max=tmp->info;
	for(int i=0;i<n;i++){
		while(tmp!=NULL){
			if(tmp->info>max){
				return -1;
			}
			tmp=tmp->next;
		}
		il=il->next;
		tmp=il;
		max=tmp->info;
		if(i==2){
			return 2;
		}
	}
}
void ordinamento_lista(lista*il,int n){
	int a,temp;
	lista*tmp=il;
	while(tmp!=NULL){
		while(il!=NULL){
			if(il->info < tmp->info){
				temp=il->info;
				il->info=tmp->info;
				tmp->info=temp;
			}
			il=il->next;
		}
		tmp=tmp->next;
		il=tmp;
	}
}

