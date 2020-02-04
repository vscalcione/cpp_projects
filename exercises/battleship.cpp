#include <iostream>
#include <cstdlib>
#include <time.h>
#include <windows.h>

using namespace std;

void legend();

void show_me();

void posizionamento1x4();

void posizionamento1x2();

void posizionamento1x4_cpu();

void posizionamento1x2_cpu();

void set_color();

void attack();

void defense();

void checking();

char direction;
int column, rows, choice, attack_row, attack_column;
int first_index, second_index;
int my_camp[8][8], your_camp[8][8], color[8][8], cpu_color[8][8];
int nave1x4, nave1x4_cpu, nave1x2, nave1x2_cpu, affondate, affondate_cpu;

void set_color(short color) {
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hCon, color);
}

int main() {
    cout << "Gioco bello La Vendetta: BATTAGLIA NAVALE " << endl << endl;
    set_color(15);
    srand(time(NULL));
    for (int first_index = 0; first_index < 8; first_index++) {
        for (int second_index = 0; second_index < 8; second_index++) {
            my_camp[first_index][second_index] = 0;
            your_camp[first_index][second_index] = 0;
            color[first_index][second_index] = 15;
            cpu_color[first_index][second_index] = 15;
        }
    }
    legend();
    posizionamento1x4();
    posizionamento1x4_cpu();
    system("cls");
    show_me();
    posizionamento1x2();
    posizionamento1x2_cpu();
    show_me();
    system("cls");
    while (1) {
        attack();
        checking();
        if (affondate_cpu == 2) {
            cout << "You win" << endl;
            break;
        }
        system("cls");
        defense();
        checking();
        if (affondate == 2) {
            cout << "You lose!" << endl;
            break;
        }
        show_me();
        system("cls");
    }
    system("pause");
    return 0;
}

void legend() {
    rows = 0;
    cout << "\t 0    1    2    3    4    5    6    7" << endl;
    for (int first_index = 0; first_index < 8; first_index++) {
        cout << "\t";
        for (int second_index = 0; second_index < 8; second_index++) {
            cout << ((char) 218) << ((char) 196) << ((char) 196) << ((char) 191) << " ";
        }
        cout << endl << rows << "\t";
        for (second_index = 0; second_index < 8; second_index++) {
            cout << ((char) 179) << " " << " " << ((char) 179) << " ";
        }
        cout << endl << "\t";
        for (second_index = 0; second_index < 8; second_index++) {
            cout << ((char) 192) << ((char) 196) << ((char) 196) << ((char) 217) << " ";
        }
        cout << endl;
        rows++;
        set_color(15);
    }
}

void show_me() {
    rows = 0;
    cout << "\t 0    1    2    3    4    5    6    7" << endl;
    for (first_index = 0; first_index < 8; first_index++) {
        set_color(15);
        cout << "\t";
        for (second_index = 0; second_index < 8; second_index++) {
            set_color(color[first_index][second_index]);
            cout << ((char) 218) << ((char) 196) << ((char) 196) << ((char) 191) << " ";
        }
        set_color(15);
        cout << endl << rows << "\t";
        for (second_index = 0; second_index < 8; second_index++) {
            set_color(color[first_index][second_index]);
            switch (my_camp[first_index][second_index]) {
                case 0:
                    cout << ((char) 179) << " " << " " << ((char) 179) << " ";
                    break;
                case 1:
                    cout << ((char) 179) << ((char) 223) << ((char) 223) << ((char) 179) << " ";
                    break;
                case 2:
                    cout << ((char) 179) << ((char) 254) << ((char) 254) << ((char) 179) << " ";
                    break;
            }
        }
        cout << endl << "\t";
        for (second_index = 0; second_index < 8; second_index++) {
            set_color(color[first_index][second_index]);
            cout << ((char) 192) << ((char) 196) << ((char) 196) << ((char) 217) << " ";
        }
        cout << endl;
        rows++;
        set_color(15);
    }
    system("pause");
}

void posizionamento1x4() {
    do {
        cout << "\ndove vuoi posizionare la nave 1x4?\n";
        cout << "inserisci la row: ";
        cin >> rows;
    } while (rows < 0 || rows > 7);
    do {
        cout << "inserisci la column: ";
        cin >> column;
    } while (column < 0 || column > 7);
    cout << "verso dove vuoi il rest della nave? [a=alto;d=destra;b=basso;s=sinistra]";
    cin >> direction;
    switch (direction) {
        case 'a':
            if (rows - 3 < 0) {
                cout << "IMPOSSIBILE POSIZIONARE QUI LA NAVE";
                posizionamento1x4();
            } else {
                my_camp[rows][column] = 1;
                my_camp[rows - 1][column] = 1;
                my_camp[rows - 2][column] = 1;
                my_camp[rows - 3][column] = 1;
            }
            break;
        case 'd':
            if (column + 3 > 7) {
                cout << "IMPOSSIBILE POSIZIONARE QUI LA NAVE";
                posizionamento1x4();
            } else {
                my_camp[rows][column] = 1;
                my_camp[rows][column + 1] = 1;
                my_camp[rows][column + 2] = 1;
                my_camp[rows][column + 3] = 1;
            }
            break;
        case 'b':
            if (rows + 3 > 7) {
                cout << "IMPOSSIBILE POSIZIONARE QUI LA NAVE";
                posizionamento1x4();
            } else {
                my_camp[rows][column] = 1;
                my_camp[rows + 1][column] = 1;
                my_camp[rows + 2][column] = 1;
                my_camp[rows + 3][column] = 1;
            }
            break;
        case 's':
            if (column - 3 < 0) {
                cout << "IMPOSSIBILE POSIZIONARE QUI LA NAVE";
                posizionamento1x4();
            } else {
                my_camp[rows][column] = 1;
                my_camp[rows][column - 1] = 1;
                my_camp[rows][column - 2] = 1;
                my_camp[rows][column - 3] = 1;
            }
            break;
        default:
            cout << "Direzione non valida!\n";
            posizionamento1x4();
    }
    system("cls");
}

