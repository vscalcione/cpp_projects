/* Si crei un codice.cpp che dopo aver caricato un vettore di n elementi interi, attraverso un'apposita funzione. Successivamente lo si ordini attraverso una funzione
   di ordinamenti ed infine si stampi il vettore appena ordinato, anch'esso attraverso una funzione
*/
#include <iostream> //libreria che permette di utilizzare i comandi "cin" e "cout"
#include <cstdlib>
#include <math.h> //libreria che permette di utilizzare tutti i comandi che necessitano di un'elaborazione dati di tipo matematico
#include <time.h> //libreria che permette l'utilizzo delle funzioni srand e rand, utilizzabili per generare numeri casuali
using namespace std;
int vettore[100],n,scelta;
void caricamento_vettore (int vettore[], int n); //dichiarazione funzione caricamento vettore di n elementi inseriti da tastiera
void caricamento_random (int vettore[], int n); //dichiarazione funzione caricamento vettore di n elementi random
void stampa_vettore (int vettore[], int n); //dichiarazione funzione stampa vettore di n elementi
void ordinamento_vettore (int vettore[], int n); //dichiarazione funzione ordinamento vettore (bubble sort) di n elementi
main()
{
	system ("color 1F");
	srand (time(NULL)); //inizializzazione del seme (funzione generatrice numeri casuali)
	cout<<"Quanti elementi vuoi che abbia il tuo vettore? ";
	cin>>n;
	system ("cls");
	cout<<"Menu' "<<endl;
	do
	{
		cout<<"1. Inserimento casuale nel vettore "<<endl;
		cout<<"2. Inserimento da tastiera nel vettore "<<endl;
		cin>>scelta; //inserimento scelta fra elementi inseriti da tastiera o generati dalla funzione (valori random)
		if (scelta<1 or scelta>2)
		{
			cout<<"Scelta non disponibile "<<endl;
		}
	}
	while (scelta<1 or scelta>2);
	if (scelta==1)
	{
		system ("cls");
		cout<<"Caricamento, stampa e ordinamento vettore (inserimento casuale) "<<endl;
		caricamento_random (vettore,n); //chiamata funzione caricamento con elementi inseriti da tastiera
		ordinamento_vettore (vettore,n); //chiamata funzione ordinamento vettore di n elementi
		stampa_vettore (vettore,n); //chiamata funzione stampa vettore 
	}
	else
	{
		system ("cls");
		cout<<"Caricamento, stampa e ordinamento vettore (inserimento da tastiera) "<<endl;
		caricamento_vettore (vettore,n); //chiamata funzione caricamento vettore di n elementi inseriti da tastiera
		ordinamento_vettore (vettore,n); //chiamata funzione ordinamento vettore di n elementi
		cout<<endl;
		cout<<"Stampa vettore ordinato "<<endl;
		stampa_vettore (vettore,n); //chiamata funzione stampa vettore
	}
}
void caricamento_vettore (int vettore[], int n) //definizione funzione caricamento vettore di n elementi inseriti da tastiera
{
	for (int i=0;i<n;i++) //ciclo for che scandisce l'intero vettore
	{
		cout<<"Inserire elemento: ";
		cin>>vettore[i]; //inserimento elementi all'interno dell'apposita struttura dati (vettore)
	}
}
void caricamento_random (int vettore[], int n) //definizione funzione caricamento vettore di n elementi con inserimento random
{
	for (int i=0;i<n;i++) //ciclo for che scandisce l'intero vettore
	{
		vettore[i]=1+rand()%100;
	}
}
void stampa_vettore (int vettore[], int n) //definizione funzione stampa vettore di n elementi
{
	for (int i=0;i<n;i++) //ciclo for che scandisce l'intero vettore
	{
		cout<<"Nella posizione ["<<i<<"] \212 presente il valore: "<<vettore[i]<<endl; //effettiva stampa del vettore
	}
}
void ordinamento_vettore (int vettore[], int n) //definizione funzione ordinamento vettore (bubble sort) di n elementi
{
	for (int i=0;i<n;i++) //primo ciclo for che permette di scandire l'intero vettore
	{
		for (int j=0;j<n;j++) //secondo ciclo for
		{
			if (vettore[i]<vettore[j]) 
			{
				int tmp; //se l'elemento corrente del vettore[i] è minore dell'elemento corrente del vettore immaginario (vettore[j]), avviene l'effettivo scambio di 
						//valori
				tmp=vettore[i];
				vettore[i]=vettore[j];
				vettore[j]=tmp;
			}
		}
	}
}
