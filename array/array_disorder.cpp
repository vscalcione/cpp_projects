#include <iostream> 
#include <cstdlib>
#include <time.h>
#include <math.h>

using namespace std;

int array[100], length, choice;
void loading_array (int array[], int length);
void loading_array_1 (int array[], int length);
void print_array (int array[], int length);
void array_disorder (int array[], int length);
void print_menu();


int main(){
	system ("color 1F");
	cout<<"Loading, de-sorting and printing array of n elements "<<endl;
	cout<<"How many elements you would to have your array? ";
	cin>>length;
	do{
		print_menu();
		cout<<"Choice: ";
		cin>>choice;
		if (choice < 1 || choice > 2){
			cout<<"Error "<<endl;
		}
	}
	while (choice < 1 || choice > 2);
	if (choice == 1){
		system ("cls");
		caricamento_vettore (vettore,n); //chiamata funzione caricamento vettoredi n elementi interi inseriti da tastiera
		stampa_vettore(vettore,n);
		disordinamento_vettore (vettore,n); //chiamata funzione disordinamento vettore
		stampa_vettore (vettore,n); //chiamata funzione stampa vettore
	}
	else
	{
		system ("cls");
		srand (time(NULL));
		caricamento1_vettore (vettore,n); //chiamata funzione caricamento vettore di n elementi interi random 
		disordinamento_vettore (vettore,n); //chiamata funzione di disordinamento vettore
		stampa_vettore (vettore,n); //chiamata funzione stampa vettore
	}
}

void print_menu(){
	cout<<"Menu' "<<endl;
        cout<<"1. Manual insert (to keyboard) "<<endl;
       	cout<<"2. Random insert(values generated to method srand/rand) "<<endl;
}

void loading_array (int array[], int length){
	for (int index = 0; index < length; index++){
		cout<<"Insert element in position ["<<index<<"]: ";
		cin>>array[index];
	}
}

void loading_array_1 (int array[], int length){
	for (int index = 0; index < length; index++){
		array[index] = 1 + rand() % 100;
	}
}

void print_array(int array[], int length){
	for(int index = 0; index < length; index++){
		cout<<"In position ["<<index<<"] is present value: "<<array[index]<<endl;
	}
}

void array_disorder (int array[], int length){
	for (int index = 0; index < length; index++){
		for (int j = index + 1; j < length; j++){
			int p;
			p = rand() % 2;
			if (p == 1){
				int tmp;
				tmp = array[index];
				array[index] = array[j + 1];
				array[j + 1] = tmp
			}
		}
	}
}