void posizionamento1x2() {
    cout << "\ndove vuoi posizionare la nave 1x2?\n";
    do {
        cout << "inserisci la row: ";
        cin >> rows;
    } while (rows < 0 || rows > 7);
    do {
        cout << "inserisci la column: ";
        cin >> column;
    } while (rows < 0 || rows > 7);
    cout << "verso dove vuoi il rest della nave? [a=alto;d=destra;b=basso;s=sinistra]";
    cin >> direction;
    switch (direction) {
        case 'a':
            if (rows - 1 < 0 || my_camp[rows][column] != 0 || my_camp[rows - 1][column] != 0) {
                cout << "IMPOSSIBILE POSIZIONARE QUI LA NAVE";
                posizionamento1x2();
            } else {
                my_camp[rows][column] = 2;
                my_camp[rows - 1][column] = 2;
            }
            break;
        case 'd':
            if (column + 1 > 7 || my_camp[rows][column] != 0 || my_camp[rows][column + 1] != 0) {
                cout << "IMPOSSIBILE POSIZIONARE QUI LA NAVE";
                posizionamento1x2();
            } else {
                my_camp[rows][column] = 2;
                my_camp[rows][column + 1] = 2;
            }
            break;
        case 'b':
            if (rows + 1 > 7 || my_camp[rows][column] != 0 || my_camp[rows + 1][column] != 0) {
                cout << "IMPOSSIBILE POSIZIONARE QUI LA NAVE";
                posizionamento1x2();
            } else {
                my_camp[rows][column] = 2;
                my_camp[rows + 1][column] = 2;
            }
            break;
        case 's':
            if (column - 1 < 0 || my_camp[rows][column] != 0 || my_camp[rows][column - 1] != 0) {
                cout << "IMPOSSIBILE POSIZIONARE QUI LA NAVE";
                posizionamento1x2();
            } else {
                my_camp[rows][column] = 2;
                my_camp[rows][column - 1] = 2;
            }
            break;
        default:
            cout << "Direzione non valida!\n";
            posizionamento1x2();
    }
    system("cls");
}

void posizionamento1x4_cpu() {
    rows = rand() % (8);
    column = rand() % (8);
    choice = rand() % (4) + 1;
    switch (choice) {
        case 1:
            if (rows - 3 < 0) {
                posizionamento1x4_cpu();
            } else {
                your_camp[rows][column] = 1;
                your_camp[rows - 1][column] = 1;
                your_camp[rows - 2][column] = 1;
                your_camp[rows - 3][column] = 1;
            }
            break;
        case 2:
            if (column + 3 > 7) {
                posizionamento1x4_cpu();
            } else {
                your_camp[rows][column] = 1;
                your_camp[rows][column + 1] = 1;
                your_camp[rows][column + 2] = 1;
                your_camp[rows][column + 3] = 1;
            }
            break;
        case 3:
            if (rows + 3 > 7) {
                posizionamento1x4_cpu();
            } else {
                your_camp[rows][column] = 1;
                your_camp[rows + 1][column] = 1;
                your_camp[rows + 2][column] = 1;
                your_camp[rows + 3][column] = 1;
            }
            break;
        case 4:
            if (column - 3 < 0) {
                posizionamento1x4_cpu();
            } else {
                your_camp[rows][column] = 1;
                your_camp[rows][column - 1] = 1;
                your_camp[rows][column - 2] = 1;
                your_camp[rows][column - 3] = 1;
            }
            break;
    }
}

