#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
using namespace std;
int matrice[100][100],lr,lc;
void caricamento_matrice (int matrice[][100], int lr, int lc);
void scambio (int matrice[][100], int lr, int lc);
void stampa_matrice (int matrice[][100], int lr, int lc);
main()
{
	srand (time(NULL));
	cout<<"Righe matrice: ";
	cin>>lr;
	cout<<"Colonne matrice: ";
	cin>>lc;
	caricamento_matrice (matrice,lr,lc);
	scambio (matrice,lr,lc);
	stampa_matrice (matrice,lr,lc);
}
void caricamento_matrice (int matrice[][100], int lr, int lc)
{
	for (int i=0;i<lr;i++)
	{
		for (int j=0;j<lc;j++)
		{
			matrice[i][j]=1+rand()%100;
		}
	}
}
void scambio (int matrice[][100], int lr, int lc)
{
	int tmp;
	for (int i=0;i<lr;i++)
	{
		for (int j=0;j<lc;j++)
		{
			tmp=matrice[i][j];
			matrice[i][j]=matrice[j][i];
			matrice[j][i]=tmp;
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

