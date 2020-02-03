#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int x,numero;
int successione_fibonacci(int numero);
main(){
	system("color 1F");
	cout<<"Calcolo Successione di Fibonacci "<<endl<<endl;
	cout<<"Inserire numero: ";
	cin>>numero;
	cout<<endl;
	for(int i=1;i<numero+1;i++){
		cout<<successione_fibonacci(i)<<endl;
	}
}
int successione_fibonacci(int numero){
	int j;
	if(numero==0){
		return 0;
	}
	if(numero==1){
		return 1;
	}
	else{
		j=successione_fibonacci(numero-1)+successione_fibonacci(numero-2);
	}
	return j;
}
