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
void caricamento_lista(lista*&il);
void stampa_lista(lista*il);
void scambio_lista (lista*il);
main(){
	system("color 3F");
	srand(time(NULL));
	cout<<"Scambio primo ed ultimo nodo lista "<<endl;
	caricamento_lista(il);
	cout<<"La tua lista "<<endl;
	stampa_lista(il);
	cout<<endl;
	scambio_lista(il);
	cout<<"Ora la tua lista \212: "<<endl;
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

void scambio_lista (lista*il) 
{
	int a;
	lista*ilx=il;
	ilx=ilx->next;
	lista*tmp=ilx;
	ilx=ilx->next;
	a=tmp->info;
	tmp->info=ilx->info;
	ilx->info=a;
}
