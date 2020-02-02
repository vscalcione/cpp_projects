#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int potenza (int base, int esponente);
int pot,base,esponente;
main()
{
	system ("color 1F");
	cout<<"Potenza "<<endl;
	cout<<"Inserire base: ";
	cin>>base;
	cout<<"Inserire esponente: ";
	cin>>esponente;
	pot=potenza (base,esponente);
	cout<<"Potenza di "<<base<<" elevato a "<<esponente<<": "<<pot<<endl;
}
int potenza (int base, int esponente)
{
	int x;
	if (esponente==0)
	{
		return 1;
	}
	else
	{
		x=base*potenza (base,esponente-1);
	}
	return x;
}
