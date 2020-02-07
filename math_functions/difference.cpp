#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
float differenza (int a, int b);
int a,b;
float diff;
main()
{
	system ("color 1F");
	cout<<"Differenza fra 2 valori "<<endl;
	cout<<"Inserire a ";
	cin>>a;
	cout<<"Inserire b ";
	cin>>b;
	diff=differenza (a,b);
	cout<<"Differenza: "<<diff<<endl;
}
float differenza (int a, int b)
{
	float x;
	x=a-b;
	return x;
}
