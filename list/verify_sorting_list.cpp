#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

struct list{
	int info;
	list*next;
};
list*il = NULL;
int result = 0, list_length;

void loading_list(list*&il, int list_length);
void print_list(list*il, int list_length);
int verify_sorting(list*il, int list_length);
void sorting_list(list*il, int list_length);

int main(){
	system("color 3F");
	cout<<"How many items do you want your list to have? ";
	cin>>list_length;
	loading_list(il, list_length);
	result =  verify_sorting(il, list_length);
	cout<<"===================================================="<<endl;
	if(result == -1){
		cout<<"Before your list was: "<<endl;
		print_list(il, list_length);
		cout<<"========================================================="<<endl;
		cout<<"NOT SORTING LIST "<<endl;
		sorting_list(il, list_length);
		cout<<"Now your list is: "<<endl;
		print_list(il, list_length);
	}
	else{
		cout<<"LIST SORTED "<<endl;
		print_list(il, list_length);
	}
	return 0;
}

void loading_list (list*&il, int list_length){
	for(int index = 0; index < list_length; index++){
		list*new_item = new list;
		new_item->info = 1 + rand() % 100;
		new_item->next = il;
		il = new_item;
	}
}

void print_list(list*il, int list_length){
	list*tmp = il;
	while(tmp != NULL){
		cout<<tmp->info<<endl;
		tmp = tmp->next;
	}
}

int verify_sorting(list*il, int list_length){
	int max = 0;
	list*tmp = il;
	max = tmp->info;
	for(int index = 0; index < list_length; index++){
		while(tmp != NULL){
			if(tmp->info > max){
				return -1;
			}
			tmp = tmp->next;
		}
		il = il->next;
		tmp = il;
		max = tmp->info;
		if(index == 2){
			return 2;
		}
	}
}

void sorting_list (list*il, int list_length){
	int a, tmp;
	list*tmp = il;
	while(tmp != NULL){
		while(il != NULL){
			if(il->info < tmp->info){
				tmp = il->info;
				il->info = tmp->info;
				tmp->info = tmp;
			}
			il = il->next;
		}
		tmp = tmp->next;
		il = tmp;
	}
}