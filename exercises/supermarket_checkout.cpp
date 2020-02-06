#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

float product_price[10], tmp_array[10];
char product_name[10][20];
void set_product_name(char product_name[][20]);
void set_product_price(float product_price[]);
void sorting(float product_price[]);
void print(float product_price[]);
void discount_prices (float product_price[]);
void set_product_name_price (float product_price[],char product_name[][20]);

int main(){
	system("color 3F");
	cout<<"Supermarket checkout simulator "<<endl<<endl;
	set_product_name_price(product_price, product_name);
	system("cls");
	sorting(product_price);
	print(product_price);
	discount_prices(product_price);
	return 0;
}

void set_product_name_price(float product_price[], char product_name[][20]){
	for(int index = 1; index < 10; index++){
		cout<<"Product name "<<index<<" : ";
		cin>>product_name[index];
		cout<<"Price product "<<index<<" : ";
		cin>>product_price[index];
		cout<<"-----------------------------"<<endl;
	}
}

void sorting(float product_price[]){
	float temp;
	for(int index = 0; index < 9; index++){
		for(int j = index + 1; j < 10; j++){
			if(product_price[index] > product_price[j]){
				temp = product_price[index];
				product_price[index ] = product_price[j];
				product_price[j] = temp;
			}
		}
	}
}

void print (float product_price[]){
	cout<<"Discounted prices "<<endl;
	for(int index = 0; index < 10; index++){
		cout<<index + 1<<") "<<product_price[index]<<"   ";
	}
}

void discount_prices (float product_price[]){
	cout<<endl;
    	cout<<"Discounted prices - pt. 2 : "<<endl;
	for(int index = 0; index < 10; index++){
		tmp_array[index] = (product_price[index] / 100) * 20;
		cout<<"Discounted price of "<<index + 1<<" product is: "<<product_price[index]- tmp_array[index]<<endl;
	}
}
