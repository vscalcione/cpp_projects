/* Si crei un codice.cpp che dopo aver caricato un vettore di n elementi interi attraverso un'apposita funzione, si ricerchi all'interno di esso un elemento e nel caso in
cui l'elemento inserito da tastiera è stato trovato all'interno del vettore stesso, si stampi un messaggio che avvisi l'utente dell'effettivo valore trovato
*/
#include <iostream> //libreria che permette l'utilizzo dei comandi "cin" e "cout"
#include <cstdlib>
#include <time.h> //libreria che permette di utilizzare i comandi "srand" e "rand" (comandi che permettono di generare valori random)
#include <math.h> //libreria che permette l'utilizzo di numerosi comandi che necessitano di calcoli di tipo matematici
using namespace std;
int vettore[100],n,elemento,ricerca,scelta; //dichiarazioni vettore e delle varie variabili necessarie
void caricamento_vettore (int vettore[], int n); //dichiarazione funzione caricamento vettore di n elementi interi inseriti da tastiera
void caricamento_random (int vettore[], int n); //dichiarazione funzione caricamento vettore di n elementi interi random
void stampa_vettore (int vettore[], int n); //dichiarazione funzione stampa vettore di n elementi
int ricerca_ottimizzata (int vettore[], int elemento); //dichiarazione funzione ricerca ottimizzata
main()
{
	system ("color 1F");
	cout<<"Ricerca massimo e minimo "<<endl;
	cout<<"Quanti elementi vuoi che abbia il tuo vettore? ";
	cin>>n; //inserimento quantità elementi del nostro vettore
	system ("cls");
	do
	{
		cout<<"1. Caricamento vettore con elementi inseriti da tastiera "<<endl;
		cout<<"2. Caricamento vettore con elementi random "<<endl;
		cin>>scelta; //inserimento della nosta scelta fra inserimento manuale (da tastiera) o inserimento random (inserimento generato dalla funzione srand)
		if (scelta<1 or scelta>2)
		{
			cout<<"Scelta non disponibile "<<endl;
		}
	}
	while (scelta<1 or scelta>2); //tale menù si ripeterà fino a quando l'utente inserirà un valore minore di 1 o maggiore di 2
	if (scelta==1)
	{
		system ("cls");
		caricamento_vettore (vettore,n); //chiamata funzione caricamento vettore di n elementi interi inseriti da tastiera		
		stampa_vettore (vettore,n); //chiamata funzione stampa vettore di n elementi interi inseriti da tastiera
		cout<<endl;
		cout<<"Inserire elemento da ricercare: ";
		cin>>elemento; //inserimento valore da ricercare nel vettore stesso
		ricerca=ricerca_ottimizzata (vettore,elemento); //chiamata funzione ricerca ottimizzata
		if (ricerca==1)
		{
			cout<<"Elemento trovato "<<endl; //se il valore associato alla variabile ricerca è =1, verrà stampato il messsaggio "Elemento trovato"
		}
		else
		{
			cout<<"Elemento non trovato "<<endl; //nel caso contrario, verrà stampato il messaggio "Elemento non trovato"
		}

	}
	if (scelta==2)
	{
		system ("cls");
		caricamento_random (vettore,n); //chiamata funzione caricamento vettore di n elementi con inserimento random
		stampa_vettore (vettore,n); //chiamata funzione stampa vettore di n elementi con inserimento random
		cout<<endl;
		cout<<"Inserire elemento da ricercare: ";
		cin>>elemento; //inserimento valore da ricercare
		ricerca=ricerca_ottimizzata (vettore,elemento); //chiamata funzione ricerca ottimizzata
		if (ricerca==1)
		{
			cout<<"Elemento trovato "<<endl; //se il valore associato alla variabile ricerca è =1, verrà stampato il messsaggio "Elemento trovato"
		}
		else
		{
			cout<<"Elemento non trovato "<<endl; //nel caso contrario, verrà stampato il messasggio "Elemento non trovato"
		}
	}
}
void caricamento_vettore (int vettore[], int n) //definizione funzione caricamento vettore di n elementi interi con inseriemento da tastiera
{
	for (int i=0;i<n;i++) //ciclo for che permette di scorrere l'intero vettore
	{
		cout<<"Inserire valore: ";
		cin>>vettore[i]; //effettivo inserimento di n elementi interi all'interno del vettore stesso
	}
}
void caricamento_random (int vettore[], int n) //definizione funzione caricamento vettore di n elementi interi con inserimento random
{
	for (int i=0;i<n;i++) //ciclo for che permette di scorrere l'intero vettore
	{
		vettore[i]=1+rand()%100; //memorizzazione dei vari valori random all'interno del vettore stesso attraverso la seguente stringa di codice
	}
}
void stampa_vettore (int vettore[], int n) //definizione funzione stampa vettore di n elementi interi
{
	for (int i=0;i<n;i++) //ciclo for che permette di scorrere l'intero vettore
	{
		cout<<"Nella posizione ["<<i<<"] del nostro vettore \212 presente il valore: "<<vettore[i]<<endl; //stampa del vettore
	}
}
int ricerca_ottimizzata (int vettore[], int elemento) //definizione funzione ricerca ottimizzata
{
	for (int i=0;i<n;i++) //ciclo for che permette di scandire l'intero vettore
	{
		if (vettore[i]==elemento) 
		{
			return 1; //se l'elemento corrente del nostro vettore è uguale all'elemento inserito da tastiera da ricercare, il valore di ritorno sarà 1
		}
		else
		{
			return 0; //nel caso contrario, il valore di ritorno sarà 0
		}
	}
}

