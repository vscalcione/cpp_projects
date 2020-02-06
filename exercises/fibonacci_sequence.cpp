#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int value;
int fibonacci_sequence(int value);

int main(){
	system("color 1F");
	cout<<"Fibonacci Sequence "<<endl<<endl;
	cout<<"Insert value: ";
	cin >> value;
	cout<<endl;
	for(int index = 1; index < value + 1; index++){
		cout << fibonacci_sequence(index) << endl;
	}
}

int fibonacci_sequence(int value){
	int result;
	if(value == 0)
		return 0;
	if(value == 1)
		return 1;
	else
        result = fibonacci_sequence(value - 1) + fibonacci_sequence(value - 2);
	return result;
}
