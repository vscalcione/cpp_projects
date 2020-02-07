/* Si crei un codice.cpp dove si calcoli il fattoriale di un numero inserito da tastiera attraverso una funzione ricorsiva con la seguente sintassi:
int fattoriale (int numero)
*/
#include <iostream> //libreria che permette di utilizzare i comandi cin e cout
#include <cstdlib>
#include <math.h> //libreria che permette di utilizzare tutte le funzioni che lavorano con calcoli matematici
using namespace std;
int numero,fattoriale,risposta;
int fattoriale_numero (int numero); //dichiarazione funzione che permette di calcolare il nostro fattoriale
main()
{
	system ("color 1F");
	cout<<"Fattoriale di un numero inserito da tastiera "<<endl<<endl;
	do{
		system ("cls");
		cout<<"Inserire numero di cui bisogna calcolarne il fattoriale ";
		cin>>numero; //inserimento del numero di cui si dovrà calcolare il fattoriale
		fattoriale=fattoriale_numero (numero); //chiamata di funzione del calcolo del fattoriale
		cout<<endl;
		cout<<"Fattoriale di "<<numero<<" \212: "<<fattoriale<<endl;//stampa del fattoriale
		cout<<"L'utente vuole fare un'altra operazione? 1=si, 0=no ";
		cin>>risposta;
		if(risposta!=1 or risposta==0){
			break;
		}
	}
	while(risposta==1);
}
int fattoriale_numero (int numero) //definizione della funzione che permette di calcolare il fattoriale
{
	int x;
	if (numero==0)
	{
		return 1; //se il numero è uguale a 0, il valore associato al fattoriale sarà 0
	}
	else
	{
		x=numero*fattoriale_numero (numero-1); //nel caso in cui il numero inserito sia diverso da 0, il calcolo sarà (numero*(numero-1))
	}
	return x;
}

