/* Si crei un codice in cpp dove, dopo aver inserito un valore da tastiera, si calcoli la sua somma ricorsiva, attraverso una funzione apposita con la seguente sintassi:
int somma_ricorsiva (int numero)
*/
#include <iostream> //libreria che permette di utilizzare i comandi "cin" e "cout"
#include <cstdlib>
#include <math.h> //libreria che permette di utilizzare tutti i comandi con calcolo matematico
using namespace std;
int numero,somma_ricorsiva; 
int addendiale (int numero); //dichiarazione funzione che calcola la somma ricorsiva
main()
{
	cout<<"Somma ricorsiva di un numero inserito da tastiera "<<endl;
	cout<<"Inserire valore: ";
	cin>>numero; //inserimento del valore di cui si andrà a calcolare la somma ricorsiva
	somma_ricorsiva=addendiale (numero); //chiamata di funzione del calcolo somma ricorsiva
	cout<<"La somma ricorsiva del numero: "<<numero<<" \212: "<<somma_ricorsiva; //stampa del valore a video
}
int addendiale (int numero)
{
	int y;
	if (numero==0)
	{
		return 0; //se il valore inserito è uguale a 0, il nostro valore di ritorno stampato a video sarà 0
	}
	else
	{
		y=numero+addendiale (numero-1); //se invece il valore inserito è diverso da 0, la sintassi del calcolo della somma ricorsiva sarà (numero+(numero-1))
	}
	return y;
}
