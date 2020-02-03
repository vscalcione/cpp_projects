#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int choice, response;
double first_value, second_value, result, value, base, exponent;

double sum (double first_value, double second_value);
double difference(double first_value, double second_value);
double product(double first_value, double second_value);
double quozient(double first_value, double second_value);
double factorial(double first_value, double second_value);
double pow(double base, double exponent);
double square(double value);
double cube(double value);

int main(){
	system("color 1F");
	do{
		do{
			system("cls");
			print_menu();
			cout<<"Choice: ";
			cin>>choice;
			if(choice < 1 || choice > 8)
			{
				cout<<"Error";
			}
		}
		while(choice < 1 || choice > 8);
        if(choice == 1){
            system("cls");
            cout<<"Sum "<<endl;
            cout<<"Insert first value: ";
            cin>>first_value;
            cout<<"Insert second value: ";
            cin>>second_value;
            result = sum(first_value,second_value);
            cout<<"Sum is: "<<result<<endl;
        }
        if(choice == 2){
            system("cls");
            cout<<"Difference "<<endl;
            cout<<"Insert first value: ";
            cin>>first_value;
            cout<<"Insert second value: ";
            cin>>second_value;
            result = difference(first_value,second_value);
            cout<<"Difference is: "<<result<<endl;
        }
        if(choice == 3){
            system("cls");
            cout<<"Product "<<endl;
            cout<<"Insert first value: ";
            cin>>first_value;
            cout<<"Insert second value: ";
            cin>>second_value;
            result = product(first_value,second_value);
            cout<<"Product is: "<<result<<endl;
        }
        if(choice == 4){
            system("cls");
            cout<<"Quozient "<<endl;
            cout<<"Insert first value: ";
            cin>>first_value;
            cout<<"Insert second value: ";
            cin>>second_value;
            result = quozient(first_value,second_value);
            cout<<"Quozient is: "<<result<<endl;
        }
        if(choice == 5){
            system("cls");
            cout<<"Factorial "<<endl;
            cout<<"Insert value: ";
            cin>>value;
            result = factorial(value);
            cout<<"Factorial is: "<<result<<endl;
        }
        if(choice == 6){
            system("cls");
            cout<<"Pow "<<endl;
            cout<<"Insert base: ";
            cin>>base;
            cout<<"Insert exponent: ";
            cin>>exponent;
            result = pow(base, exponent);
            cout<<"Pow of "<<base<<" at "<<exponent<<" is: "<<result<<endl;
        }
        if(choice == 7){
            system("cls");
            cout<<"Square "<<endl;
            cout<<"Insert value: ";
            cin>>value;
            result = square(value);
            cout<<"Square: "<<result<<endl;
        }
        if(choice == 8){
            system("cls");
            cout<<"Cube "<<endl;
            cout<<"Insert value: ";
            cin>>value;
            result = cube(value);
            cout<<"Cube: "<<result<<endl;
        }
        cout<<"Does the user want to perform another operation? 1 = yes, 0 = no ";
        cin>>response;
        if(response != 1 || response == 0){
            break;
        }
	}
	while(response == 1);

}

void print_menu(){
	cout<<" ========== Scientific calculator =============== "<<endl;
	cout<<"1. Sum "<<endl;
	cout<<"2. Difference "<<endl;
	cout<<"3. Product "<<endl;
	cout<<"4. Quozient "<<endl;
	cout<<"5. Factorial "<<endl;
	cout<<"6. Pow "<<endl;
	cout<<"7. Square "<<endl;
	cout<<"8. Cube "<<endl;
}

double sum(double first_value, double second_value){
	return first_value + second_value;
}

double difference(double first_value, double second_value){
	if(first_value > second_value){
		return first_value - second_value;
	}
	else{
		return second_value - first_value;
	}
}

double product(double first_value, double second_value){
	return first_value * second_value;
}

double quozient(double first_value, double second_value){
	if(first_value == 0 || second_value == 0){
		return 0;
	}
	else{
		return first_value / second_value;
	}
}

double factorial(double value){
	double result;
	if(value == 0){
		retrun 1;
	}
	else{
		result = value * factorial(value - 1);
		return result;
	}
}

double pow(double base, double exponent){
    double result;
    if(exponent <= 0){
        return 1;
    }else{
        result = base * pow(base, exponent - 1);
        return result;
    }
}

double square(double value){
    return value * value;
}

double cube(double value){
    return value * value * value;
}