void posizionamento1x2_cpu() {
    rows = rand() % (8);
    column = rand() % (8);
    choice = rand() % (4) + 1;
    switch (choice) {
        case 1:
            if (rows - 1 < 0 || your_camp[rows][column] != 0 || your_camp[rows - 1][column] != 0) {
                posizionamento1x2_cpu();
            } else {
                your_camp[rows][column] = 2;
                your_camp[rows - 1][column] = 2;
            }
            break;
        case 2:
            if (column + 1 > 7 || your_camp[rows][column] != 0 || your_camp[rows][column + 1] != 0) {
                posizionamento1x2_cpu();
            } else {
                your_camp[rows][column] = 2;
                your_camp[rows][column + 1] = 2;
            }
            break;
        case 3:
            if (rows + 1 > 7 || your_camp[rows][column] != 0 || your_camp[rows + 1][column] != 0) {
                posizionamento1x2_cpu();
            } else {
                your_camp[rows][column] = 2;
                your_camp[rows + 1][column] = 2;
            }
            break;
        case 4:
            if (column - 1 < 0 || your_camp[rows][column] != 0 || your_camp[rows][column - 1] != 0) {
                posizionamento1x2_cpu();
            } else {
                your_camp[rows][column] = 2;
                your_camp[rows][column - 1] = 2;
            }
            break;
    }
}

void attack() {
    rows = 0;
    cout << "\t 0    1    2    3    4    5    6    7" << endl;
    for (first_index = 0; first_index < 8; first_index++) {
        cout << "\t";
        for (second_index = 0; second_index < 8; second_index++) {
            set_color(cpu_color[first_index][second_index]);
            cout << ((char) 218) << ((char) 196) << ((char) 196) << ((char) 191) << " ";
        }
        set_color(15);
        cout << endl << rows << "\t";
        for (second_index = 0; second_index < 8; second_index++) {
            set_color(cpu_color[first_index][second_index]);
            cout << ((char) 179) << ((char) 219) << ((char) 219) << ((char) 179) << " ";
        }
        cout << endl << "\t";
        for (second_index = 0; second_index < 8; second_index++) {
            set_color(cpu_color[first_index][second_index]);
            cout << ((char) 192) << ((char) 196) << ((char) 196) << ((char) 217) << " ";
        }
        cout << endl;
        rows++;
        set_color(15);
    }
    do {
        cout << "scegli dove attaccare:\nrow: ";
        cin >> attack_row;
    } while (attack_row < 0 || attack_row > 7);
    do {
        cout << "column: ";
        cin >> attack_column;
    } while (attack_column < 0 || attack_column > 7);
    if (cpu_color[attack_row][attack_column] != 15) {
        cout << "CASELLA GIA\' ATTACCATA!!" << endl;
        system("pause");
        attack();
    }
    system("cls");
    if (your_camp[attack_row][attack_column] == 0) {
        cpu_color[attack_row][attack_column] = 9;
    } else {
        cpu_color[attack_row][attack_column] = 12;
        switch (your_camp[attack_row][attack_column]) {
            case 1:
                nave1x4_cpu++;
                break;
            case 2:
                nave1x2_cpu++;
                break;
        }
    }
    rows = 0;
    cout << "\t 0    1    2    3    4    5    6    7" << endl;
    for (first_index = 0; first_index < 8; first_index++) {
        cout << "\t";
        for (second_index = 0; second_index < 8; second_index++) {
            set_color(cpu_color[first_index][second_index]);
            cout << ((char) 218) << ((char) 196) << ((char) 196) << ((char) 191) << " ";
        }
        set_color(15);
        cout << endl << rows << "\t";
        for (second_index = 0; second_index < 8; second_index++) {
            set_color(cpu_color[first_index][second_index]);
            cout << ((char) 179) << ((char) 219) << ((char) 219) << ((char) 179) << " ";
        }
        cout << endl << "\t";
        for (second_index = 0; second_index < 8; second_index++) {
            set_color(cpu_color[first_index][second_index]);
            cout << ((char) 192) << ((char) 196) << ((char) 196) << ((char) 217) << " ";
        }
        cout << endl;
        rows++;
        set_color(15);
    }
    system("pause");
}

void defense() {
    attack_row = rand() % (8);
    attack_column = rand() % (8);
    if (color[attack_row][attack_column] != 15) {
        defense();
    }
    if (my_camp[attack_row][attack_column] == 0) {
        color[attack_row][attack_column] = 9;
    } else {
        color[attack_row][attack_column] = 12;
        switch (my_camp[attack_row][attack_column]) {
            case 1:
                nave1x4++;
                break;
            case 2:
                nave1x2++;
                break;
        }
    }
    cout << endl << "L' avversario ha attaccato la casella: " << attack_row << "," << attack_column << endl << endl;
}

void checking() {
    if (nave1x4 == 4) {
        cout << "Hanno affondato la tua nave 1x4" << endl;
        affondate++;
        nave1x4 = 0;
        system("pause");
    }
    if (nave1x2 == 2) {
        cout << "Hanno affondato la tua nave 1x2" << endl;
        affondate++;
        nave1x2 = 0;
        system("pause");
    }
    if (nave1x4_cpu == 4) {
        cout << "Hai affondato la nave 1x4 nemica" << endl;
        affondate_cpu++;
        nave1x4_cpu = 0;
        system("pause");
    }
    if (nave1x2_cpu == 2) {
        cout << "Hai affondato la nave 1x2 nemica" << endl;
        affondate_cpu++;
        nave1x2_cpu;
        system("pause");
    }
}