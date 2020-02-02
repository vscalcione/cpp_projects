#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;
int matrice[100][100],lr,lc,scelta;
void caricamento_matrice (int matrice[][100], int lr, int lc);
void ordinamento_matrice (int matrice[][100], int lr, int lc);
void stampa_matrice (int matrice[][100], int lr, int lc);
main()
{
	system ("color 1F");
	cout<<"Inserire quantita' di righe della nostra matrice: ";
	cin>>lr;
	cout<<"Inserire quantita' di colonne: ";
	cin>>lc;
	system ("cls");
	caricamento_matrice (matrice,lr,lc);
	stampa_matrice(matrice,lr,lc);
	ordinamento_matrice (matrice,lr,lc);
	cout<<"Stampa della tua matrice appena caricata ed ordinata "<<endl;
	stampa_matrice (matrice,lr,lc);	
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
void ordinamento_matrice (int matrice[][100], int lr, int lc)
{
	for (int i=0;i<lr;i++)
	{
		for (int j=0;j<lc;j++)
		{
			if (matrice[i][j]<matrice[i][j+1])
			{
				int tmp;
				tmp=matrice[i][j];
				matrice[i][j]=matrice[i][j+1];
				matrice[i][j+1]=tmp;
			}
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

