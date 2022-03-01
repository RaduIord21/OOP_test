#include <iostream>
#include <cstring>

using namespace std;

struct Masina {
    char marca[50];
    int an_fabricatie;
    char combustibil[20];

    void citire_masina();

    void afisare_masina();
};

void Masina::citire_masina() {
    cin.clear();
    cin.ignore();
    cin.sync();
    cout << "Marca :";
    cin.get(marca, 50);
    getchar();
    cout << "An Fabricatie :";
    cin >> an_fabricatie;
    getchar();
    cout << "Combustibil :";
    cin.get(combustibil, 20);
    getchar();
}

void Masina::afisare_masina() {
    cout << "marca :" << marca << endl;
    cout << "An :" << an_fabricatie << endl;
    cout << "Combustibil :" << combustibil << endl;
}

void citire_masini(int n, Masina t[]) {
    for (int i = 0; i < n; i++) {
        t[i].citire_masina();
        cout << endl;
    }
}

void afisare_masini(int n, Masina t[]) {
    for (int i = 0; i < n; i++) {
        t[i].afisare_masina();
        cout << endl;
    }

}

void tip_combustibil(int n, Masina t[]) {
    char tip_combustibil[20];
    cout << "Alege tipul de Combustibil :" << endl;
    cin.get(tip_combustibil, 20);
    for (int i = 0; i < n; i++) {
        if (strcmp(tip_combustibil, t[i].combustibil) == 0) {
            t[i].afisare_masina();
            cout << endl;
        }

    }

}

int main() {
    Masina m[3];
    citire_masini(3, m);
    afisare_masini(3, m);
    cout << endl;
    tip_combustibil(3, m);
}

