#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>
using namespace std;
int matrice[6][4],r,c;
void caricamento_matrice (int matrice[][4]);
void stampa_matrice (int matrice[][4]);
void matrice_trasposta (int matrice[][4]);
int massimo_matrice (int matrice[][4]);
int minimo_matrice (int matrice[][4]);
main()
{
	system ("color 3A");
	cout<<"|Caricamento e trasposta di una matrice |"<<endl;
	srand(time(NULL));
	cout<<" Numero righe: ";
	cin>>r;
	cout<<" Numero colonne: ";
	cin>>c;
	cout<<" E' una matrice ["<<r<<"]["<<c<<"]"<<endl;
	system ("cls");
	caricamento_matrice (matrice);
	stampa_matrice (matrice);
	matrice_trasposta (matrice);
}
void caricamento_matrice (int matrice[][4])
{
	for (int i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)
		{
			matrice[i][j]=rand()%100;
		}
	}
}
void matrice_trasposta (int matrice[][4])
{
	for (int i=0;i<r;i++)
	{
		for (int j=i;j<c;j++)
		{
			int temp;
			temp=matrice[i][j];
			matrice[i][j]=matrice[j][i];
			matrice[j][i]=temp;
		}
	}
}
void stampa_matrice (int matrice[][4])
{
	cout<<" Matrice1: "<<endl;
	for (int i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)
		{
			cout<<" Il valore nella posizione ["<<i<<"]["<<j<<"] e': "<<matrice[i][j]<<endl;
		}
	}
	cout<<endl<<endl;
	cout<<" Matrice2 "<<endl;
	for (int i=0;i<r;i++)
	{
		for (int j=0;j<c;j++)
		{
			cout<<" Il valore nella posizione ["<<i<<"]["<<j<<"] e': "<<matrice[j][i]<<endl;
		}
	}
}
