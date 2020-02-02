//Primo programma dell'utilizzo dei file con la programmazione in C++
#include <iostream>
#include <cstdlib>
#include <fstream>
using namespace std;
main()
{
	//comandi principali per la lettura di un file
	// write=scrivere; read=leggere; append=aggiungere contenuto al file di testo
	
	FILE*fileTesto; //dichiarazione del puntatore che punta alla locazione di memoria di file
	fileTesto= fopen ("testo.txt","w"); //questo comando permette di aprire un semplice file di testo, mentre invece il comando write permtte 
									  //di scrivere all'interno di quel file
	char carattere='a'; //dichiarazione della variabile "carattere" di tipo char
	for (int i=0;i<26;i++)
	{
		fputc (carattere+i,fileTesto) ; // il comando fputc ("filePutCharacter") permette di inserire una serie
									  //carattere all'interno del file di testo e facendo +1 si va al carattere successivo della codifica 
									  //ASCII e va al carattere successivo;
		cout<<carattere;
									  
	}
	fclose (fileTesto); //il comando fclose ("fileClose") permette la chiusura di un file di testo
}
