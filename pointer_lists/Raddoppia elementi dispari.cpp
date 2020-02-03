#include <iostream>
#include <cstdlib>
#include <time.h>
using namespace std;
struct lista{
	int info;
	lista*next;
};
lista*il=NULL;
int n;
void caricamento_lista(lista*&il,int n);
void raddoppia_dispari(lista*il,int n);
void stampa_lista(lista*il,int n);
main(){
	system("color 1F");
	srand(time(NULL));
	cout<<"Quanti elementi vuoi che abbia la tua lista? ";
	cin>>n;
	caricamento_lista(il,n);
	cout<<"La tua lista: "<<endl;
	stampa_lista(il,n);
	cout<<endl<<endl;
	raddoppia_dispari(il,n);
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
void raddoppia_dispari(lista*il,int n){
	for(int i=0;i<n;i++){
		if(il->info%2!=0){
			il->info=il->info*2;
		}
		il=il->next;
	}
}
void stampa_lista(lista*il,int n){
	lista*tmp=il;
	while(tmp!=NULL){
		cout<<tmp->info<<endl;
		tmp=tmp->next;
	}
}
