/* Si crei un codice in c++, in cui dopo aver caricato un vettore di n elementi interi attraverso un'apposita funzione di caricamento, calcoli la somma e la media degli 
   elementi all'interno del vettore stesso, anch'esse attraverso un'apposita funzione e successivamente stampi a video il risultato della somma/media e l'intero vettore
*/
#include <iostream> //libreria che permette di utilizzare i comandi "cin" e "cout"
#include <cstdlib>
#include <time.h> //libreria che permette di utilizzare i comandi rand e srand
#include <math.h> //libreria che permette di eseguire tutti i comandi che necessitano di un'elaborazione dati di tipo matematico
using namespace std;
int vettore[100],n,sum,scelta;
float media;
void caricamento_vettore (int vettore[], int n); //dichiariazione funzione di caricamento del vettore di n elementi con inserimento da tastiera
void caricamento_random (int vettore[], int n); //dichiarazione funzine di caricamento del vettore di n elementi con inserimento random
void stampa_vettore (int vettore[], int n); //dichiarazione funzione di stampa del vettore di n elementi
int somma_vettore (int vettore[], int n); //dichiarazione funzione di somma degli elementi del vettore
float media_vettore (int vettore[], int somma); //dichiarazione funzione della media degli elementi del vettore
main()
{
	system ("color 1F");
	cout<<"Somma e media vettore "<<endl;
	cout<<"Quanti elementi vuoi che abbia il tuo vettore? ";
	cin>>n;
	system ("cls");
	cout<<endl;
	do
	{
		cout<<"1. Caricamento, stampa e calcolo somma/media con valori random "<<endl;
		cout<<"2. Caricamento, stampa e calcolo somma/media con valori inseriti da tastiera "<<endl;
		cin>>scelta; //inserimento scelta fra inserimento da tastiera o random
		if (scelta<1 or scelta>2)
		{
			cout<<"Scelta non disponibile "<<endl;
		}
	}
	while (scelta<1 or scelta>2);
	if (scelta==1)
	{
		system ("cls");
		caricamento_random (vettore,n); //chiamata di funzione caricamento random, con l'apposita funzione srand e rand
		sum=somma_vettore (vettore,n); //chiamata di funzione sommma elementi del vettore
		media=media_vettore (vettore,sum); //chiamata di funzione media elementi del vettore
		cout<<"Somma vettore: "<<sum<<endl; //stampa della somma
		cout<<"Media vettore: "<<media<<endl; //stampa della media
		cout<<endl;
		stampa_vettore (vettore,n);	//chiamata di funzione stampa vettore con inserimento random
	}
	if (scelta==2)
	{
		system ("cls");
		caricamento_vettore (vettore,n); //chiamata di funzione caricamento vettore di n elementi con inserimento da tastiera
		sum=somma_vettore (vettore,n); //chiamata di funzione somma elementi del vettore
		media=media_vettore (vettore,sum); //chiamata di funzione media elementi del vettore
		cout<<"Somma vettore: "<<sum<<endl; //stampa della somma
		cout<<"Media vettore: "<<media<<endl; //stampa della media
		cout<<endl;
		stampa_vettore (vettore,n); //chiamata di funzione stampa vettore con inserimento da tastiera
	}
}
void caricamento_vettore (int vettore[], int n) //definizione funzione caricamento vettore di n elementi con inserimento da tastiera
{
	for (int i=0;i<n;i++) //ciclo che permette di scorrere l'intero vettore
	{
		cout<<"Inserire valore: ";
		cin>>vettore[i]; //effettivo inserimento di n valori all'interno del vettore stesso
	}
}
void caricamento_random (int vettore[], int n) //definizione funzione di caricamento vettore con inserimento random
{
	for (int i=0;i<n;i++) //ciclo che permette di scorrere l'intero vettore
	{
		vettore[i]=1+rand()%100; //attraverso la funzione rand vengono inseriti n valori random all'interno del vettore
	}
}
void stampa_vettore (int vettore[], int n) //difinizione funzione di stampa del vettore
{
	for (int i=0;i<n;i++)
	{
		cout<<"Nella posizione ["<<i<<"] \212 presente il valore: "<<vettore[i]<<endl;
	}
}
int somma_vettore (int vettore[], int n) //definizione della funzione somma elementi del vettore
{
	int x=0; //dichiarazione variabile accumulatrice
	for (int i=0;i<n;i++)
	{
		x=x+vettore[i]; //calcolo della somma
	}
	return x;
}
float media_vettore (int vettore[], int somma) //definizione funzione media elementi del vettore
{
	float m; 
	m=sum/n; //calcolo della media
	return m;
}

