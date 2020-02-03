#include <iostream>
#include <math.h>
#include <cstdlib>

using namespace std;

// definition of all variables
double first_value, second_value, base, exponent, value;
double result;
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

int main(){

    /** this instruction is only for Windows
     * systsem("cls");
    **/

    system("clear");
//    do{
        do{
            print_menu();
            cout<<"Choice: ";
            cin>>choice;
            if(choice < 1 || choice > 6){
                cout<<"Error!";
            }
        }
        while(choice < 1 || choice > 6);
        if(choice == 1){

            /** this instruction is only for Windows
             * systsem("cls");
            **/

            system("clear");
            cout<<"Sum"<<endl;
            cout<<"Insert first value: ";
            cin>>first_value;
            cout<<"Insert second value: ";
            cin>>second_value;
            result = sum(first_value, second_value);
            cout<<"Sum is: "<<result<<endl;
        }
        if(choice == 2){

            /** this instruction is only for Windows
             * systsem("cls");
            **/

            system("clear");
            cout<<"Difference"<<endl;
            cout<<"Insert first value: ";
            cin>>first_value;
            cout<<"Insert second value: ";
            cin>>second_value;
            result = difference(first_value, second_value);
            cout<<"Difference is: "<<result<<endl;
        }
        if(choice == 3){

            /** this instruction is only for Windows
             * systsem("cls");
            **/

            system("clear");
            cout<<"Product"<<endl;
            cout<<"Insert first value: ";
            cin>>first_value;
            cout<<"Insert second value: ";
            cin>>second_value;
            result = product(first_value, second_value);
            cout<<"Product is: "<<result<<endl;
        }
        if(choice == 4){

            /** this instruction is only for Windows
             * systsem("cls");
            **/

            system("clear");
            cout<<"Quozient"<<endl;
            cout<<"Insert first value: ";
            cin>>first_value;
            cout<<"Insert second value: ";
            cin>>second_value;
            result = quozient(first_value, second_value);
            cout<<"Quozient is: "<<result<<endl;
        }
        if(choice == 5){

        }
        if(choice == 6){

        }

//    }
//    while();
}

void print_menu(){
	cout<<"======== Scientific Calculator ========= "<<endl;
    cout<<"1. Sum "<<endl;
	cout<<"2. Difference "<<endl;
	cout<<"3. Product "<<endl;
	cout<<"4. Quozient "<<endl;
	cout<<"5. Factorial "<<endl;
	cout<<"6. Pow "<<endl;
	cout<<"7. Square "<<endl;
	cout<<"8. Cube "<<endl;
	cout<<" ======================================= "<<endl;
}

double sum(double first_value, double second_value){
	return first_value + second_value;
}

double difference(double first_value, double second_value){
    if(first_value > second_value){
        return first_value - second_value;
    }else{
        return second_value - first_value;
    }
}

double product(double first_value, double second_value){
    return first_value * second_value;
}

double quozient(double first_value, double second_value){
    if(first_value == 0 || second_value == 0){
        return 0;
    }else{
        return first_value / second_value;
    }
}