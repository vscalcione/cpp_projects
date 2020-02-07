#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int array[100],array_length;
void loading_array(int array[], int array_length);
void desording_array(int array[], int array_length);
void print_array(int array[], int array_length);;

int main(){
	system("color 1F");
	srand(time(NULL));
	cout<<endl<<endl;
	cout<<"Array length? ";
	cin>>array_length;
	loading_array(array, array_length);
	print_array(array, array_length);
	desording_array(array, array_length);
	cout<<"Now your array is': "<<endl;
	print_array(array, array_length);
	return 0;
}

void loading_array(int array[], int array_length){
	for(int index = 0; index < array_length; index++){
		array[index] = 1 + rand() % 100;
	}
}

void desording_array(int array[], int array_length){
	int p = 0;
	for(int index = 0; index < array_length; index++){
		for(int j = index + 1; j < array_length; j++){
			p = rand() % 2;
			if(p == 1){
				int tmp;
				tmp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = tmp;
			}
		}
	}
}

void print_array(int array[], int array_length){
	for(int index = 0; index < array_length; index++){
		cout<<array[index]<<endl;
	}
}
