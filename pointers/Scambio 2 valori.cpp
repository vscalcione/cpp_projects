#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int a,b;
void scambio (int *a, int *b);
main()
{
	system ("color 1F");
	cout<<"Scambio 2 valori inseriti da tastiera "<<endl;
	cout<<endl;
	cout<<"Inserire primo valore: ";
	cin>>a;
	cout<<"Inserire secondo valore: ";
	cin>>b;
	scambio (&a,&b);
	cout<<"**********************************"<<endl;
	cout<<"Valori scambiati "<<endl;
	cout<<"Primo valore: "<<a<<endl;
	cout<<"Secondo valore: "<<b<<endl;
	cout<<"**********************************"<<endl;
}
void scambio (int *a, int *b)
{
	int tmp;
	tmp=*a;
	*a=*b;
	*b=tmp;
}
