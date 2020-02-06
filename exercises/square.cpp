#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int value, result;
int square (int value);

int main(){
	system ("color 1F");
	cout<<"Square "<<endl;
	cout<<"Insert value: ";
	cin>>value;
	result = square(value);
	cout<<"Square of "<<value<<" is: "<<result<<endl;
}

int square (int value){
	return value * value;
}
