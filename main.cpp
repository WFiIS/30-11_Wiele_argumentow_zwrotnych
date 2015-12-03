#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

void zamien(int &a, int &b);
void sor(int liczby[], int &wielkosc);
void wypisz(int liczby[], int &wielkosc);

int main()
{
    time_t t;
    srand((unsigned) time(&t));
    int liczba;
    int liczby[20];
    int wielkosc = sizeof(liczby)/sizeof(*liczby);


    for (int i = 0; i < wielkosc; i++) {
        liczby[i] = rand() % 10;
    }
    cout << "Przed sortowaniem: ";
    wypisz(liczby, wielkosc);

    sor(liczby, wielkosc);

    cout << "Po sorrtowaniu:    ";
    wypisz(liczby, wielkosc);

    cout << endl << endl;

    int a = 22;
    int b = 13;

    cout << "Przed Zamiana: " << a << ", " << b;
    zamien(a, b);
    cout << endl;
    cout << "Po zamianie:   " << a << ", " << b;
    cout << endl << endl;

    return 0;
}

void zamien(int &a, int &b) {
    int buff = a;
    a = b;
    b = buff;
}

void sor(int liczby[], int &wielkosc) {
    for (int j = 0; j < (wielkosc - 1); j++) {
        for (int i = 0; i < wielkosc; i ++) {
            if (liczby[i] > liczby[i + 1]) {
                int buff = liczby[i];
                liczby[i] = liczby[i + 1];
                liczby[i + 1] = buff;
            }
        }
    }
}

void wypisz(int liczby[], int &wielkosc) {
    for (int i = 0; i < wielkosc; i++) {
        cout << liczby[i];
        if (i != wielkosc - 1) {
            cout << ", ";
        }
    }
    cout << endl;
}
