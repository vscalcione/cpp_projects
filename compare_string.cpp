#include <iostream>
#include <cstdlib>
#include <string.h>

using namespace std;

char first_word[]="mare";
char second_word[]="casale";
int first_word_length, second_word_length;
int result;
int compare(char first_word[], char second_word[], int first_word_length, int second_word_length);

int main(){
	system("color 1F");
	cout<<"Compare strings "<<endl;
	cout<<"First word: "<<first_word<<endl;
	cout<<"Second word: "<<second_word<<endl;
	cout<<endl;
	result = compare(first_word, second_word, first_word_length, second_word_length);
	cout<<result<<endl;
	cout<<"First word: ";
	for(int index = 0; index < 4; index++){
		cout<<first_word[index];
	}
	cout<<endl;
	cout<<"Second word: ";
	for(int index = 0; index < 4; index++){
		cout<<second_word[index];
	}
}

int compare(char first_word[], char second_word[], int first_word_length, int second_word_length){
	int index = 0;
	do{
		if(index == first_word_length && index == second_word_length){
			result = 0;
			return 0;
		}
		if(first_word[index] != second_word[index]){
			result = first_word[index] - second_word[index];
			return result;
		}
	}
	while(first_word[index] == second_word[index]);
}
