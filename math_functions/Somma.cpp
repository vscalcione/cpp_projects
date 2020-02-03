#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int sum (int a, int b);
int a,b,sum;
main()
{
	system ("color 1F");
	cout<<"Somma fra 2 valori "<<endl;
	cout<<"Inserire a ";
	cin>>a;
	cout<<"Inserire b ";
	cin>>b;
	sum=somma (a,b);
	cout<<"Somma: "<<sum<<endl;
}
int somma (int a, int b)
{
	int x;
	x=a+b;
	return x;
}
