#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

void print_values(int *first_value, int *second_value);
int first_value, second_value;

int main(){
	cout<<"Print variable for value and address "<<endl;
	cout<<"Insert first value: ";
	cin>>first_value;
	cout<<"Insert second value: ";
	cin>>second_value;
	cout<<endl;
	print_values (&first_value, &second_value);
}

void print_values(int *first_value, int *second_value){
	cout<<"First value is "<<*first_value<<" with address: "<<&first_value<<endl;
	cout<<"Second value is "<<*second_value<<" with address: "<<&second_value<<endl;
}
