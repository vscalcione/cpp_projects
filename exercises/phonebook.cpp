#include <iostream>
#include <cstdlib>
#include <math.h>
#include <string.h>

using namespace std;

struct phonebook{
    char contact_name[20];
    char contact_surname[20];
    char contact_number[11];
    char contact_email_address[50];
}array[100];

char s1[10],aggiungi[10]="aggiungi",cerca[10]="cerca",s2[10],value[10]="value",visualizza[11]="visualizza",esci[6]="esci";
char nome[10];
void loading(struct phonebook array[], int o);
void show_phonebook(struct phonebook array[], int o);
void search_contact(struct phonebook array[], int o, char nome[]);
void print_menu();

int o=0, p;

int main(){
    system("color 1F");
    do{
        system("cls");
        cout<<"******************************************************************"<<endl;
        cout<<"MENU' RUBRICA TELEFONICA "<<endl;
        cout<<"Aggiungi contatto "<<endl;
        cout<<"Cerca contatto "<<endl;
        cout<<"Visualizza contatti "<<endl;
        cout<<"Esci "<<endl;
        cout<<"*******************************************************************"<<endl;
        cin>>s1;
        if(strcmp(s1,aggiungi)==0){
            system("cls");
            caricamento(vettore,o);
            o++;
        }
        if(strcmp(s1,cerca)==0){
            system("cls");
            cout<<"Inserire nome del contatto da ricercare: ";
            cin>>nome;
            ricerca_contatto(vettore,o,nome);
        }
        if(strcmp(s1,visualizza)==0){
            system("cls");
            if(o!=0){
                visualizza_rubrica(vettore,o);
            }
            else{
                cout<<"Mi dispiace non hai amici "<<endl<<endl;
            }
        }
        if (strcmp(s1,esci)==0){
            break;
            p=0;
        }
    }
    while(p==0);
}
void caricamento(struct rubrica vettore[], int o){
    cout<<"Nome: ";
    cin>>vettore[o].nome_contatto;
    cout<<"Cognome: ";
    cin>>vettore[o].cognome_contatto;
    cout<<"Numero telefonico: ";
    cin>>vettore[o].numero_contatto;
    cout<<"Email: ";
    cin>>vettore[o].email_contatto;
}
void visualizza_rubrica(struct rubrica vettore[], int o){
    for(int i=0;i<o;i++){
        cout<<"Nome: "<<vettore[i].nome_contatto<<endl;
        cout<<"Numero: "<<vettore[i].numero_contatto<<endl;
        cout<<endl;
        cout<<"Email: "<<vettore[i].email_contatto<<endl;
        cout<<endl;
        cout<<"------------------------------------------"<<endl;
    }
}
void ricerca_contatto(struct rubrica vettore[], int o, char nome[]){
    int m;
    for(int i=0;i<o;i++){
        if (strcmp (vettore[i].nome_contatto,nome)==0){
            cout<<"Il contatto e' stato trovato!"<<endl;
            cout<<"Nome: "<<vettore[o].nome_contatto<<endl;
            cout<<"Numero: "<<vettore[o].numero_contatto;
            cout<<endl;
            cout<<"Email: "<<vettore[o].email_contatto;
            cout<<endl;
            i=o+1;
            m=1;
        }
    }
    if(m!=1)
        cout<<"Il contatto non e' stato trovato!"<<endl;
}


