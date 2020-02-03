/* Si crei un programma in c++ che, dopo aver popolato un vettore di n elementi, ricerci al suo interno il massimo e il minimo valore 
attraverso un'apposita funzione e successivamente li stampi a video.
*/
#include <iostream> //libreria che permette l'utilizzo dei comandi "cin" e "cout"
#include <cstdlib>
#include <math.h> //libreria che permette l'utilizzo di istruzioni che necessitano di calcoli matematici
#include <time.h> //libreria che permette di generare valori random attraverso le funzioni srand e rand
using namespace std;
int vettore[100],n,massimo,minimo,scelta;
void caricamento_vettore (int vettore[], int n); //dichiarazione funzione caricamento vettore di n elementi interi
void caricamento_random (int vettore[], int n); //dichiarazione funzione caricamento vettore di n elementi interi random
void stampa_vettore (int vettore[], int n); //dichiarazione funzione stampa vettore di n elementi interi
int ricerca_massimo (int vettore[], int n); //dichiarazione funzione ricerca massimo nel vettore di n elementi interi
int ricerca_minimo (int vettore[], int n); //dichiarazione funzione ricerca minimo nel vettore di n elementi interi
main()
{
	system ("color 1F");
	cout<<"Ricerca massimo e minimo "<<endl;
	cout<<"Quanti elementi vuoi che abbia il tuo vettore? ";
	cin>>n; //inserimento quantità di elementi del nostro vettore
	system ("cls");
	do //ciclo do-while che permette di scegliere fra inserimento manuale (da tastiera) o random (attraverso funzioni srand e rand)
	{
		cout<<"1. Caricamento vettore con elementi inseriti da tastiera "<<endl;
		cout<<"2. Caricamento vettore con elementi random "<<endl;
		cin>>scelta; //inserimento della nostra scelta
		if (scelta<1 or scelta>2)
		{
			cout<<"Scelta non disponibile "<<endl;
		}
	}
	while (scelta<1 or scelta>2); //questo menù verrà ciclato solo nel caso in cui venga inserito un valore minore di 1 o maggiore di 2
	if (scelta==1)
	{
		system ("cls");
		caricamento_vettore (vettore,n); //chiamata funzione caricamento vettore di n elementi interi
		stampa_vettore (vettore,n); //chiamata funzione stampa vettore di n elementi interi
		cout<<endl;
		massimo=ricerca_massimo (vettore,n); //chiamata funzione ricerca massimo
		minimo=ricerca_minimo (vettore,n); //chiamata funzione ricerca minimo
		cout<<"Massimo elemento trovato: "<<massimo<<endl; //stampa massimo elemento trovato nel nostro vettore
		cout<<"Minimo elemento trovato: "<<minimo<<endl; //stampa minimo elemento trovato nel nostro vettore
	}
	if (scelta==2)
	{
		system ("cls");
		caricamento_random (vettore,n); //chiamata funzione caricamento vettore di n elementi interi random
		stampa_vettore (vettore,n); //chiamata funzione stampa vettore di n elementi interi random
		cout<<endl;
		massimo=ricerca_massimo (vettore,n); //chiamata funzione ricerca massimo
		minimo=ricerca_minimo (vettore,n); //chiamata funzione ricerca minimo
		cout<<"Massimo elemento trovato: "<<massimo<<endl; //stampa massimo elemento trovato nel nostro vettore
		cout<<"Minimo elemento trovato: "<<minimo<<endl; //stampa minimo elemento trovato nel nostro vettore

	}
}
void caricamento_vettore (int vettore[], int n) //definizione funzione caricamento vettore di n elementi interi
{
	for (int i=0;i<n;i++) //ciclo for che permette di scorrere l'intero vettore
	{
		cout<<"Inserire valore: ";
		cin>>vettore[i]; //inserimento di n valori interi all'interno del vettore stesso
	}
}
void caricamento_random (int vettore[], int n) //definizione funzione caricamento vettore di n elementi interi random
{
	for (int i=0;i<n;i++) //ciclo for che permette di scorrere l'intero vettore
	{
		vettore[i]=1+rand()%100; //i valori vengono memorizzati all'interno del vettore attraverso la seguente stringa di codice
	}
}
void stampa_vettore (int vettore[], int n) //definizione funzione stampa vettore di n elementi interi
{
	for (int i=0;i<n;i++) //ciclo for che permette di scorrere l'intero vettore
	{
		cout<<"Nella posizione ["<<i<<"] del nostro vettore \212 presente il valore: "<<vettore[i]<<endl; //stampa dell'intero vettore
	}
}
int ricerca_massimo (int vettore[], int n) //definizione funzione ricerca massimo elemento 
{
	int max=0;
	for (int i=0;i<n;i++) //ciclo for che permette di scorrere l'intero vettore
	{
		if (vettore[i]>max)
		{
			max=vettore[i]; //nel caso in cui l'elemento corrente del nostro vettore è maggiore del contenuto della variabile max, tale 
							//valore verrà spostato verso la coda del vettore
		}
	}
	return max;
}
int ricerca_minimo (int vettore[], int n) //definizione funzione ricerca minimo elemento
{
	int min=100;
	for (int i=0;i<n;i++) //ciclo for che permette di scorrere l'intero vettore
	{
		if (vettore[i]<min)
		{
			min=vettore[i]; //nel caso in cui l'elemento corrente del nostro vettore è minore del contenuto della variabile min, tale valore
							//verrà spostato verso la testa del nostro vettore
		}
	}
	return min;
}

