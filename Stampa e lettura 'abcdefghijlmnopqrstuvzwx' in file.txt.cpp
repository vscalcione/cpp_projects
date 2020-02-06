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
	fileTesto= fopen ("testo.txt","r"); //questo comando permette di aprire un semplice file di testo, mentre invece il comando write permtte 
									  //di scrivere all'interno di quel file
	char carattere='a'; //dichiarazione della variabile "carattere" di tipo char
	while (carattere!=EOF) //il comando "EOF" (o anche chiamato End of file), permette di arrivare alla fine del file di testo
	{
		carattere=fgetc (fileTesto);
		cout<<carattere;
	}
	fclose (fileTesto); //il comando fclose ("fileClose") permette la chiusura di un file di testo
}
