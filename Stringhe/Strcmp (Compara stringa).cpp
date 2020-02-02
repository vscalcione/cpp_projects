#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;
char a[]="mare";
char a1[]="casale";
int par,par1;
int x;
int compara_stringa(char a[],char a1[],int par,int par1);
main(){
	system("color 1F");
	cout<<"Compara stringa "<<endl;
	cout<<"Stringa1: "<<a<<endl;
	cout<<"Stringa2: "<<a1<<endl;
	cout<<endl;
	x=compara_stringa(a,a1,par,par1);
	cout<<x<<endl;
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
int compara_stringa(char a[],char a1[],int par,int par1){
	int i=0;
	do{
		if(i==par && i==par1){
			x=0;
			return 0;
		}
		if(a[i]!=a1[i]){
			x=a[i]-a1[i];
			return x;
		}
		i++;
	}
	while(a[i]==a1[i]);
}
