#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
char a[]="mare";
char a1[]="pane";
int par,par1;
void copia_stringa(char a[],char a1[],int par,int par1);
main(){
	system("color 1F");
	cout<<"Copia stringa "<<endl;
	cout<<"Stringa1: "<<a<<endl;
	cout<<"Stringa2: "<<a1<<endl;
	cout<<endl;
	copia_stringa(a,a1,par,par1);
	cout<<"Stringa1: ";
	for(int i=0;i<4;i++){
		cout<<a[i];
	}
	cout<<endl;
	cout<<"Stringa2: ";
	for(int i=0;i<4;i++){
		cout<<a1[i];
	}
}
void copia_stringa(char a[],char a1[],int par,int par1){
	if(par>par1){
		par1=par;
	}
	else{
		par=par1;
	}
	for(int i=0;i<4;i++){
		a[i]=a1[i];
	}	
}
