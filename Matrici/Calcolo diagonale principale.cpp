#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
using namespace std;
int matrice[100][100],lr,lc,calcolo_diagonale,scelta;
void caricamento1_matrice (int matrice[][100], int lr, int lc);
void caricamento_matrice (int matrice[][100], int lr, int lc);
void stampa_matrice (int matrice[][100], int lr, int lc);
int diagonale_principale (int matrice[][100], int lr, int lc);
main()
{
	system ("color 1F");
	cout<<"Caricamento, stampa e calcolo diagonale principale di una matrice "<<endl;
	cout<<"Quante righe vuoi che abbia la tua matrice? ";
	cin>>lr;
	cout<<"E le colonne? ";
	cin>>lc;
	do
	{
		cout<<"1. Inserimento random (generato dalla funzione srand)"<<endl;
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
		calcolo_diagonale=diagonale_principale (matrice,lr,lc);
		cout<<"La nostra diagonale principale \212 pari a: "<<calcolo_diagonale<<endl;
	}
	else
	{
		system ("cls");
		caricamento_matrice (matrice,lr,lc);
		stampa_matrice (matrice,lr,lc);
		calcolo_diagonale=diagonale_principale (matrice,lr,lc);
		cout<<"La nostra diagonale principale \212 pari a: "<<calcolo_diagonale<<endl;
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
int diagonale_principale (int matrice[][100], int lr, int lc)
{
	int diagonale=0;
	for (int i=0;i<lr;i++)
	{
		for (int j=0;j<lc;j++)
		{
			if(i==j)
			{
				diagonale+=matrice[i][j];
			}
		}
	}
	return diagonale;
}
