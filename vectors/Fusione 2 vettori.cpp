/* Si crei un codice.cpp che, dopo aver popolato 2 vettori di n elementi interi, si calcoli il suo rispettivo vettore in cui ci siano tutti gli elementi dei 2 precedenti 
in modo ordinato, sempre attraverso le apposite funzioni (caricamento,stampa,fusione)
*/
#include <iostream> //libreria che permette l'utilizzo dei comandi "cin" e "cout"
#include <cstdlib>
#include <math.h> //libreria che permette l'utilizzo delle istruzioni che necessitano di calcoli matematici
#include <time.h> //libreria che permette l'utilizzo dei comandi srand e rand (generano valori random)
using namespace std;
int vettore1[10],vettore2[10],vettore3[10],n,scelta;
void caricamento_vettore (int vettore[], int n);
void caricamento1_vettore (int vettore[], int n);
void ordinamento_vettore (int vettore[], int n);
void stampa_vettore (int vettore[], int n);
void fusione_vettore (int vettore1[], int vettore2[], int vettore3[]);
main()
{
	system ("color 1F");
	cout<<"Fusione di 2 vettori "<<endl;
	srand(time(NULL));
	cout<<"Quanti elementi vuoi che abbia il tuo vettore? ";
	cin>>n;
	do
	{
		cout<<"1. Inserimento manuale (da tastiera) "<<endl;
		cout<<"2. Inserimento random (generato dalle funzione srand e rand) "<<endl;
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
		caricamento_vettore (vettore1,n);
		ordinamento_vettore (vettore1,n);
		stampa_vettore (vettore1,n);
		cout<<endl<<endl;
		caricamento_vettore (vettore2,n);
		ordinamento_vettore (vettore2,n);
		stampa_vettore (vettore2,n);
		cout<<endl<<endl;
		fusione_vettore (vettore1,vettore2,vettore3);
		stampa_vettore (vettore3,n*2);
	}
	else
	{
		system ("cls");
		caricamento1_vettore (vettore1,n);
		ordinamento_vettore (vettore1,n);
		stampa_vettore (vettore1,n);
		cout<<endl<<endl;
		caricamento1_vettore (vettore2,n);
		ordinamento_vettore (vettore2,n);
		stampa_vettore (vettore2,n);
		cout<<endl<<endl;
		fusione_vettore (vettore1,vettore2,vettore3);
		stampa_vettore (vettore3,n*2);
	}
}
void caricamento_vettore (int vettore[], int n)
{
	for (int i=0;i<n;i++)
	{
		cout<<"Inserire elemento nella posizione ["<<i<<"]: ";
		cin>>vettore[i];
	}
}
void caricamento1_vettore (int vettore[], int n)
{
	for (int i=0;i<n;i++)
	{
		vettore[i]=rand()%100;
	}
}
void ordinamento_vettore (int vettore[], int n)
{
	for (int i=0;i<n;i++)
	{
		for (int j=i+1;j<n;j++)
		{
			if (vettore[i]>vettore[j])
			{
				int temp;
				temp=vettore[i];
				vettore[i]=vettore[j];
				vettore[j]=temp;
			}
		}
	}
}
void stampa_vettore (int vettore[], int n)
{
	for (int i=0;i<n;i++)
	{
		cout<<"Nella posizoine ["<<i<<"] \212 presente il valore: "<<vettore[i]<<endl;
	}
}
void fusione_vettore (int vettore1[], int vettore2[], int vettore3[])
{
	int i1=0;
	int i2=0;
	int i3=0;
	while (i1<n && i2<n)
	{
		if (vettore1[i1]<vettore2[i2])
		{
			vettore3[i3]=vettore1[i1];
			i3++;
			i1++;
		}
		else
		{
			vettore3[i3]=vettore2[i2];
			i3++;
			i2++;
		}
	}
	while (i1<n)
	{
		vettore3[i3++]=vettore1[i1++];
	}
	while (i2<n)
	{
		vettore3[i3++]=vettore2[i2++];
	}
}

