/* Si crei un codice in c++, dove dopo aver caricato una matrice [lr][lc] di valori interi attraverso un'apposita funzione di caricamento, si ricerchi all'interno di essa 
un valore intero inserito da tastiera e si verifichi se tale è presente nella matrice stessa. In caso affermativo, verrà stampato il seguente messaggio "Elemento trovato", 
mentre, in caso contrario, verrà stampato il seguente messaggio "Elemento non trovato"
*/
#include <iostream> //libreria che permette l'utilizzo dei comandi "cin" e "cout"
#include <cstdlib>
#include <math.h> //libreria che permette l'utilizzo di tutte le istruzioni che necessitano di calcolo matematico
#include <time.h> //libreria che permette l'utilizzo dei comandi srand e rand (comandi necessari per generare valori random)
using namespace std;
int matrice[100][100],lr,lc,ricerca,elemento,scelta; //dichiarazione della matrice e delle vari variabili necessarie
void caricamento_matrice (int matrice[][100], int lr, int lc); //dichiarazione funzione caricamento matrice[lr][lc] di elementi interi inseriti da tastiera
void caricamento1_matrice (int matrice[][100], int lr, int lc); //dichiarazione funzione caricamento matrice[lr][lc] di elementi interi random
void stampa_matrice (int matrice[][100], int lr, int lc); //dichiarazione funzione stampa matrice[lr][lc] di elementi interi
int ricerca_ottimizzata (int matrice[][100], int elemento); //dichiarazione funzione ricerca ottimizzata 
main()
{
	system ("color 1F");
	cout<<"Caricamento, stampa e ricerca ottimizzata di una matrice [lr][lc] "<<endl;
	cout<<"Quante righe vuoi che abbia la nostra matrice? ";
	cin>>lr; //inserimento quantità delle righe
	cout<<"E le colonne? ";
	cin>>lc; //inserimento quantità delle colonne
	do
	{
		cout<<"1. Inserimento manuale (da tastiera) "<<endl;
		cout<<"2. Inserimento random (generato dalle funzioni srand e rand) "<<endl;
		cout<<"Scelta: ";
		cin>>scelta; //inserimento scelta fra caricamento di elementi interi inseriti da tastiera o generati in modo casuale
		if (scelta<1 or scelta>2)
		{
			cout<<"Operazione non disponibile "<<endl;
		}
	}
	while (scelta<1 or scelta>2); //tale ciclo (do-while) si ripeterà fino a quando verrà inserito un valore minore di 1 e maggiore di 2
	if (scelta==1)
	{
		system ("cls");
		caricamento_matrice (matrice,lr,lc); //chiamata funzione caricamento matrice (inserimento da tastiera)
		cout<<endl;
		stampa_matrice (matrice,lr,lc); //chiamata funzione stampa matrice
		cout<<endl;
		cout<<"Inserire elemento da ricercare: ";
		cin>>elemento; //inserimento elemento da ricercare
		ricerca=ricerca_ottimizzata (matrice,elemento); //chiamata di funzione ricerca ottimizzata
		if (ricerca==1)
		{
			cout<<"L'elemento "<<elemento<<" \212 stato trovato "<<endl; //nel caso in cui il valore associato alla variabile ricerca sia uguale a 1, verrà stampato il
																		//seguente messaggio: "elemento trovato "
		}
		else
		{
			cout<<"L'elemento "<<elemento<<" non \212 stato trovato "<<endl; //nel caso contrario, ovvero se il valore associato alla variabile ricerca non sia uguale
																			//a 1, verrà stampato il seguente messaggio: "elemento non trovato "
		}
	}
	else
	{
		system ("cls");
		caricamento1_matrice (matrice,lr,lc); //chiamata funzione caricamento matrice (inserimento random)
		cout<<endl;
		stampa_matrice (matrice,lr,lc); //chiamata funzione stampa matrice
		cout<<endl;
		cout<<"Inserire elemento da ricercare: ";
		cin>>elemento; //inserimento elemento da ricercare
		ricerca=ricerca_ottimizzata (matrice,elemento); //chiamata funzione ricerca ottimizzata
		if (ricerca==1)
		{
			cout<<"L'elemento "<<elemento<<" \212 stato trovato "<<endl; //nel caso in cui il valore associato alla variabile ricerca sia uguale a 1, verrà stampato il 
																		//seguente messaggio: "elemento trovato"
		}
		else
		{
			cout<<"L'elemento "<<elemento<<" non \212 stato trovato "<<endl; //nel caso contario, ovvero se il valore associato alla variabile ricerca non sia uguale a 1,
																			//verrà stampato il seguente messaggio: "elemento non trovato"
		}
	}
}
void caricamento_matrice (int matrice[][100], int lr, int lc)//definizione funzione caricamento matrice[lr][lc] di elementi interi inseriti da tastiera
{
	for (int i=0;i<lr;i++) //primo ciclo for che permette di scorrere l'ipotetico vettore indicante le righe
	{
		for (int j=0;j<lc;j++) //secondo ciclo for che permette di scorrere l'ipotetico vettore indicante le colonne
		{
			cout<<"Inserire valore nella posizione ["<<i<<"]["<<j<<"]: ";
			cin>>matrice[i][j]; //effettivo inserimento all'interno della matrice
		}
	}
}
void caricamento1_matrice (int matrice[][100], int lr, int lc) //definizione funzione caricamento matrice[lr][lc] di elementi interi random
{
	for (int i=0;i<lr;i++) //primo ciclo for che permette di scorrere l'ipotetico vettore indicante le righe
	{
		for (int j=0;j<lc;j++) //secondo ciclo che permette di scorrere l'ipotetico vettore indicante le colonne
		{
			matrice[i][j]=1+rand()%100; //questa stringa di codice permette di memorizzare i valori generati dalla funzione rand nella matrice stessa
		}
	}
}	
void stampa_matrice (int matrice[][100], int lr, int lc) //definizione funzione stampa matrice[lr][lc] di elementi interi
{
	for (int i=0;i<lr;i++) //primo ciclo for che permette di scorrere l'ipotetico vettore indicante le righe
	{
		for (int j=0;j<lc;j++) //secondo ciclo for che permette di scorrere l'ipotetico vettore indicante le colonne
		{
			cout<<"Nella posizione ["<<i<<"]["<<j<<"] \212 presente il valore: "<<matrice[i][j]<<endl; //stampa della matrice
		}
	}
}
int ricerca_ottimizzata (int matrice[][100], int elemento) //definizione funzione ricerca ottimizzata
{
	for (int i=0;i<lr;i++) //primo ciclo for che permette di scorrere l'ipotetico vettore indicante le righe
	{
		for (int j=0;j<lc;j++) //secondo ciclo che permette di scorrere l'ipotetico vettore indicante le colonne
		{
			if (matrice[i][j]==elemento)
			{
				return 1; //nel caso in cui l'elemento corrente della nostra matrice sia uguale all'elemento inserito da tastiera per la ricerca, il valore di ritorno 
						 //sarà 1
			}
			else
			{
				return -1; //nel caso in cui l'elmento corrente della nostra matrice non sia uguale all'elemento inserito da tastiera per la ricerca, il valore di ritorno
						  //sarà -1
			}
		}
	}
}
