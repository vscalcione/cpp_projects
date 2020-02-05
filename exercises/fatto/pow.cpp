#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int pow (int base, int exponent);
int result, base, exponent;

int main(){
	system("color 1F");
	cout<<"Pow "<<endl;
	cout<<"Insert base :";
	cin>>base;
	cout<<"Insert exponent: ";
	cin>>exponent;
	result = pow(base, exponent);
	cout<<"Pow of "<<base<<" to "<<exponent<<" is: "<<result<<endl;
}

int pow(int base, int exponent){
	if(exponent == 0)
		return 1;
	else
		return base * pow(base, exponent - 1);
}

