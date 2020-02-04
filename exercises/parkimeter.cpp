#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

float starting_time, ending_time, total_time, total, coins, rest = 0, manz, costo;

int main(){
	system("color 1F");
	int p=0;
	cout<<"SIMULAZIONE PARCHIMETRO "<<endl<<endl;
	cout<<"Costo: 0,50 euro ad ora. "<<endl;
	cout<<"Inserire l'ora d'inizio: ";
	cin >> starting_time;
	cout<<"Ora inserire l'orario di fine: ";
	cin >> ending_time;
    total_time= ending_time - starting_time;
	cout << "L'orario totale e': " << total_time << endl;
	costo = 0.50 * total_time;
	cout<<"Il costo e': "<<costo<<endl;
	do{
		cout<<"Inserire denaro: ";
		if(p == 1){
			costo = manz;
		}
		cin >> coins;
        total += coins;
		if(coins > costo){
            rest = coins - costo;
			cout << "Il rest e': " << rest << endl;
		}		
		if(coins < costo){
			manz = costo - coins;
			cout<<"Mancano: "<<manz<<" euro. "<<endl;
			p = 1;
		}
	}
	while(p == 1 && coins != costo && coins < costo);
	cout<<endl<<endl;
	cout<<"******************************************************************************"<<endl;
	cout<<"SCONTRINO "<<endl<<endl;
	cout << "L'orario di inizio e': " << starting_time << endl;
	cout << "L'orario di fine e': " << ending_time << endl;
	cout << "L'orario totale e': " << total_time << endl;
	cout << "Soldi inseriti: " << total << endl;
	cout << "Resto: " << rest << endl;
	cout<<"******************************************************************************"<<endl;	
}