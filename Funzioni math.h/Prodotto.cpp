#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int prodotto (int a, int b);
int a,b,prod;
main()
{
	system ("color 1F");
	cout<<"Prodotto fra 2 valori "<<endl;
	cout<<"Inserire a ";
	cin>>a;
	cout<<"Inserire b ";
	cin>>b;
	prod=prodotto (a,b);
	cout<<"Prodotto: "<<prod<<endl;
}
int prodotto (int a, int b)
{
	int x;
	x=a*b;
	return x;
}

