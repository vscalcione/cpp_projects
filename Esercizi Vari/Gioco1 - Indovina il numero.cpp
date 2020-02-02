#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;
int ins (int f);
int t,t1,i,a,c,d,rit,scelta;
main()
{
	system ("color 1F");
	cout<<" Gioco: Indovina il numero "<<endl;
	do
	{
		srand(time(NULL));
		a=rand ()%20+1;
		c=rand()% 15+1;
		d=rand()% 15+1;
		cout<<" Ok, hai 7 tentativi "<<endl<<endl;
		cout<<" Il numero da indovinare e' compreso fra "<<a-c<<" e "<<a+d<<endl;
		do
		{
			t=ins(t1);
			if(t!=a)
			{
				i++;
			}
			if(t==a)
			{
				cout<<" Complimenti, Utente1 ha completato un bel giochino!!! Ora vai a lavorare "<<endl;
				i=7;
			}
			if(a%2==0 and t%2==0 and t!=a)
			{
				cout<<" Il numero da indovinare e' pari ma non e' quello inserito "<<endl;
			}
			if(a%2==0 and t%2!=0)
			{
				cout<<" Il numero da indovinare e' un numero pari "<<endl;
			}
			if(a%2!=0 and t%2!=0 and t!=a)
			{
				cout<<" Il numero da indovinare e' un numero dispari ma non e' quello inserito "<<endl;
			}
			if(a%2!=0 and t%2==0)
			{
				cout<<" Il numero da indovinare e' un numero dispari "<<endl; 
			}
			if(a%5==0 and t%5!=0)
			{
				cout<<" Il numero da indovinare e' multiplo di 5 "<<endl;
			}
			if(a%5!=0 and t%5!=0)
			{
				cout<<" Il numero da indovinare non e' multiplo di 5 "<<endl;
			}
			if(a%5==0 and t%5==0 and t!=a)
			{
				cout<<" Il numero da indovinare e' multiplo di 5 ma non e' questo "<<endl;
			}
			if (t<a-c or t>a+d)
			{
				if(a%3==0 and t%3!=0)
				{
					cout<<" Il numero da indovinare e' multiplo di 3 "<<endl;
				}
				if(a%3!=0 and t%3!=0)
				{
					cout<<" Il numero da indovinare non e' multiplo di 3 "<<endl;
				}
				if(a%3==0 and t%3==0 and t!=a)
				{
					cout<<" Il numero e' multiplo di 3 ma non e' quello inserito "<<endl;
				}
			}
			if(t<a-c or t>a+d)
			{
				cout<<" Il numero e' compreso fra "<<a-c<<" e "<<a+d<<endl;
			}
		}
		while (i<7);
		cout<<" GAME OVER "<<endl;
		i=0;
		cout<<"Il numero da indovinare era :"<<a<<endl;
		do
		{
			cout<<" Vuoi fare un'altra partita?? Premi 0 se si oppure 1 se no ";
			cin>>rit;
			if(rit<0 or rit>1)
			{
				cout<<" ERRORE!!! Scelta non disponibile ";
			}
		}
		while (rit<0 or rit>1);
		if(rit==0)
		{
			break;
		}
	}
	while (rit==0);
}
int ins(int f)
{
   cout<<" Inserisci un numero: ";
   cin>>f;
   return f;
}
