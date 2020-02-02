#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
using namespace std;
int matrice[100][100],lr,lc,massimo,minimo,scelta;
void caricamento_matrice (int matrice[][100], int lr, int lc);
void caricamento1_matrice (int matrice[][100], int lr, int lc);
void stampa_matrice (int matrice[][100], int lr, int lc);
int ricerca_massimo (int matrice[][100], int lr, int lc);
int ricerca_minimo (int matrice[][100], int lr, int lc);
main()
{
	system ("color 1F");
	cout<<"Caricamento, stampa e ricerca massimo/minimo "<<endl;
	cout<<"Quante righe vuoi che abbia la tua matrice? ";
	cin>>lr;
	cout<<"E le colonne? ";
	cin>>lc;
	do
	{
		cout<<"1. Inserimento random (generato dalla funzione srand) "<<endl;
		cout<<"2. Inserimento manuale "<<endl;
		cout<<"Scelta: ";
		cin>>scelta;
		if (scelta<1 or scelta>2)
		{
			cout<<"Operazione non disponibile "<<endl;
		}
	}
	while (scelta<1 or scelta>2);
	if (scelta==1)
	{
		system ("cls");
		caricamento1_matrice (matrice,lr,lc);
		stampa_matrice (matrice,lr,lc);
		massimo=ricerca_massimo (matrice,lr,lc);
		minimo=ricerca_minimo (matrice,lr,lc);
		cout<<"Massimo elemento trovato nella nostra matrice: "<<massimo<<endl;
		cout<<"Minimo elemento trovato nella nostra matrice: "<<minimo<<endl;
	}
	else
	{
		system ("cls");
		caricamento_matrice (matrice,lr,lc);
		stampa_matrice (matrice,lr,lc);
		massimo=ricerca_massimo (matrice,lr,lc);
		minimo=ricerca_minimo (matrice,lr,lc);
		cout<<"Massimo elemento trovato nella nostra matrice: "<<massimo<<endl;
		cout<<"Minimo elemento trovato nella nostra matrice: "<<minimo<<endl;	
	}
}
void caricamento_matrice (int matrice[][100], int lr, int lc)
{
	for (int i=0;i<lr;i++)
	{
		for (int j=0;j<lc;j++)
		{
			cout<<"Inserire valore nella posizione ["<<i<<"]["<<j<<"]: ";
			cin>>matrice[i][j];
		}
	}
}
void caricamento1_matrice (int matrice[][100], int lr, int lc)
{
	for (int i=0;i<lr;i++)
	{
		for (int j=0;j<lc;j++)
		{
			matrice[i][j]=1+rand()%100;
		}
	}
}
void stampa_matrice (int matrice[][100], int lr, int lc)
{
	for (int i=0;i<lr;i++)
	{
		for (int j=0;j<lc;j++)
		{
			cout<<"Nella posizione ["<<i<<"]["<<j<<"] \212 presente il valore: "<<matrice[i][j]<<endl;
		}
	}
}
int ricerca_massimo (int matrice[][100], int lr, int lc)
{
	int max=0;
	for (int i=0;i<lr;i++)
	{
		for (int j=0;j<lc;j++)
		{
			if (matrice[i][j]>max)
			{
				max=matrice[i][j];
			}
		}
	}
	return max;
}
int ricerca_minimo (int matrice[][100], int lr, int lc)
{
	int min=100;
	for (int i=0;i<lr;i++)
	{
		for (int j=0;j<lc;j++)
		{
			if (matrice[i][j]<min)
			{
				min=matrice[i][j];
			}
		}
	}
	return min;
}
