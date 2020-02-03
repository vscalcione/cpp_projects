#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
float orario_inizio,orario_fine,orario_totale,tot,monete,resto=0,manz,costo,totale;
main(){
	system("color 1F");
	int p=0;
	cout<<"SIMULAZIONE PARCHIMETRO "<<endl<<endl;
	cout<<"Costo: 0,50 euro ad ora. "<<endl;
	cout<<"Inserire l'ora d'inizio: ";
	cin>>orario_inizio;
	cout<<"Ora inserire l'orario di fine: ";
	cin>>orario_fine;
	orario_totale=orario_fine-orario_inizio;
	cout<<"L'orario totale e': "<<orario_totale<<endl;
	costo=0.50*orario_totale;
	cout<<"Il costo e': "<<costo<<endl;
	do{
		cout<<"Inserire denaro: ";
		if(p==1){
			costo=manz;
		}
		cin>>monete;
		tot+=monete;
		if(monete>costo){
			resto=monete-costo;
			cout<<"Il resto e': "<<resto<<endl;
		}		
		if(monete<costo){
			manz=costo-monete;
			cout<<"Mancano: "<<manz<<" euro. "<<endl;
			p=1;
		}
	}
	while(p==1 and monete!=costo and monete<costo);
	cout<<endl<<endl;
	cout<<"******************************************************************************"<<endl;
	cout<<"SCONTRINO "<<endl<<endl;
	cout<<"L'orario di inizio e': "<<orario_inizio<<endl;
	cout<<"L'orario di fine e': "<<orario_fine<<endl;
	cout<<"L'orario totale e': "<<orario_totale<<endl;
	cout<<"Soldi inseriti: "<<tot<<endl;
	cout<<"Resto: "<<resto<<endl;
	cout<<"******************************************************************************"<<endl;	
}
