#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int sum (int first_value, int second_value);
int first_value, second_value ,result;

int main(){
	system ("color 1F");
	cout<<"Sum "<<endl;
	cout<<"Insert first value: ";
	cin >> first_value;
	cout<<"Insert second value: ";
	cin >> second_value;
    result = sum (first_value, second_value);
	cout << "Sum: " << result << endl;
}

int sum (int first_value, int second_value){
	return first_value + second_value;
}
