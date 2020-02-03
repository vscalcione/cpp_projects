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
int n,somma,scelta;
float media;
void caricamento_lista(lista*&il,int n);
void stampa_lista(lista*il,int n);
int somma_lista(lista*il,int n);
float media_lista(lista*il,int somma);
main(){
	system("color 3F");
	srand(time(NULL));
	cout<<"Somma e media elementi lista "<<endl;
	cout<<"Quanti elementi vuoi che abbia la tua lista? ";
	cin>>n;
	caricamento_lista(il,n);
	cout<<"La tua lista: "<<endl;
	stampa_lista(il,n);
	cout<<"-------------------------"<<endl;
	somma=somma_lista(il,n);
	media=media_lista(il,somma);
	cout<<"Somma: "<<somma<<endl;
	cout<<"Media: "<<media<<endl;
	cout<<"-------------------------"<<endl;
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
int somma_lista(lista*il,int n){
	 int somma=0;
	 lista*tmp=il;
	 while(tmp!=NULL){
	 	somma=somma+tmp->info;
	 	tmp=tmp->next;
	 }
	 return somma;
}
float media_lista(lista*il,int somma){
	float m;
	m=(float)somma/n;
	return m;
}
