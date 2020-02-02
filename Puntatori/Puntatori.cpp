#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
main()
{
	system("color 3A");
	int i=257;
	int *punt;
	cout<<&i<<endl;
	punt=&i;
	cout<<" Indirizzo di Memoria: "<<punt<<endl;
	cout<<" Valore puntato: "<<*punt<<endl;
	*punt=256;
	cout<<i<<endl;
}
