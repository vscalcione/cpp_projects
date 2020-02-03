#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;
int numero,valore1,valore2,scelta,base,esponente,pr;
int f,scelta1;
int fattoriale (int numero);
int addendiale (int numero);
int prodotto_ricorsivo (int valore1, int valore2);
int potenza_ricorsiva (int base, int esponente);
main()
{
	system ("color 4F");
	cout<<" Programma recursion "<<endl<<endl;
	do
	{
		cout<<"1. Fattoriale di n"<<endl;
		cout<<"2. Addendiale di n"<<endl;
		cout<<"3. Prodotto ricorsivo "<<endl;
		cout<<"4. Potenza ricorsiva "<<endl<<endl;
		cout<<"Scelta: ";
		cin>>scelta;
		if (scelta<1 or scelta>4)
		{
			cout<<" Operazione non disponibile "<<endl;
		}
	}
	while (scelta<1 or scelta>4);
	if (scelta==1)
	{
		system ("cls");
		cout<<" Fattoriale di n"<<endl;
		cout<<" Inserire valore: ";
		cin>>numero;
		f=fattoriale (numero);
		cout<<" Fattoriale di "<<numero<<": "<<f<<endl;	
	}
	if (scelta==2)
	{
		system ("cls");
		cout<<" Addendiale "<<endl;
		cout<<" Inserire valore: ";
		cin>>numero;
		int a;
		a=addendiale (numero);
		cout<<" Addendiale di "<<numero<<": "<<a<<endl;
	}
	if (scelta==3)
	{
		system ("cls");
		cout<<" Prodotto Ricorsivo "<<endl;
		cout<<" Inserire valore: ";
		cin>>valore1;
		cout<<" Inserire valore: ";
		cin>>valore2;
		int p;
		p=prodotto_ricorsivo (valore1,valore2);
		cout<<" Prodotto ricorsivo: "<<p<<endl;
	}
	if (scelta==4)
	{
		system ("cls");
		cout<<" Potenza ricorsiva "<<endl<<endl;
		do
		{
			cout<<"1. Potenza ricorsiva con base 2"<<endl;
			cout<<"2. Potenza ricorsiva generalizzata"<<endl<<endl;
			cout<<"Scelta: ";
			cin>>scelta1;
			if (scelta1<1 or scelta1>2)
			{
				cout<<" Operazione non disponibile "<<endl;
			}
		}
		while (scelta1<1 or scelta1>2);
		if (scelta1==1)
		{
			system ("cls");
			cout<<" Potenza ricorsiva con base 2 ed esponente inserito da tastiera "<<endl<<endl;
			base=2;
			cout<<" Inserire esponente della potenza in base: "<<base<<": ";
			cin>>esponente;
			pr=potenza_ricorsiva (base,esponente);
			cout<<" La potenza di "<<base<<" elevato a "<<esponente<<" \212: "<<pr<<endl;	
		}
		if (scelta1==2)
		{
			system ("cls");
			cout<<" Potenza ricorsiva con base ed esponente inserito da tastiera "<<endl<<endl;
			cout<<" Inserire la base: ";
			cin>>base;
			cout<<" Inserire esponente: ";
			cin>>esponente;
			pr=potenza_ricorsiva (base,esponente);
			cout<<" La potenza di  "<<base<<" elevato a "<<esponente<<": "<<pr<<endl;
		}

	}
}
int fattoriale (int numero)
{
	int y;
	if (numero==0)
	{
		return 1;
	}
	else
	{
		y=numero*fattoriale (numero-1);
	}
	return y;
}
int addendiale (int numero)
{
	int x;
	if (numero==0)
	{
		return 0;
	}
	else
	{
		x=numero+addendiale (numero-1);
	}
	return x;
}
int prodotto_ricorsivo (int valore1, int valore2)
{
	int k;
	if (valore1==0 or valore2==0)
	{
		return 0;
	}
	else
	{
		k=valore1+prodotto_ricorsivo (valore1,valore2-1);
	}
	return k;
}
int potenza_ricorsiva (int base, int esponente)
{
	int j;
	if (esponente<=0)
	{
		return 1;
	}
	else
	{
		j=base*potenza_ricorsiva (base,esponente-1);
	}
	return j;
}
