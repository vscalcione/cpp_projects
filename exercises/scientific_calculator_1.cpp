/* Si crei un codice in c++ dove, si simuli il vero e proprio funzionamento di una calcolatrice scientifiche che possa eseguire le seguenti
   operazioni (somma,differenza,prodotto,quoziente,cubo,quadrato,fattoriale,potenza). Subito dopo aver eseguito un singolo calcolo, si 
   chieda se si vuoi eseguirne un'altra oppure no
*/
#include <iostream> //libreria che permette di utilizzare i comandi "cin" e "cout"
#include <cstdlib>
#include <math.h> //libreria che permette di utilizzare tutti i comandi che hanno un'elaborazione dati di tipo matematico
using namespace std;
int a,b,numero,sum,prod,quoz,cubo,quadrato,fatt,pot,base,esponente;
float diff;
int scelta,risposta;
int somma (int a, int b); //dichiarazione funzione calcolo somma
float differenza (int a, int b); //dichiarazione funzione calcolo differenza
int prodotto (int a, int b); //dichiarazione funzione calcolo prodotto
int quoziente (int a, int b); //dichiarazione funzione calcolo quoziente
int cubo_numero (int numero); //dichiarazione funzione calcolo cubo
int quadrato_numero (int numero); //dichiarazione funzione calcolo quadrato
int fattoriale (int numero); //dichiarazione funzione calcolo fattoriale
int potenza (int base, int esponente); //dichiarazione funzione calcolo potenza
main()
{
	system ("color 1F");
	cout<<"Calcolatrice scientifica "<<endl;
	do //primo ciclo do-while che permette di ripetere una determinata operazione di questa calcolatrice scientifica
	{
		do //secondo ciclo do-while che permette di ripetere il men? (elenco) delle possibili operazioni da poter eseguire
		{
			cout<<"1. Somma 2 valori "<<endl;
			cout<<"2. Differenza "<<endl;
			cout<<"3. Prodotto "<<endl;
			cout<<"4. Quoziente con resto "<<endl;
			cout<<"5. Cubo di n "<<endl;
			cout<<"6. Quadrato di n "<<endl;
			cout<<"7. Fattoriale di n "<<endl;
			cout<<"8. Potenza "<<endl;
			cin>>scelta; //inserimento della scelta
			if (scelta<1 or scelta>8)
			{
				cout<<"Operazione non disponibile "<<endl;
			}
		}
		while (scelta<1 or scelta>8); //il men? verr? ripetuto fino a quando verr? inserito un valore minore di 1 o maggiore di 8
		if (scelta==1)
		{
			system ("cls");
			cout<<"Somma 2 valori "<<endl;
			cout<<"Inserire a ";
			cin>>a;
			cout<<"Inserire b ";
			cin>>b;
			sum=somma (a,b);
			cout<<"Somma: "<<sum<<endl;
		}
		if (scelta==2)
		{
			system ("cls");
			cout<<"Differenza "<<endl;
			cout<<"Inserire a ";
			cin>>a;
			cout<<"Inserire b ";
			cin>>b;
			diff=differenza (a,b);
			cout<<"Differenza: "<<diff<<endl;
		}
		if (scelta==3)
		{
			system ("cls");
			cout<<"Prodotto "<<endl;
			cout<<"Inserire a ";
			cin>>a;
			cout<<"Inserire b ";
			cin>>b;
			prod=prodotto (a,b);
			cout<<"Prodotto: "<<prod<<endl;
		}
		if (scelta==4)
		{
			system ("cls");
			cout<<"Quoziente con resto "<<endl;
			cout<<"Inserire a ";
			cin>>a;
			cout<<"Inserire b ";
			cin>>b;
			quoz=quoziente (a,b);
			cout<<"Quoziente: "<<quoz<<endl;
		}
		if (scelta==5)
		{
			system ("cls");
			cout<<"Cubo di n "<<endl;
			cout<<"Inserire numero da elevare al cubo: ";
			cin>>numero;
			cubo=cubo_numero (numero);
			cout<<"Cubo di "<<numero<<":"<<cubo<<endl;
		}
		if (scelta==6)
		{
			system ("cls");
			cout<<"Quadrato di n "<<endl;
			cout<<"Inserire numero da elevare al quadrato: ";
			cin>>numero;
			quadrato=quadrato_numero (numero);
			cout<<"Quadrato di "<<numero<<":"<<quadrato<<endl;
		}
		if (scelta==7)
		{
			system ("cls");
			cout<<"Fattoriale di n "<<endl;
			cout<<"Inserire numero di cui si vuole calcolare il fattoriale: ";
			cin>>numero;
			fatt=fattoriale (numero);
			cout<<"Fattoriale di "<<numero<<":"<<fatt<<endl;
		}
		if (scelta==8)
		{
			system ("cls");
			cout<<"Potenza "<<endl;
			cout<<"Inserire base: ";
			cin>>base;
			cout<<"Inserire esponente: ";
			cin>>esponente;
			pot=potenza (base,esponente);
			cout<<"Potenza di "<<base<<"elevato a "<<esponente<<":"<<pot<<endl;
		}
		cout<<"Vuoi fare un'altra operazione? (1 si, 0 no) ";
		cin>>risposta;
		if (risposta==0)
		{
			break;
		}
	}
	while (risposta==1);
}
int somma (int a, int b) //definizione funzione calcolo somma
{
	int x;
	x=a+b;
	return x;
}
float differenza (int a, int b) //definizione funzione calcolo differenza
{
	float y;
	y=a-b;
	return y;
}
int prodotto (int a, int b) //definizione funzione calcolo prodotto
{
	int k;
	k=a*b;
	return k;
}
int quoziente (int a, int b) //definizione funzione calcolo quoziente
{
	if (b==0 or a==0) //se il primo/secondo valore inserito ? uguale a 0, verr? stampato il valore 0
	{
		return 0;
	}
	else
	{
		int q;
		q=a/b; //nel caso contrario, ovvero che il primo/secondo valore inserito ? diverso da 0, viene eseguito correttamente il calcolo del
		       //nostro quoziente
		return q; 
	}
}
int cubo_numero (int numero) //definizione funzione calcolo cubo
{
	int cub;
	cub=numero*numero*numero;
	return cub;
}
int quadrato_numero (int numero) //definizione funzione calcolo quadrato
{
	int quad;
	quad=numero*numero;
	return quad;
}
int fattoriale (int numero) //definizione funzione calcolo fattoriale
{
	int j;
	if (numero==0)
	{
		return 1; //se il numero inserito ? uguale a 0, verr?  stampato 11
	}
	else
	{
		j=numero*fattoriale (numero-1); //se invece, il nostro numero inserito ? maggiore di 0, ver? calcolato il fattoriale di tale numero
		                               //con la seguente sintassi (numero-(numero-1))
	}
	return j;
}
int potenza (int base, int esponente) //definizione funzione calcolo potenza
{
	int h; 
	if (esponente==0)
	{
		return 1; //nel caso in cui l'esponente inserito ? uguale a 0, si stamper? 1
	}
	else
	{
		h=base*potenza (base,esponente-1); //mentre invece, nel caso in cui l'esponente inserito ? maggiore di 0, verr? calcolata la nostra
		                                  //potenza
	}
	return h; 
}
