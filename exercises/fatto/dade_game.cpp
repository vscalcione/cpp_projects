#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>
#include <string.h>

using namespace std;

int first_launch, second_launch, result;
char start[2], go[]="go", choice[2], yes[]="yes", no[]="no";
int first_dade ();
int second_dade ();

int main(){
	//system ("color 1F");
	cout<<"Launch dades - game "<<endl;
	do{
		do{
			cout<<"Type GO for do the first launch"<<endl;
			cin>>start;
		}
		while (strcmp(go,start)!=0);
		first_launch = first_dade();
		second_launch = second_dade();
		int sum = first_launch + second_launch;
		cout<<"Result is: "<<sum<<endl;
		cout<<"Another game-set? ";
		cin>>choice;
		if (strcmp(choice, no) == 0)
			break;
	}
	while (strcmp(choice, yes) == 0);
}

int first_dade (){
	int result;
	srand(time(NULL));
	result = rand() %  6 + 1; 
	cout<<"First dade: "<<result<<endl;
	return result;
}

int second_dade (){
	int result;
	srand (time(NULL));
	result = rand() % 6 + 1;
	cout<<"Second dade: "<<result<<endl;
	return result;
}
