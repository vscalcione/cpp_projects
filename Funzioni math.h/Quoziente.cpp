#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int a,b,quoz;
int quoziente (int a, int b);
main()
{
	system ("color 1F");
	cout<<"Quoziente fra 2 numeri "<<endl;
	cout<<"Inserire a ";
	cin>>a;
	cout<<"Inserire b ";
	cin>>b;
	quoz=quoziente (a,b);
	cout<<"Quoziente fra "<<a<<" e "<<b<<": "<<quoz<<endl;
}
int quoziente (int a, int b)
{
	if (b==0 or a==0) 
	{
		return 0;
	}
	else
	{
		int q;
		q=a/b; 
		return q; 
	}
}

