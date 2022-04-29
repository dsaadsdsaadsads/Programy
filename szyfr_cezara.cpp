// szkola2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;
void Funkcja(char tab[], int klucz) {
    int dl;
    dl = strlen(tab);
    if (!(klucz >= -26 && klucz <= 26)) {
        exit;
    }

    if (klucz >= 0) {
        for (int i = 0; i < dl; i++) {
            if (tab[i] + klucz <= 'z') {
                tab[i] += klucz;
            }
            else {
                tab[i] = tab[i] + klucz - 26;
            }
            
        }
    }
    else
    {
        for (int i = 0; i < dl; i++) {
            if (tab[i] + klucz >= 'a') {
                tab[i] += klucz;
            }
            else {
                tab[i] = tab[i] + klucz + 26;
            }

        }
    }
}
int main()
{
    int klucz;
    char tab[1001];
    cout << "Podaj liczbę przesunięcia: ";
    cin >> klucz;
    cout << "Podaj słowo: ";
    cin >> tab;
    Funkcja(tab, klucz);
    cout << "Po szyfrowaniu: " << tab << "\n";
    Funkcja(tab, -klucz);
    cout << "Po rozszyfrowaniu: " << tab << "\n";
}

