#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int fatt,value;
int fattoriale (int numero);
main()
{
	system ("color 1F");
	cout<<"Fattoriale di un value "<<endl;
	cout<<"Inserire value del quale si vuole calcolare il fattoriale: ";
	cin >> value;
	fatt=fattoriale (value);
	cout << "Fattoriale di " << value << ": " << fatt << endl;
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

