#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int cube (int value);
int value,result;

int main(){
	system ("color 1F");
	cout<<"Cube "<<endl;
	cout<<"Insert value: ";
	cin >> value;
    result = cube(value);
	cout << "Cube is: " << result << endl;
	return 0;
}
int cube (int value){
	return value * value * value;
}
