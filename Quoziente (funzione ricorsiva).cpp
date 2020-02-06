#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int x,numero1,numero2;
int quoziente(int numero1,int numero2);
main(){
	system("color 1F");
	cout<<"Quoziente con funzione ricorsiva "<<endl;
	cout<<"Inserire primo valore: ";
	cin>>numero1;
	cout<<"Inserire secondo valore: ";
	cin>>numero2;
	cout<<endl;
	x=quoziente(numero1,numero2);
	cout<<"Quoziente fra "<<numero1<<" e "<<numero2<<": "<<x<<endl;
}
int quoziente(int numero1,int numero2){
	if(numero1<numero2){
		return 0;
	}
	if(numero1==1){
		return 1;
	}
	else{
		return 1+quoziente(numero1-numero2,numero2);
	}
}
