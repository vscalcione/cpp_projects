#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
struct lista{
	int info;
	lista*next;
};
lista*il=NULL;
int n,elemento_ricerca,ricerca;
void caricamento_lista(lista*&il,int n);
void stampa_lista(lista*il,int n);
int ricerca_lista(lista*il,int elemento_ricerca);
main(){
	system ("color 3F");
	srand(time(NULL));
	cout<<endl;
	cout<<"Quanti elementi vuoi che abbia la tua lista? ";
	cin>>n;
	caricamento_lista(il,n);
	cout<<"La tua lista "<<endl;
	stampa_lista(il,n);
	cout<<"Inserire elemento da ricercare: ";
	cin>>elemento_ricerca;
	ricerca=ricerca_lista(il,elemento_ricerca);
	if(ricerca==1 or ricerca>1){
		cout<<"TROVATO "<<endl;
	}
	else{
		cout<<"NON TROVATO "<<endl;
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
int ricerca_lista(lista*il,int elemento_ricerca){
	int i=0;
	lista*tmp=il;
	while (tmp!=NULL){
		if(tmp->info==elemento_ricerca){
			i++;
			return i;
		}
		tmp=tmp->next;
		
	}
	return -1;
}

