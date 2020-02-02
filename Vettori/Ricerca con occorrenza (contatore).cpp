/* Si crei un codice.cpp in cui, dopo aver caricato un vettore di n elementi interi, si ricerchi all'interno di essi un elemento intero inserito da tastiera e si verifichi
quante volte è presente all'interno del vettore stesso attraverso l'utilizzo di un contatore. Successivamente si stampi se l'elemento è stato trovato e/o quante volte, e 
poi si stampi il vettore stesso
*/
#include <iostream> //libreria che permette l'utilizzo dei comandi "cin" e "cout"
#include <cstdlib>
#include <time.h> //libreria che permette l'utilizzo delle funzioni srand e rand (generano valori casuali)
#include <math.h> //libreria che permette l'utilizzo di tutti i comandi che necessitano di un determinato calcolo di tipo matematico
using namespace std;
int vettore[100],elemento,n,x;
void caricamento_vettore (int vettore[], int n); //dichiarazione funzione di caricamento vettore con elementi interi
void stampa_vettore (int vettore[], int n); //dichiarazione funzione di caricamento vettore con elementi interi
int ricerca_contatore (int vettore[], int elemento); //dichiarazione funzione di ricerca vettore con contatore
main()
{
	system ("color 1F");
	cout<<"Caricamento, stampa e ricerca elemento con contatore "<<endl<<endl;
	cout<<"Inserire quantita' di elementi del nostro vettore: ";
	cin>>n; //inserimento quantità elementi del nostro vettore
	caricamento_vettore (vettore,n); //chiamata funzione di caricamento vettore
	stampa_vettore (vettore,n); //chiamata funzione di stampa vettore
	cout<<"Inserire elemento da ricercare: ";
	cin>>elemento; //inserimento elemento da ricercare all'interno del nostro vettore
	x=ricerca_contatore (vettore,elemento);
}
void caricamento_vettore (int vettore[], int n) //definizione funzione di caricamento vettore con elementi interi
{
	for (int i=0;i<n;i++) //ciclo for che permette di scandire l'intero vettore
	{
		cout<<"Inserire valore nella posizione ["<<i<<"]: ";
		cin>>vettore[i]; //inserimento di n valori interi all'interno del vettore stesso
	}
}
void stampa_vettore (int vettore[], int n) //definizione funzione di stampa vettore con elementi interi
{
	for (int i=0;i<n;i++) //ciclo for che permette di scandire l'intero vettore
	{
		cout<<"Nella posizione ["<<i<<"] \212 presente il valore: "<<vettore[i]<<endl; //stampa del vettore
	}	
}
int ricerca_contatore (int vettore[], int elemento) //definizione funzione di ricerca elemento con contatore
{
	int cont=0;
	for (int i=0;i<n;i++) //ciclo for che permette di scandire l'intero vettore
	{
		if (vettore[i]==elemento)
		{
			cont++; //se l'elemento inserito da tastiera corrisponde all'elemento corrente del nostro vettore, il contatore, che precedentemente era stato inizializzato 
					//a 0, viene incrementato (+1)
		}
	}
	cout<<"L'elemento "<<elemento<<" \212 stato trovato "<<cont<<" volte "<<endl; //stampa del valore contenuto nel contatore
}

