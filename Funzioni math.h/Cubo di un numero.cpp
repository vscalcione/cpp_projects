#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int cubo (int numero);
int numero,cubo_numero;
main()
{
	system ("color 1F");
	cout<<"Cubo di un numero "<<endl;
	cout<<"Inserire numero da elevare al cubo ";
	cin>>numero;
	cubo_numero=cubo (numero);
	cout<<"Cubo di "<<numero<<": "<<cubo_numero<<endl;
}
int cubo (int numero)
{
	int x;
	x=numero*numero*numero;
	return x;
}
