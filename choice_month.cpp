#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;

int value, response;

void print_month(int value);

int main(){
	system("color 1A");
	do{
		system("cls");
		cout<<endl;
		cout<<"Insert month value: ";
		cin >> value;
		print_month(value);
		cout<<"The user wuold do another operation? 1 = yes, 0 = no";
		cin >> response;
		if(response == 0 or response != 1){
			break;
		}
	}
	while(response == 1);
}

void print_month(int value){
    if(value == 1)
        cout<<"January"<<endl;
    if(value == 2)
        cout<<"February"<<endl;
    if(value == 3)
        cout<<"March"<<endl;
    if(value == 4)
        cout<<"April"<<endl;
    if(value == 5)
        cout<<"May"<<endl;
    if(value == 6)
        cout<<"June"<<endl;
    if(value == 7)
        cout<<"July"<<endl;
    if(value == 8)
        cout<<"August"<<endl;
    if(value == 9)
        cout<<"Setptember"<<endl;
    if(value == 10)
        cout<<"October"<<endl;
    if(value == 11)
        cout<<"November"<<endl;
    if(value == 12)
        cout<<"Dicember"<<endl;
}
