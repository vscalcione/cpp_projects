#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>

using namespace std;

int insert_value (int value);
int t, t1, index, a, c, d, rit, choice;

int main(){
	system("color 1F");
	cout<<"Guess the number - game "<<endl;
	do{
		srand(time(NULL));
		a = rand() % 20 + 1;
		columns = rand() % 15 +  ;
		d = rand() % 15 + 1;
		cout<<"Ok, you have 7 attempts "<<endl;
		cout<<"The number to guess is between "<<a - c<<" and " <<a + d<<endl;
		do{
			t = insert_value(t1);
			if(t != a)
				index++;
			if(t == a){
				cout<<" Congratulations, you have finished the game. But now go to work! "<<endl;
				index = 7;
			}
			if(a % 2 == 0 && t % 2 == 0 and t != a)
				cout<<"Il valore da indovinare è pari ma non  è quello da te inserito "<<endl;
			if(a % 2 == 0 && t % 2 == 0)
				cout<<"Il valore da indovinare è un valore pari "<<endl;
			if(a % 2 == 0 && t % 2 != 0 && t != a)
				cout<<"Il valore da indovinare è un valore dispari ma non è quello inserito "<<endl;
			if(a % 2 != 0 && t % 2 == 0)
				cout<<"Il valore da indovinare è un valore dispari "<<endl;
			if(a % 5 == 0 && t % 5 != 0)
				cout<<"Il valore da indovinare è un multiplo di 5 "<<endl;
			if(a % 5 != 0 && t % 5 == 0 && t != a)
				cout<<"Il valore da indovinare è un multiplo di 5 ma non è quello da te inserito "<<endl;
			if( t < (a - c) || t > (a + d)){
				if(a % 3 == 0 && t % 3 != 0)
					cout<<"Il valore da indovinare è un multiplo di 3 "<<endl;
				if(a % 3 != 0 && t % 3 != 0)
					cout<<"Il valore da indovinare non è un multiplo di 3 "<<endl;
				if(a % 3 == 0 && t % 3 == 0 && t != a){
					cout<<"Il valore è un multiplo di 3 ma non è quello da te inserito "<<endl;
			}
			if(t < (a - c) || t > (a + d))
				cout<<"Il valore è compreso fra "<<a - c<<" and "<<a + d<<endl;
		}
		while(index < 7);
		cout<<"GAME OVER "<<endl;
		index = 0;
		cout<<"Il valore da indovinare era: "<<a<<endl;
		do{
			cout<<"Vuoi fare un'altra partita? 0 = si, 1  = no ";
			cin>>rit;
			if(rit < 0 || rit > 1)
				cout<<"Errore. Scelta non disponibile "<<endl;
		}
		while(rit < 0 || rit > 1);
		if(rit == 0)
			break;
	}
	while(rit == 0);
}

int insert_value (int value){
	cout<<"Insert value: ";
	cin>>value;
	return value;
}
