/* Si crei un programma in c++, dove dopo aver caricato 4 vettori di n elementi interi, si calcoli la media di ognuno e la si stampi 
attraverso un apposita funzione che calcoli, appunto, la propria media
*/
#include <iostream> //libreria che permette di utilizzare i comandi "cin" e "cout"
#include <cstdlib> 
#include <math.h> //libreria che permette di utilizzare tutti le istruzioni che necessitano di calcoli di tipo matematici
#include <time.h> //libreria che permette l'utilizzo delle funzion srand e rand (funzione generatrice di valori random)
using namespace std;
int vettore1[10],vettore2[10],vettore3[10],vettore4[10],n; //dichiarazione dei vari vettori e della loro lunghezza
float media1,media2,media3,media4;
void caricamento_vettore (int vettore[], int n); //dichiarazione funzione di caricamento vettore di n elementi interi
float media_vettore (int v[], int n); //dichiarazione funzione di calcolo media di n elementi interi
main()
{
	system ("color 1F");
	srand (time(NULL)); //inizializzazione della funzione srand
	cout<<" Caricamento di 4 vettori e stampa delle medie di ognuno "<<endl<<endl;
	cout<<"Inserire quantita' elementi dei nostri vettori: ";
	cin>>n; //inserimento quantità elementi dei 4 vettori
	caricamento_vettore (vettore1,n); //chiamata di funzione caricamento vettori di n elementi interi random (x4 volte)
	caricamento_vettore (vettore2,n);
	caricamento_vettore (vettore3,n);
	caricamento_vettore (vettore4,n);
	media1=media_vettore (vettore1,n); //chiamata di funzione calcolo media di n elementi interi random (x4 volte)
	media2=media_vettore (vettore2,n);
	media3=media_vettore (vettore3,n);
	media4=media_vettore (vettore4,n);
	cout<<endl;
	cout<<"La media del primo vettore di "<<n<<" elementi \212: "<<media1<<endl; //stampa delle medie appena calcolate
	cout<<"La media del secondo vettore di "<<n<<" elementi \212: "<<media2<<endl;
	cout<<"La media del terzo vettore di "<<n<<" elementi \212: "<<media3<<endl;
	cout<<"La media del quarto vettore di "<<n<<" elementi \212: "<<media4<<endl;
}
void caricamento_vettore (int vettore[], int n) //definizione funzione caricamento vettori di n elementi interi random
{
	cout<<endl;
	for (int i=0;i<n;i++) //ciclo for che permette di scorrere l'intero vettore
	{
		vettore[i]=1+rand()%100; 
		cout<<"L'elemento nella posizione "<<i<<" \212: "<<vettore[i]<<endl; //stampa a video dei valori generati e memorizzati all'interno del 
																			//vettore stesso
	}
}
float media_vettore (int vettore[], int n) //definizione funzione calcolo media di n elementi interi random
{
	int s=0; //dichiarazione variabile accumulatrice (somma)
	float m; //dichiarazione variabile calcolo media
	for (int i=0;i<n;i++) //ciclo for che permette di scorrere l'intero vettore
	{
		s=s+vettore[i]; //calcolo somma
	}
	m=(float)s/n; //calcolo media
	return m;
}
