/* Si crei un codice.cpp dove, dopo aver caricato un vettore di n elementi interi attraverso un'apposita funzione, ricerchi un elemento inserito da tastiera all'interno 
del vettore stesso e stampi un messaggio in cui venga detto quante volte viene trovato tale elemento all'interno del vettore.
*/
#include <iostream> //libreria che permette l'utilizzo dei comandi "cin" e "cout"
#include <cstdlib>
#include <time.h> //libreria che permette l'utilizzo dei comandi "srand" e "rand" (generare valori random)
#include <math.h> //libreria che permette l'utilizzo di tutte le istruzioni che necessitano di calcoli matematici
using namespace std;
int vettore[100],n,occorrenza,elemento,scelta; //dichiarazione vettore e delle varie variabili necessarie
void caricamento_vettore (int vettore[], int n); //dichiarazione funzione caricamento vettore di n elementi interi con inserimento da tastiera
void caricamento_random (int vettore[], int n); //dichiarazione funzione caricamento vettore di n elementi interi con inserimento random
void stampa_vettore (int vettore[], int n); //dichiarazione funzione stampa vettore di n elementi interi
int ricerca_occorrenza (int vettore[], int elemento); //dichiarazione funzione ricerca ottimizzata
main()
{
	system ("color 1F");
	cout<<"Ricerca massimo e minimo "<<endl;
	cout<<"Quanti elementi vuoi che abbia il tuo vettore? ";
	cin>>n; //inserimento quantità elementi del nostro vettore
	system ("cls");
	do //ciclo do-while che permette di ciclare il nostro menù
	{
		cout<<"1. Caricamento vettore con elementi inseriti da tastiera "<<endl;
		cout<<"2. Caricamento vettore con elementi random "<<endl;
		cin>>scelta; //inserimento della nostra scelta fra inserimento manuale (da tastiera) o inserimento random (generato dalla funzione srand e rand)
		if (scelta<1 or scelta>2)
		{
			cout<<"Scelta non disponibile "<<endl;
		}
	}
	while (scelta<1 or scelta>2); //tale menà viene ciclato fino a quando verrà inserito un valore minore di 1 o maggiore di 2
	if (scelta==1)
	{
		system ("cls");
		caricamento_vettore (vettore,n); //chiamata funzione caricamento vettore di n elementi interi con inserimento da tastiera
		stampa_vettore (vettore,n); //chiamata funzione stampa vettore di n elementi interi
		cout<<endl;
		cout<<"Inserire elemento da ricercare: ";
		cin>>elemento;  //inserimento valore da ricercare
		occorrenza=ricerca_occorrenza (vettore,elemento); //chiamata funzione ricerca occorrenza
		cout<<occorrenza;
	}
	if (scelta==2)
	{
		system ("cls");
		caricamento_random (vettore,n); //chiamata funzione caricamento vettore di n elementi interi con inserimento random
		stampa_vettore (vettore,n); //chiamata funzione stampa vettore di n elementi interi
		cout<<endl;
		cout<<"Inserire elemento da ricercare: ";
		cin>>elemento; //inserimento valore da ricercare
		occorrenza=ricerca_occorrenza (vettore,elemento); //chiamata funzione ricerca occorrenza
	}
}
void caricamento_vettore (int vettore[], int n) //definizione funzione caricamento vettore di n elementi interi con inserimento da tastiera
{
	for (int i=0;i<n;i++) //ciclo for che permette di scandire l'intero vettore
	{
		cout<<"Inserire valore: ";
		cin>>vettore[i]; //inserimento di n valori all'interno del vettore
	}
}
void caricamento_random (int vettore[], int n) //definizione funzione caricamento vettore di n elementi interi con inserimento random
{
	for (int i=0;i<n;i++) //ciclo for che permette di scandire l'intero vettore
	{
		vettore[i]=1+rand()%100; //memorizzazione dei vari valori inseriti all'interno del vettore attraverso la seguente stringa di codice
	}
}
void stampa_vettore (int vettore[], int n) //definizione funzione stampa vettore di n elementi interi
{
	for (int i=0;i<n;i++) //ciclo for che permette di scandire l'intero vettore
	{
		cout<<"Nella posizione ["<<i<<"] del nostro vettore \212 presente il valore: "<<vettore[i]<<endl; //stampa del vettore
	}
}
int ricerca_occorrenza (int vettore[], int elemento) //definizione funzione ricerca occorrenza
{
	int cont=0; //dichiarazione contatore
	for (int i=0;i<n;i++) //ciclo for che permette di scandire l'intero vettore
	{
		if (vettore[i]==elemento) 
		{
			cont++; //nel caso in cui elemento inserito è uguale all'elemento corrente, il contatore verrà incrementato di 1
		}
	}
	return cont;
	cout<<"L'elemento è stato trovato "<<cont<<"volte "<<endl; //stampa di quante volte è stato trovato tale elemento
}

