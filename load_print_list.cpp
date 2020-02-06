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
main(){
	srand(time(NULL));
	system("color 1F");
	caricamento_lista(il);
	cout<<"La tua lista: "<<endl;
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
		cout<<tmp->info<<" | "<<endl;
		cout<<"----"<<endl;
		tmp=tmp->next;
	}
}
