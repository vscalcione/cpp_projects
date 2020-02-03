#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int fatt,numero;
int fattoriale (int numero);
main()
{
	system ("color 1F");
	cout<<"Fattoriale di un numero "<<endl;
	cout<<"Inserire numero del quale si vuole calcolare il fattoriale: ";
	cin>>numero;
	fatt=fattoriale (numero);
	cout<<"Fattoriale di "<<numero<<": "<<fatt<<endl;
}
int fattoriale (int numero)
{
	int j;
	if (numero==0)
	{
		return 1;
	}
	else
	{
		j=numero*fattoriale (numero-1); 
	}
	return j;
}

