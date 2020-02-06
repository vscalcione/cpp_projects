#include <iostream> 
#include <cstdlib>
#include <time.h>
#include <math.h>

using namespace std;

int array[100], length, choice;
void loading_array (int array[], int length); 
void loading_array_1 (int array[], int length); 
void print_array (int array[], int length); 
void array_disorder (int array[], int length);
main()
{
	system ("color 1F");
	cout<<"Caricamento, disordinameto e stampa di un vettore di n elementi "<<endl;
	cout<<"Quanti elementi vuoi che abbia il tuo vettore? ";
	cin>>n; //inserimento quantit� elementi vettore
	do
	{
		cout<<"Menu' "<<endl;
		cout<<"1. Inserimento manuale (da tastiera) "<<endl;
		cout<<"2. Inserimento random (generato dalla funzione srand e rand) "<<endl;
		cout<<"Scelta: ";
		cin>>scelta; //inserimento scelta fra inserimento da tastiera o inserimento random
		if (scelta<1 or scelta>2)
		{
			cout<<"Operazione non disponibile "<<endl;
		}
	}
	while (scelta<1 or scelta>2); //ciclo do-while che permette di ciclare il men� nel caso in cui si inserisca un valore minore di 1 e 
								 //maggiore di 2
	if (scelta==1)
	{
		system ("cls");
		caricamento_vettore (vettore,n); //chiamata funzione caricamento vettoredi n elementi interi inseriti da tastiera
		stampa_vettore(vettore,n);
		disordinamento_vettore (vettore,n); //chiamata funzione disordinamento vettore
		stampa_vettore (vettore,n); //chiamata funzione stampa vettore
	}
	else
	{
		system ("cls");
		srand (time(NULL));
		caricamento1_vettore (vettore,n); //chiamata funzione caricamento vettore di n elementi interi random 
		disordinamento_vettore (vettore,n); //chiamata funzione di disordinamento vettore
		stampa_vettore (vettore,n); //chiamata funzione stampa vettore
	}
}
void caricamento_vettore (int vettore[], int n) //definizione funzione caricamento vettore di n elementi inseriti da tastiera
{
	for (int i=0;i<n;i++) //ciclo for che permette di scorrere l'intero vettore
	{
		cout<<"Inserire elemento nella posizione ["<<i<<"]: ";
		cin>>vettore[i]; //inserimento elementi nel vettore
	}
}
void caricamento1_vettore (int vettore[], int n)
{
	for (int i=0;i<n;i++) //ciclo for che permette di scorrere l'intero vettore
	{
		vettore[i]=1+rand()%100; //inserimento elementi nel vettore
	}
}
void stampa_vettore (int vettore[], int n)
{
	for (int i=0;i<n;i++) //ciclo for che permette di scorrere l'intero vettore
	{
		cout<<"Nella posizione ["<<i<<"] \212 presente il valore: "<<vettore[i]<<endl; //stampa del vettore
	}
}
void disordinamento_vettore (int vettore[], int n)
{
	for (int i=0;i<n;i++) //primo ciclo for che permette di scorrere l'intero vettore
	{
		for (int j=i+1;j<n;j++) //secondo ciclo for che permette di scorrere l'ipotetico intero vettore
		{
			int p;
			p=rand()%2;
			if (p==1)
			{
				int tmp;
				tmp=vettore[i];
				vettore[i]=vettore[j+1];
				vettore[j+1]=tmp; //nel caso in cui la variabile p, nella quale � stato memorizzato un valore divisibile per 2 (con resto 0) 
								 //� uguale a 1, avviene lo scambio di valori
			}
		}
	}
}