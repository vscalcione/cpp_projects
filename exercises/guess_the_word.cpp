#include <iostream>
#include <cstdlib>
#include <math.h>
#include <time.h>
#include <string.h>
using namespace std;
char a[7][20]={"albero", "tastiera", "forbici", "batteria", "twd", "mare", "vincenzo",};
char f[20];
char rit[3], yes[4]="yes", no[3]="no", ok[3]="ok";
int first_index=0, sce, second_index, error;

int main() {
    system("color 1F");
    cout << "Gioco bello: il ritorno " << endl << endl;
    cout << "Gli argomenti possono essere: " << endl << endl;
    cout << "NATURA" << "\t" << "INFORMATICA" << "\t" << "SCUOLA" << "\t<<" << "ELETTRONICA" << "\t" << "SERIE TV"
         << "\t" << "SUMMER" << "\t" << "3Bi" << endl << endl;
    cout << "GAME OVER " << endl << endl;
    do {
        srand(time(NULL));
        first_index = rand() % 6;
        cout << "Ok, hai 5 tentativi per indovinare la parola! " << endl << endl;
        do {
            cout << "----------------------------------------------------------------------" << endl << endl;
            if (second_index != 4)
                cout << "TENTATIVO NUMERO: " << second_index + 1 << "!" << endl;
            else
                cout << "ULTIMO TENTATIVO!" << endl;
            if (first_index == 0 && second_index == 0)
                cout << "Argomento: NATURA " << endl << endl;
            if (first_index == 1 && second_index == 0)
                cout << "Argomento: INFORMATICA " << endl << endl;
            if (first_index == 2 && second_index == 0)
                cout << "Argomento: SCUOLA " << endl << endl;
            if (first_index == 3 && second_index == 0)
                cout << "Argomento: ELETTRONICA " << endl << endl;
            if (first_index == 4 && second_index == 0)
                cout << "Argomento: SERIE TV (la serie TV in questione � abbreviata) " << endl << endl;
            if (first_index == 5 && second_index == 0)
                cout << "Argomento: SUMMER (cercala sul dizionario, ignorante!) " << endl;
            if (first_index == 6 && second_index == 0)
                cout << "Argomento: CLASSE 3B INF " << endl << endl;
            cout << "Inserisci la parola: ";
            cin >> f;
            if (strcmp(f, a[first_index]) == 0) {
                cout << "Bravo, ora fai qualcosa di costruttivo, per favore. " << endl << endl;
                second_index = 6;
            }
            if (strcmp(f, a[first_index]) != 0) {
                second_index++;
                error++;
            }
            if (first_index == 0) {
                if (strcmp(f, a[first_index]) != 0 && second_index == 0)
                    cout << "Puo' essere molto alto. " << endl;
                if (strcmp(f, a[first_index]) != 0 && second_index == 1)
                    cout << "Contribuisce all'esistenza di noi esseri viventi. " << endl;
                if (strcmp(f, a[first_index]) != 0 && second_index == 2)
                    cout << "D'autunno cambia color. " << endl;
                if (strcmp(f, a[first_index]) != 0 && second_index == 3)
                    cout << "E' utilizzato nell'antica festivita' pagana dei saturnali. " << endl;
                if (strcmp(f, a[first_index]) != 0 && second_index == 4)
                    cout << "Pu� possedere del cibo. " << endl;
            }
            if (first_index == 1) {
                if (strcmp(f, a[first_index]) != 0 && second_index == 0)
                    cout << "E' un componente hardware del computer. " << endl;
                if (strcmp(f, a[first_index]) != 0 && second_index == 1)
                    cout << "E' un input device. " << endl;
                if (strcmp(f, a[first_index]) != 0 && second_index == 2)
                    cout << "E' essenziale per l'utilizzo del computer." << endl;
                if (strcmp(f, a[first_index]) != 0 && second_index == 3)
                    cout << "Puo' essere collegata via cavo o essere wireless. " << endl;
                if (strcmp(f, a[first_index]) != 0 && second_index == 4)
                    cout << "Guardati le mani..... " << endl;
            }
            if (first_index == 2) {
                if (strcmp(f, a[first_index]) != 0 && second_index == 0)
                    cout << "Si utilizzavano molto alle scuole elementari." << endl;
                if (strcmp(f, a[first_index]) != 0 && second_index == 1)
                    cout << "Puo' essere un oggetto molto pericoloso. " << endl;
                if (strcmp(f, a[first_index]) != 0 && second_index == 2)
                    cout << "Possono essere di plastica o di acciaio. " << endl;
                if (strcmp(f, a[first_index]) != 0 && second_index == 3)
                    cout << "E' formato da 2 parti uguali attaccate fra di loro. " << endl;
                if (strcmp(f, a[first_index]) != 0 && second_index == 4)
                    cout << "Si utilizza soprattutto quando si ha che fare con la carta. " << endl;
            }
            if (first_index == 3) {
                if (strcmp(f, a[first_index]) != 0 && second_index == 0)
                    cout << "E' esseziale per il funzionamento di molti oggetti elettronici." << endl;
                if (strcmp(f, a[first_index]) != 0 && second_index == 1)
                    cout << "E' utilizzata per il buon funzionamento di un'auto." << endl;
                if (strcmp(f, a[first_index]) != 0 && second_index == 2)
                    cout << "Puo' essere di varie dimensioni." << endl;
                if (strcmp(f, a[first_index]) != 0 && second_index == 3)
                    cout << "Ha una parte positiva e un altra negativa." << endl;
                if (strcmp(f, a[first_index]) != 0 && second_index == 4)
                    cout << "Ha bisogno di essere sostituita o ricaricata ogni volta." << endl;
            }
            if (first_index == 4) {
                if (strcmp(f, a[first_index]) != 0 && second_index == 0)
                    cout << "E' una serie tv in esclusiva fox." << endl;
                if (strcmp(f, a[first_index]) != 0 && second_index == 1)
                    cout << "E' ancora in via di produzione." << endl;
                if (strcmp(f, a[first_index]) != 0 && second_index == 2)
                    cout << "E' di genere horror/action." << endl;
                if (strcmp(f, a[first_index]) != 0 && second_index == 3)
                    cout << "SPOILER: muore Lori." << endl;
                if (strcmp(f, a[first_index]) != 0 && second_index == 4)
                    cout << "E' molto famosa." << endl;
            }
            if (first_index == 5) {
                if (strcmp(f, a[first_index]) != 0 && second_index == 0)
                    cout << "E' bagnato." << endl;
                if (strcmp(f, a[first_index]) != 0 && second_index == 1)
                    cout << "Rinfresca." << endl;
                if (strcmp(f, a[first_index]) != 0 && second_index == 2)
                    cout << "E' grande." << endl;
                if (strcmp(f, a[first_index]) != 0 && second_index == 3)
                    cout << "Si puo' morire al suo interno." << endl;
                if (strcmp(f, a[first_index]) != 0 && second_index == 4)
                    cout << "Non ha un color." << endl;
            }
            if (first_index == 6) {
                if (strcmp(f, a[first_index]) != 0 && second_index == 0)
                    cout << "E' molto piccolo." << endl;
                if (strcmp(f, a[first_index]) != 0 && second_index == 1)
                    cout << "Ha troppi capelli." << endl;
                if (strcmp(f, a[first_index]) != 0 && second_index == 2)
                    cout << "Ha nettamente contribuito alla realizzazione di questo progetto." << endl;
                if (strcmp(f, a[first_index]) != 0 && second_index == 3)
                    cout << "Se muore la fame nel mondo finira'." << endl;
                if (strcmp(f, a[first_index]) != 0 && second_index == 4)
                    cout << "Ha degli occhiali brutti." << endl;
            }
        }
        while (second_index < 5);
        if (strcmp(f, a[first_index]) == 0) {
            cout << "Ci sono voluti " << error + 1 << " tentativi. " << endl;
            second_index = 0;
            cout << "La parola da indovinare era: " << a[first_index] << endl << endl;
            do {
                cout << "Vuoi fare un'altra partita?: ";
                cin >> rit;
                if (strcmp(rit, yes) != 0 && strcmp(rit, no) != 0 && strcmp(rit, ok) != 0)
                    cout << "Errore: la scelta non � disponibile " << endl << endl;
            } while (strcmp(rit, yes) != 0 && strcmp(rit, no) != 0 && strcmp(rit, ok) != 0);
            if (strcmp(rit, no) == 0)
                break;
        }
    }
    while (strcmp(rit, yes) == 0 or strcmp(rit, ok) == 0);
}
