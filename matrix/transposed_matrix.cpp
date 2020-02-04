#include <iostream>
#include <cstdlib>
#include <time.h>
#include <math.h>

using namespace std;

int matrix[6][4],rows,columns;

void loading_matrix (int matrix[][]);
void print_matrix (int matrix[][]);
void transposed_matrix (int matrix[][]);
int max_value_matrix (int matrix[][]);
int min_value_matrix (int matrix[][]);

int main(){
	system ("color 3A");
	cout<<"|Caricamento e trasposta di una matrix |"<<endl;
	srand(time(NULL));
	cout<<" Numero righe: ";
	cin >> rows;
	cout<<" Numero colonne: ";
	cin >> columns;
	cout << " E' una matrix [" << rows << "][" << columns << "]" << endl;
	system ("cls");
    loading_matrix(matrix);
    print_matrix(matrix);
    transposed_matrix(matrix);
}

void loading_matrix (int matrix[][]){
	for (int first_index = 0; first_index < rows; first_index++){
		for (int second_index = 0; second_index < columns; second_index++){
            matrix[first_index][second_index]= rand() % 100;
		}
	}
}

void transposed_matrix (int matrix[][]){
	for (int first_index = 0; first_index < rows; first_index++){
		for (int second_index = first_index; second_index < columns; second_index++){
			int temp;
			temp = matrix[first_index][second_index];
            matrix[first_index][second_index] = matrix[second_index][first_index];
            matrix[second_index][first_index] = temp;
		}
	}
}
void print_matrix (int matrix[][]){
	cout<<" Matrice1: "<<endl;
	for (int first_index = 0; first_index < rows; first_index++){
		for (int second_index = 0; second_index < columns; second_index++){
			cout << " Il valore nella posizione [" << first_index << "][" << second_index << "] e': " << matrix[first_index][second_index] << endl;
		}
	}
	cout<<endl<<endl;
	cout<<" Matrice2 "<<endl;
	for (int i=0; i < rows; i++){
		for (int j=0; j < columns; j++){
			cout << " Il valore nella posizione [" << i << "][" << j << "] e': " << matrix[j][i] << endl;
		}
	}
}