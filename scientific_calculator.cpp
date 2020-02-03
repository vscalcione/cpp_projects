#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

// definition of all variables
double first_value, second_value, base, exponent, value;
double somma, differenza, prodotto, quoziente, fattoriale, potenza, quadrato, cubo;
int choice;

// definition of all methods
void print_menu();
double sum(double first_value, double second_value);
double difference(double first_value, double second_value);
double product (double first_value, double second_value);
double quozient (double first_value, double second_value);
double factorial (double value);
double pow (double base, double exponent);
double square (double value);
double cube (double value);

int main()
{
	//do
	//{
		do
		{
			// This instruction is only for Windows 
			// system("cls");

			system("clear");
			print_menu();
			cout<<"Choice: ";
			cin>>choice;
			if(choice < 1 || choice > 6)
			{
				cout<<"Error";
			}

		}
		while(choice < 1 || choice > 6);
		if(choice == 1)
		{
			system("clear");
			cout<<"Sum "<<endl;
			cout<<"Insert first value: ";
			cin>>first_value;
			cout<<"Insert second value: ";
			cin>>second_value;
			somma = sum(first_value, second_value);
			cout<<"Sum: "<<somma<<endl;
		}
	//}
	//while();
	return 0;
}

void print_menu()
{
	cout<<"1. Sum "<<endl;
	cout<<"2. Difference "<<endl;
	cout<<"3. Product "<<endl;
	cout<<"4. Quozient "<<endl;
	cout<<"5. Factorial "<<endl;
	cout<<"6. Pow "<<endl;
	cout<<"7. Square "<<endl;
	cout<<"8. Cube "<<endl;
}

double sum(double first_value, double second_value)
{
	return first_value + second_value;
}
