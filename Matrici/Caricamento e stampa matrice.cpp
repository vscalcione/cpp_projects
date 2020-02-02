#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;
int matrice[100][100],lr,lc,scelta;
void caricamento_matrice (int matrice[][100], int lr, int lc);
void caricamento_random (int matrice[][100], int lr, int lc);
void stampa_matrice (int matrice[][100], int lr, int lc);
main()
{
	system ("color 1F");
	cout<<"Inserire quantita' di righe della nostra matrice: ";
	cin>>lr;
	cout<<"Inserire quantita' di colonne: ";
	cin>>lc;
	system ("cls");
	do
	{
		cout<<"1. Caricamento e stampa di una matrice con inserimento da tastiera "<<endl;
		cout<<"2. Caricamento e stampa di una matrice con inserimento random "<<endl;
		cout<<"Scelta: ";
		cin>>scelta;
		if (scelta<1 or scelta>2)
		{
			cout<<"Scelta non disponibile "<<endl;
		}
	}
	while (scelta<1 or scelta>2);
	if (scelta==1)
	{
		system ("cls");
		caricamento_matrice (matrice,lr,lc);
		cout<<"Stampa della tua matrice appena caricata "<<endl;
		stampa_matrice (matrice,lr,lc);	
	}
	else
	{
		srand (time(NULL));
		system ("cls");
		caricamento_random (matrice,lr,lc);
		cout<<"Stampa della tua matrice appena caricata "<<endl;
		stampa_matrice (matrice,lr,lc);
	}

}
void caricamento_matrice (int matrice[][100], int lr, int lc)
{
	for (int i=0;i<lr;i++)
	{
		for (int j=0;j<lc;j++)
		{
			cout<<"Inserire valore nella casella ["<<i<<"]["<<j<<"]: ";
			cin>>matrice[i][j];
		}
	}
}
void caricamento_random (int matrice[][100], int lr, int lc)
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
			cout<<"Nella posizione ["<<i<<"]["<<j<<"] \212 presente: "<<matrice[i][j]<<endl;
		}
	}
}

