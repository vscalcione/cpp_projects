#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int value, response;
void pair_dispair_calculate (int value);

int main(){
	system("color 1F");
	do{
		system("cls");
		cout<<"Insert value: ";
		cin >> value;
        pair_dispair_calculate(value);
		cout<<"L'utente vuole eseguire un'altra operazione? 1=si, 0=no ";
		cin >> response;
		if(response == 0 or response != 1){
			break;
		}
	}
	while(response == 1);
}
void pair_dispair_calculate(int value){
	if(value % 2 == 0){
		cout << "Inserted value  " << value << " is pair " << endl;
	}
	else{
		cout << "Inserted value " << value << " is dispair " << endl;
	}
}
