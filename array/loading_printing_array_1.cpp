/* Si crei un codice.cpp che dopo aver caricato un vettore di n elementi interi, attraverso un'apposita funzione, lo si stampi utilizzando, anche in questo caso l'
   apposita funzione
*/
#include <iostream> //libreria che permette di utilizzare i comandi "cin" e "cout"
#include <cstdlib>
#include <math.h> //libreria che permette di utilizzare tutti i comandi che necessitano di un'elaborazione dati di tipo matematico
#include <time.h> //libreria che permette di utilizzare i comandi srand e rand per generare valori casuali
using namespace std;
int vettore[100],n;
void caricamento_vettore (int vettore[], int n); //dichiarazione funzione di caricamento vettore di n elementi
void stampa_vettore (int vettore[], int n); //dichiarazione funzione di stampa vettore di n elementi
main()
{
	system ("color 1F");
	cout<<"Quanti elementi vuoi che abbia il tuo vettore? ";
	cin>>n;
	caricamento_vettore (vettore,n); //chiamata di funzione caricamento vettore di n elementi
	cout<<"Stampa vettore ordinato "<<endl; 
	stampa_vettore (vettore,n); //chiamata di funzione stampa vettore di n elementi
}
void caricamento_vettore (int vettore[], int n) //definizione funzione caricamento vettore di n elementi
{
	for (int i=0;i<n;i++) //ciclo for che permette di scandire l'intero vettore
	{
		cout<<"Inserire elemento: ";
		cin>>vettore[i]; //inserimento elemento che verrà poi memorizzata nell'apposita struttura dati
	}
}
void stampa_vettore (int vettore[], int n) //definizione funzione stampa vettore di n elementi 
{
	for (int i=0;i<n;i++) //ciclo for che permette di scandire l'intero vettore
	{
		cout<<"Nella posizione ["<<i<<"] \212 presente il valore: "<<vettore[i]<<endl; //stampa del vettore
	}
}
