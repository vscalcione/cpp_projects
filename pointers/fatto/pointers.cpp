#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main(){
	system("color 3A");
	int variable = 257;
	int *pointer;
	cout<<&variable<<endl;
	pointer = &variale;
	cout<<" Memory Address: "<<pointer<<endl;
	cout<<" Pointed value: "<<*pointer<<endl;
	*pointer = 256;
	cout<<variable<<endl;
	return 0;
}
