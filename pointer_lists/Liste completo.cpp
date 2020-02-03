/* Si crei un progetto.cpp nel quali si eseguano le principali operazioni con le liste, attraverso le apposite funzioni (caricamento,stampa,
cancella nodo, aggiungi nodo, sostituisci nodo, ricerca elemento, ricerca massimo e minimo, raddoppia nodi di valore pari e raddoppia nodi
di valore dispari)
*/
#include <iostream> //libreria che permette l'utilizzo dei comandi di input/output ("cin" e "cout")
#include <cstdlib>
#include <time.h> //libreria che permette l'utilizzo dei comandi per generare valori random ("srand" e "rand")
using namespace std;
struct lista //dichiarazione della struct, struttura dati dinamica al cui interno troviamo un dato intero
{
	int info;
	lista*next;
};
lista*il=NULL;
int risposta,scelta,numero,posizione,elemento,massimo,minimo,ric_elemento; //dichiarazione delle variabili necessarie
void caricamento_lista (lista*&il); //dichiarazione funzione caricamento lista
void stampa_lista (lista*il); //dichiarazione funione stampa lista
void cancella_nodo (lista*il, int numero); //dichiarazione funzione cancella nodo
void aggiungi_coda (lista*il, int elemento); //dichiarazione funzione aggiungi nodo
void sostituisci_nodo (lista*il, int posizione); //dichiarazione funzione sostituisci nodo
void scambio_lista (lista*il); //dichiarazione funzione scambia elementi lista (di posizione)
void ricerca_elemento (lista*il, int elemento_ricerca); //dichiarazione funzione ricerca elemento
int ricerca_massimo (lista*il); //dichiarazione funzione ricerca massimo
int ricerca_minimo (lista*il); //dichiarazione funzione ricerca minimo
void raddoppia_pari (lista*il); //dichiarazione funzione raddoppia elementi pari della lista
void raddoppia_dispari (lista*il); //dichiarazione funzione raddoppia elementi dispari della lista
main()
{
	system ("color 1F");
	srand (time(NULL));
	do //primo ciclo do-while per far ripetere il menù delle operazioni eseguibili in modo da poter eseguire anche più di una sola 
	  //operazione
	{
		system ("cls");
		do //secondo ciclo do-while che ripete il menù delle operazioni 
		{
			cout<<"1. Caricamento e stampa "<<endl;
			cout<<"2. Cancella nodo in testa ed in coda "<<endl;
			cout<<"3. Aggiungi nodo in testa ed in coda "<<endl;
			cout<<"4. Sostituisci nodo "<<endl;
			cout<<"5. Scambio nodi "<<endl;
			cout<<"6. Ricerca elemento "<<endl;
			cout<<"7. Ricerca massimo e minimo elemento "<<endl;
			cout<<"8. Raddoppia elementi pari "<<endl;
			cout<<"9. Raddoppia elementi dispari "<<endl;
			cout<<"Scelta: ";
			cin>>scelta; //inserimento valori intero associato ad una tipologia di operazione
			if (scelta<1 or scelta>9) //nel caso in cui, il valore intero inserito non sia compreso nel range definito dall'if, verrà 
			{	//stampato un messaggio di errore, ciclando l'inserimento
				cout<<"Operazione non disponibile "<<endl;
			}
		}	
		while(scelta<1 or scelta>9);
		caricamento_lista (il); //chiamata funzione caricamento lista
		if (scelta==1) //nel caso in cui l'elemento inserito sia pari a 1
		{
			system ("cls");
			cout<<"La tua lista "<<endl;
			stampa_lista (il); //chiamata funzione stampa lista
		}
		if (scelta==2) //nel caso in cui l'elemento inserito sia pari a 2
		{
			system ("cls");
			cout<<"Prima la tua lista era: "<<endl;
			stampa_lista (il); //chiamata funzione stampa lista
			cout<<"Inserisci numero: ";
			cin>>numero; //inserimento valore numerico (posizione elemento da cancellare)
			cancella_nodo (il,numero); //chiamata funzione cancella nodo
			cout<<"Ora la tua lista \212: "<<endl;
			stampa_lista (il); //chiamata funzione stampa lista
		}
		if (scelta==3) //nel caso in cui l'elemento inserito sia 3
		{
			system ("cls");
			cout<<"Prima la tua lista era: "<<endl;
			stampa_lista (il); //chiamata funzione stampa lista
			cout<<"Inserire elemento da aggiungere: ";
			cin>>elemento; //inserimento valore numerico (posizione elemento da aggiungere)
			aggiungi_coda (il,elemento); //chiamata funzione aggiungi_coda
			cout<<"Ora la tua lista \212: "<<endl;
			stampa_lista (il); //chiamata funzione stampa lista
		}
		if (scelta==4) //nel caso in cui l'elemento inserito sia pari a 4
		{
			system ("cls");
			cout<<"Prima la tua lista era: "<<endl;
			stampa_lista (il); //chiamata funzione stampa lista
			cout<<"Inserire posizione dell'elemento da sostituire: ";
			cin>>posizione; //inserimento valore numerico (posizione del nodo da sostituire)
			sostituisci_nodo (il,posizione);
			cout<<"Ora la tua lista \212: "<<endl;
			stampa_lista (il); //chimata funzione stampa lista
		}
		if (scelta==5) //nel caso in cui l'elemento inserito sia pari a 5
		{
			system ("cls");
			cout<<"Prima la tua lista era: "<<endl;
			stampa_lista (il); //chiamata funzione stampa lista
			scambio_lista (il); //chiamata funzione scambio elementi lista
			cout<<"Ora la tua lista \212: "<<endl;
			stampa_lista (il); //chiamata funzione stampa lista
		}
		if (scelta==6) //nel caso in cui l'elemento inserito sia pari a 6
		{
			system ("cls");
			cout<<"Prima la tua lista era: "<<endl;
			stampa_lista (il); //chiamata funzione stampa lista
			cout<<"Inserire elemento da ricercare: ";
			cin>>elemento; //inserimento elemento numerico (elemento da ricercare nella lista)
			ricerca_elemento (il,elemento); //chiamata funzione ricerca elemento
		}
		if (scelta==7) //nel caso in cui l'elemento inserito sia pari a 7
		{
			system ("cls");
			cout<<"La tua lista "<<endl;
			stampa_lista (il); //chiamata funzione stampa lista
			massimo=ricerca_massimo (il); //chiamata funzione ricerca massimo
			minimo=ricerca_minimo (il); //chiatama funzione ricerca minimo
			cout<<"Massimo elemento: "<<massimo<<endl; 
			cout<<"Minimo elemento: "<<minimo<<endl;
		}
		if (scelta==8) //nel caso in cui l'elemento inserito sia pari a 8
		{ 
			system ("cls");
			cout<<"Prima la tua lista era: "<<endl;
			stampa_lista (il); //chiamata funzione stampa lista
			raddoppia_pari (il); //chiamata funzione raddoppia elementi pari
			cout<<"Ora la tua lista \212: "<<endl;
			stampa_lista (il); //chiamata funzione stampa lista
		}
		if (scelta==9) //nel caso in cui l'elemento inserito sia pari a 9
		{
			system ("cls");
			cout<<"Prima la tua lista era: "<<endl;
			stampa_lista (il); //chiamata funzione stampa lista
			raddoppia_dispari (il); //chiamata funzione raddoppia elementi dispari
			cout<<"Ora la tua lista \212: "<<endl;
			stampa_lista (il); //chiamata funzione stampa lista
		}
		cout<<"L'utente vuole eseguire un'altra operazione? (1=si; 0=no) ";
		cin>>risposta; //inserimento valore numerico (nel caso in cui si voglia ripetere un'operazione)
		if (risposta==0)
		{
			break; //nel caso in cui il valore associato alla variabile "risposta" sia 0, uscirà dal ciclo
		}
	}
	while (risposta==1); //altrimenti ripeterà il ciclo fino a quando si inserirà un valore pari a 1
}
void caricamento_lista (lista*&il) //definizione funzione caricamento lista
{
	for (int i=0;i<20;i++)
	{
		lista*nuovo=new lista;
		nuovo->info=1+rand()%100;
		nuovo->next=il;
		il=nuovo;
	}
}
void stampa_lista (lista*il) //definizione funzione stampa lista
{
	lista*tmp=il;
	while (tmp!=NULL)
	{
		cout<<tmp->info<<endl;
		tmp=tmp->next;
	}
}
void cancella_nodo (lista*il, int numero) //definizione funzione cancella nodo
{
	if (numero==0)
	{
		lista*tmp=il;
		il=il->next;
		delete tmp;
	}
	else
	{
		lista*ilx=il;
		for (int i=0;i<numero;i++)
		{
			ilx=ilx->next;
			lista*tmp=ilx->next;
			ilx->next=ilx->next->next;
			delete tmp;
		}
	}
}
void aggiungi_coda (lista*il, int elemento) //definizione funzione aggiungi nodo in coda
{
	lista*tmp=il;
	while (il!=NULL)
	{
		tmp=il;
		il=il->next;
	}
	lista*nuovo=new lista;
	nuovo->info=elemento;
	nuovo->next=NULL;
	tmp->next=nuovo;
}
void sostituisci_nodo (lista*il, int posizione) //definizione funzione sostituisci nodo
{
	lista*tmp=il;
	while (tmp!=NULL)
	{
		if (il->info==posizione)
		{
			il->info=500;
			il=il->next;
		}
	}
}
void scambio_lista (lista*il) //definizione funzione scambio elementi lista
{
	int a;
	lista*ilx=il;
	lista*tmp=ilx;
	ilx=ilx->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next->next;
	a=tmp->info;
	tmp->info=ilx->info;
	ilx->info=a;
}
void ricerca_elemento (lista*il, int elemento_ricerca) //definizione funzione ricerca elemento
{
	lista*tmp=il;
	while (tmp!=NULL)
	{
		if (tmp->info==elemento_ricerca)
		{
			cout<<"Trovato "<<endl;
		}
		tmp=tmp->next;
	}
}
int ricerca_massimo (lista*il) //definizione funzione ricerca massimo
{
	int max=0;
	lista*tmp=il;
	while (tmp!=NULL)
	{
		if (tmp->info>max)
		{
			max=tmp->info;
		}
		tmp=tmp->next;
	}
	tmp=il;
	return max;
}
int ricerca_minimo (lista*il) //definizione funzione ricerca minimo
{
	int min=100;
	lista*tmp=il;
	while (tmp!=NULL)
	{
		if (tmp->info<min)
		{
			min=tmp->info;
		}
		tmp=tmp->next;
	}
	tmp=il;
	return min;
}
void raddoppia_pari (lista*il) //definizione funzione raddoppia pari
{
	for (int i=0;i<20;i++)
	{
		if (il->info%2==0)
		{
			il->info=il->info*2;
		}
		il=il->next;
	}
}
void raddoppia_dispari (lista*il) //definizione funzione raddoppia dispari
{
	for (int i=0;i<20;i++)
	{
		if (il->info%2!=0)
		{
			il->info=il->info*2;
		}
		il=il->next;
	}
}
