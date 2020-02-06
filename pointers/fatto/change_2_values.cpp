#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int first_value, second_value;
void change (int *first_value, int *second_value);

int main(){
	system ("color 1F");
	cout<<"Values change "<<endl;
	cout<<endl;
	cout<<"Insert first value: ";
	cin>>first_value;
	cout<<"Insert second value: ";
	cin>>second_value;
	change(&first_value, &second_value);
	cout<<"**********************************"<<endl;
	cout<<"Changed values "<<endl;
	cout<<"First value: "<<first_value<<endl;
	cout<<"Second value: "<<second_value<<endl;
	cout<<"**********************************"<<endl;
}

void change (int *first_value, int *second_value){
	int tmp;
	tmp = *first_value;
	*first_value = *second_value;
	*second_value = tmp;
}
