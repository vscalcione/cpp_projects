#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
void stampa_valori (int *a, int *b);
int a,b;
main()
{
	cout<<"Stampa variabile per valore e indirizzo "<<endl;
	cout<<"Inserire valore: ";
	cin>>a;
	cout<<"Inserire valore: ";
	cin>>b;
	cout<<endl;
	stampa_valori (&a,&b);
}
void stampa_valori (int *a, int *b)
{
	cout<<"Il primo valore \212 "<<*a<<" con il seguente indirizzo: "<<&a<<endl;
	cout<<"Il secondo valore \212 "<<*b<<" con il seguente indirizzo: "<<&b<<endl;
}

