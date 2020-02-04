/* Si crei un codice.cpp dove dopo aver caricato 3 vettori di n elementi interi, si calcoli la loro somma e analogamente la loro media attraverso delle apposite funzioni
come quella del caricamento, stampa, calcolo somma e calcolo media. Successivamente si stampi il contenuto di ogni vettore e la loro somma e media
*/

#include <iostream> //libreria che permette l'utilizzo dei comandi "cin" e "cout"
#include <cstdlib>
#include <math.h> //libreria che permette l'utilizzo di tutte le istruzioni che necessitano di calcoli matematici
#include <time.h> //libreria che permette l'utilizzo dei comandi "srand" e "rand" (comandi che generano valori casuali)
using namespace std;
int somma1,somma2,somma3; //dichiarazione delle 3 variabili per il calcolo della somma dei corrispondenti vettori
float media1,media2,media3; //dichiarazione delle 3 variabili per il calcolo della media dei corrispondenti vettori
int vettore1[10],vettore2[10],vettore3[10],n; //dichiarazione dei 3 vettori di n elementi interi
void caricamento_vettore (int vettore[], int n); //dichiarazione funzione caricamento vettore di n elementi interi con inserimento random
void stampa_vettore (int vettore[], int n); //dichiarazione funzione stampa vettore di n elementi con inserimento random
int somma_vettore (int vettore[], int n); //dichiarazione funzione calcolo somma del vettore di n elementi 
float media_vettore (int vettore[], int n); //dichiarazione funzione calcolo media del vettore di n elementi
main()
{
	system ("color 1F");
	cout<<"Caricamento, stampa e somma/media di 3 vettori "<<endl;
	cout<<"Quanti elementi vuoi che abbiano i tuoi vettori? ";
	cin>>n; //inserimento quantità elementi di ogni singolo vettore
	srand (time(NULL));
	cout<<endl;
	caricamento_vettore (vettore1,n); //chiamata funzione caricamento primo vettore
	stampa_vettore (vettore1,n); //chiamata funzione stampa primo vettore
	somma1=somma_vettore (vettore1,n); //chiamata funzione calcolo somma primo vettore
	media1=media_vettore (vettore1,somma1); //chiamata funzione calcolo media primo vettore
	cout<<"Somma del primo vettore : "<<somma1<<endl; //stampa somma primo vettore
	cout<<"Media del primo vettore : "<<media1<<endl; //stampa media primo vettore
	cout<<endl<<endl;
	caricamento_vettore (vettore2,n); //chiamata funzione caricamento secondo vettore
	stampa_vettore (vettore2,n); //chiamata funzione stampa secondo vettore
	somma2=somma_vettore (vettore2,n); //chiamata funzione calcolo somma secondo vettore
	media2=media_vettore (vettore2,somma2); //chiamata funzione calcolo media secondo vettore
	cout<<"Somma del secondo vettore: "<<somma2<<endl; //stampa somma secondo vettore
	cout<<"Media del secondo vettore: "<<media2<<endl; //stampa media secondo vettore
	cout<<endl<<endl;
	caricamento_vettore (vettore3,n); //chiamata funzione caricamento terzo vettore
	stampa_vettore (vettore3,n); //chiamata funzione stampa terzo vettore
	somma3=somma_vettore (vettore3,n); //chiamata funzione calcolo somma terzo vettore
	media3=media_vettore (vettore3,somma3); //chiamata funzione calcolo media terzo vettore
	cout<<"Somma del terzo vettore: "<<somma3<<endl; //stampa somma terzo vettore
	cout<<"Media del terzo vettore: "<<media3<<endl; //stampa media terzo vettore
	cout<<endl<<endl;
}
void caricamento_vettore (int vettore[], int n) //definizione funzione caricamento vettore
{
	for (int i=0;i<n;i++) //ciclo for che permette di scorrere l'intero vettore
	{
		vettore[i]=1+rand()%100; //questa stringa di codice permette di inserire n elementi interi nel vettore 
	}
}
void stampa_vettore (int vettore[], int n) //definizione funzione stampa vettore
{
	for (int i=0;i<n;i++) //ciclo for che permette di scorrere l'intero vettore
	{
		cout<<"Nella posizione ["<<i<<"] \212 presente il valore: "<<vettore[i]<<endl; //stampa del vettore
	}
}
int somma_vettore (int vettore[], int n) //definizione funzione calcolo somma vettore
{
	int somma=0; //dichiarazione variabile accumulatrice
	for (int i=0;i<n;i++) //ciclo for che permette di scorrere l'intero vettore
	{
		somma=somma+vettore[i]; //calcolo somma
	}
	return somma;
}
float media_vettore (int vettore[], int somma) //definizione funzione calcolo media vettore
{
	float m; 
	for (int i=0;i<n;i++) //ciclo for che permette di scorrere l'intero vettore
	{
		m=(float)somma/n; //calcolo media
	}
	return m;
}
