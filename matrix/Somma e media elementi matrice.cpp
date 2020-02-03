#include <iostream>
#include <cstdlib>
#include <math.h>
using namespace std;
int matrice[100][100],numero_righe,numero_colonne,x;
float media;
void caricamento_matrice(int matrice[][100],int numero_righe,int numero_colonne);
void stampa_matrice(int matrice[][100],int numero_righe,int numero_colonne);
int somma_matrice(int matrice[][100],int numero_righe,int numero_colonne);
float media_matrice (int matrice [][100],int x);
main(){
	system("color 1F");
	cout<<"Inserire numero righe della matrice: ";
	cin>>numero_righe;
	cout<<"Inserire numero colonne della matrice: ";
	cin>>numero_colonne;
	caricamento_matrice(matrice,numero_righe,numero_colonne);
	cout<<"La tua matrice: "<<endl;
	stampa_matrice(matrice,numero_righe,numero_colonne);
	x=somma_matrice(matrice,numero_righe,numero_colonne);
	media=media_matrice(matrice,x);
	cout<<"Somma: "<<x<<endl;
	cout<<"Media: "<<media<<endl;	
}
void caricamento_matrice(int matrice[][100],int numero_righe,int numero_colonne){
	for(int j=0;j<numero_righe;j++){
		for(int k=0;k<numero_colonne;k++){
			matrice[j][k]=1+rand()%100;
		}
	}
}
void stampa_matrice(int matrice[][100],int numero_righe,int numero_colonne){
	for(int j=0;j<numero_righe;j++){
		for(int k=0;k<numero_colonne;k++){
			cout<<"Elemento ["<<j<<"]["<<k<<"]: "<<matrice[j][k]<<endl;
		}
	}
}
int somma_matrice(int matrice[][100],int numero_righe,int numero_colonne){
	int x=0;
	for (int j=0;j<numero_righe;j++){
		for (int k=0;k<numero_colonne;k++){
			x+=matrice[j][k];
		}
	}
	return x;
}
float media_matrice (int matrice[][100], int x){
	int m;
	m=x/(numero_righe*numero_colonne);
	return m;
}
