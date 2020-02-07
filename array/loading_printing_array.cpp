/* Si crei il codice di un progetto.cpp in cui, una volta caricato un vettore di n elementi interi, si stampi il vettore stesso attraverso le apposite funzioni di 
caricamento e stampa 
*/
#include <iostream> //libreria che permette l'utilizzo dei comandi di input ed output ("cin" e "cout")
#include <cstdlib>
#include <time.h> //libreria che permette l'utilizzo dei comandi per generare valori random("srand" e "rand")
using namespace std;
int vettore[100],n,risposta; //dichiarazione vettore e variabili necessarie
void caricamento_vettore(int vettore[], int n); //dichiarazione funzione caricamento vettore di n elementi interi
void stampa_vettore(int vettore[], int n); //dichiarazione funzione stampa vettore di n elementi interi
main(){
	system("color 1F");
	srand(time(NULL)); 
	do{ //ciclo do while che ci permette di ripetere l'operazione di caricamento e stampa di un vettore fin quando il valore inserito sarà 1
		system ("cls");
		cout<<endl;
		cout<<"Quanti elementi vuoi che abbia il tuo vettore? ";
		cin>>n; //inserimento della quantità di elementi che il nostro vettore dovrà avere
		caricamento_vettore(vettore,n); //chiamata di funzione caricamento vettore
		stampa_vettore(vettore,n); //chiamata di funzione stampa vettore
		cout<<"L'utente vuole eseguire un'altra operazione? 1=si, 0=no ";
		cin>>risposta; //inserimento di un valore intero che determina il ripetersi dell'istruzione di caricamento e stampa vettore
		if(risposta==0 or risposta!=1){
			break; //nel caso in cui il valore inserito sia uguale a 0 oppure diverso da 1, il programma si blocca ed esce dal ciclo
		}
	}
	while(risposta==1);
}
void caricamento_vettore(int vettore[], int n){ //definizione funzione caricamento vettore di n elementi interi
	for (int i=0;i<n;i++){ //ciclo for che permette il ripetersi dell'istruzione di inserimento
		vettore[i]=1+rand()%100; //nella casella corrente,i, del nostro vettore, andranno valori calcolati attraverso la formula 1+rand()%100, ovvero valori random
								//che vanno da 0 a 100
	}
}
void stampa_vettore(int vettore[], int n){ //definizione funzione stampa vettore di n elementi interi
	for (int i=0;i<n;i++){ //ciclo for che permette il ripetersi dell'istruzione di stampa
		cout<<"Elemento "<<i<<": "<<vettore[i]<<endl; //stampa del vettore
	}
}

