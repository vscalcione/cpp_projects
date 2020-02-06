#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int x,numero;
int quadrato_numero(int numero);
main(){
	system("color 1F");
	cout<<"Inserisci numero: ";
	cin>>numero;
	x=quadrato_numero(numero);
	cout<<"Quadrato di "<<numero<<" : "<<x<<endl;
}
int quadrato_numero(int numero){
	int k;
	if(numero==0){
		return 0;
	}
	else{
		k=numero*numero;
	}
	return k;
}
