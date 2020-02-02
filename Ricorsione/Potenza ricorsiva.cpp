/* Si crei un codice cpp in cui, dato 2 variabili interi indicati la base e l'esponente, si calcoli la potenza utilizzando tali variabili (base=base_potenza; 
   esp=esponente_potenza) attraverso una funzione ricorsiva con la seguente sintassi: int potenza (int base, int esp)
*/
#include <iostream> //libreria che permette di utilizzare i comandi "cin" e "cout"
#include <cstdlib>
#include <math.h> //libreria che permette di utilizzare i comandi con calcoli matematici
using namespace std;
int base,esp,pot;
int potenza (int base, int esp); //dichiarazione funzione di calcolo della potenza ricorsiva
main()
{
	cout<<"Calcolo ricorsivo di una potenza "<<endl;
	cout<<"Base: ";
	cin>>base; //inserimento della base
	cout<<"Esponente: ";
	cin>>esp; //inserimento dell'esponente
	pot=potenza (base,esp); //chiamata di funzione del calcolo potenza ricorsiva
	cout<<"La potenza di "<<base<<"elevato a "<<esp<<" \212: "<<pot<<endl;
}
int potenza (int base, int esp)
{
	int j;
	if (esp<=0)
	{
		return 1; //se l'esponente inserito è uguale a 0, il valore associata alla potenza è 1
	}
	else
	{
		j=base*potenza (base,esp-1); //nel caso in cui l'esponente inserito sia diverso da 0, il calcolo avrà la seguente sintassi: (base*(base,esp-1))
	}
	return j;
}
