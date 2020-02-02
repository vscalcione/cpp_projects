/* Si crei un programma in c++ dove, dopo attraverso la funzione srand e rand, si generi un valore casuale e lo si stampi a video. Inoltre, si chieda anche se se ne vuole 
   generare un'altro oppure no
*/
#include <iostream> //libreria che permette di utilizzare i comandi "cin" e "cout"
#include <cstdlib> 
#include <time.h> //libreria che permette di utilizzare i comandi "srand" e "rand"
#include <string.h> //libreria che permette di utilizzare tutti i comandi che lavorano con le stringhe ("strcpy","strcmp")
using namespace std;
int n; //dichiarazione variabile nella quale verrà memorizzato il valore casuale
char scelta[2],si[]="si",no[]="no"; //dichiarazione stringa per un'ulteriore inserimento
main()
{
	system ("color 1F");
	srand (time(NULL)); //inizializzazione della funzione srand
	cout<<"Generare valori casuali attraverso la funzione srand "<<endl<<endl;
	do
	{
		n=1+rand()%100; //calcolo dell'effettivo valore casuale
		cout<<endl;
		cout<<"Il numero generato dalla funzione srand \212 "<<n<<endl; //stampa del valore appena generato
		cout<<"Vuoi generare un'altro numero?: ";
		cin>>scelta; //inserimento della nostra scelta
		if (strcmp(scelta,no)==0)
		{
			break; //nel caso in cui, la scelta digitata sia stata "no", il programma arriva alla fine
		}
	}
	while (strcmp (scelta,si)==0); //nel caso in cui la nostra scelta digitata sia stata "si", si ripete l'operazione di calcolo di un altro valore casuale
}
