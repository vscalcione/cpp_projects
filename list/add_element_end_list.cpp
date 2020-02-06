#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

struct list{
	int info;
	list*next;
};
list*il=NULL;

int element, list_length;
void loading_list(list*&il, int list_length);
void print_list(list*il, int list_length);
void add_element_code(list*il, int element);

int main(){
	system("color 3F");
	srand(time(NULL));
	cout<<"Add to the queue "<<endl;
	cout<<"How many items do you want your list to have? ";
	cin >> list_length;
    loading_list(il, list_length);
	cout<<"Your list: "<<endl;
    print_list(il, list_length);
	cout<<"Insert element to add to your list: ";
	cin >> element;
    add_element_code(il, element);
	cout<<"Now your list is: "<<endl;
    print_list(il, list_length);
}

void loading_list(list*&il, int list_length){
	for(int index = 0; index < list_length; index++){
		list*new_item = new list;
		new_item->info = 1 + rand() % 100;
        new_item->next = il;
		il = new_item;
	}
}

void print_list(list*il, int n){
	list*tmp = il;
	while(tmp != NULL){
		cout<<tmp->info<<endl;
		tmp = tmp->next;
	}
}

void add_element_code(list*il, int element){
	list*tmp = il;
	while(il != NULL){
		tmp = il;
		il = il->next;
	}
	list*new_element = new list;
    new_element->info = element;
    new_element->next = NULL;
	tmp->next = new_element;
}