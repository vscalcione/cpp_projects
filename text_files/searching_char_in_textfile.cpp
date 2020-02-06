/* Si realizzi il codice.cpp in cui, dopo aver creato un file di testo ("file.txt"), al cui interno troviamo n caratteri ("a"), si inserisca un nuovo carattere da 
tastiera e si verifichi se tale carattere ? contenuto all'interno del file di testo. In caso affermativo si stampi il messaggio: "TROVATO" e si calcoli la propria 
occorrenza, ovvero il numero di volte che tale carattere ? presente nel file stesso
*/
#include <iostream> //libreria che permette l'utilizzo dei comandi "cin" e "cout"
#include <fstream> //libreria che permette l'utilizzo dei comandi che sfruttano la gestione dei file
#include <cstdlib>
#include <string.h> //libreria che permette l'utilizzo dei comandi che gestiscono le stringhe (strcmp e strcpy)
using namespace std;
char carattere,carattereUtente; //dichiarazione variabili di tipo char
int cont,a=0; //dichiarazione variabili di tipo int
main()
{
	system ("color 1F");
	cout<<"Gestione file in C++ "<<endl;
	FILE*fileTesto; //puntatore a fileTesto
	fileTesto=fopen ("testo.txt","w"); //il comando "fopen" permette di creare, aprire e scrivere all'interno del file.txt
	char carattere='a';
	cout<<endl;
	for (int i=0;i<26;i++)
	{
		fputc (carattere,fileTesto); //il comando "fputc" permette in inserire un determinato carattere nel file.txt
		cout<<carattere; //stampa del contenuto del file
	}
	cout<<endl;
	cout<<"Inserire carattere da ricercare all'interno del file.txt : ";
	cin>>carattereUtente; //inserimento carattere da ricercare
	for (int i=0;i<26;i++)
	{
		if (carattereUtente==carattere)
		{
			cout<<"TROVATO "; //nel caso in cui nella variabile "carattereUtente" sia contenuto un determinato carattere e tale sia uguale a quello inserito nel file.txt
							 //verr? stampato un messaggio di conferma e la posizione del carattere trovato
			a=i;
			cout<<"nella posizione "<<a<<endl;
			cont++;
		}
		else
		{
			cout<<"NON TROVATO "<<endl;
		}
	}
	cout<<"Il carattere "<<carattereUtente<<" \212 stato trovato "<<cont<<" volte "; //dopo viene stampato anche la sua occorrenza, attraverso una variabile incrementata
																				     //fino al termine del file stesso
	fclose (fileTesto); //il comando "fclose",invece, permette di chiudere e salvare le vaire operazioni eseguite sul file di testo.txt
}
