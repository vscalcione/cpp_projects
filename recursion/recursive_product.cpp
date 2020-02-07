#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>
using namespace std;
int valore1,valore2,prodotto;
int prodotto_ricorsivo (int valore1, int valore2);
main()
{
	system ("color 1F");
	cout<<"Prodotto ricorsivo "<<endl;
	cout<<"Inserire primo valore: ";
	cin>>valore1;
	cout<<"Inserire secondo valore: ";
	cin>>valore2;
	prodotto=prodotto_ricorsivo (valore1,valore2);
	cout<<endl;
	cout<<"Prodotto ricorsivo fra "<<valore1<<" e "<<valore2<<" \212: "<<prodotto<<endl;	
}
int prodotto_ricorsivo (int valore1, int valore2)
{
	int k;
	if (valore1==0 or valore2==0)
	{
		return 0;
	}
	else
	{
		k=valore1+prodotto_ricorsivo (valore1,valore2-1);
	}
	return k;
}
