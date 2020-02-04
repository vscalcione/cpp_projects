#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int quadrato,numero;
int quadrato_numero (int numero);
main()
{
	system ("color 1F");
	cout<<"Quadrato di un numero "<<endl;
	cout<<"Inserire valore da elevare al quadrato: ";
	cin>>numero;
	quadrato=quadrato_numero (numero);
	cout<<"Quadrato di "<<numero<<": "<<quadrato<<endl;
}
int quadrato_numero (int numero)
{
	int x;
	x=numero*numero;
	return x;
}
