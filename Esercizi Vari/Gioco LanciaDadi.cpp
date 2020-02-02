#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>
#include <string.h>
using namespace std;
int n1,n2,a,b,x,y;
char start[2],go[]="go",scelta[2], si[]="si",no[]="no";
int primo_dado (int x);
int secondo_dado (int y);
main()
{
	system ("color 1F");
	cout<<"Gioco: Lancio dadi "<<endl;
	do
	{
		do
		{
			cout<<"Digitare GO per tirare i dadi "<<endl;
			cin>>start;
		}
		while (strcmp(go,start)!=0);
		a=primo_dado (x);
		b=secondo_dado (y);
		cout<<"Il risultato del tuo lancio \212: "<<a+b<<endl;
		cout<<"Vuoi fare un'altro tiro?: ";
		cin>>scelta;
		if (strcmp(scelta,no)==0)
		{
			break;
		}
	}
	while (strcmp(scelta,si)==0);
}
int primo_dado (int x)
{
	cout<<"Primo dado: "<<endl;
	srand (time(NULL));
	x=1+12+rand()/32767;
	x=1+12+rand()/32767;
	cout<<x<<endl;
	return x;
}
int secondo_dado (int y)
{
	cout<<"Secondo dado: "<<endl;
	srand (time(NULL));
	y=1+12+rand()/32767;
	y=1+12+rand()/32767;
	return y;
}
