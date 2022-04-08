#include <iostream>
using namespace std;


int main()
{
    int a;
    int b;
    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;

    int x = a * b;

    while (a != b)
    {
        if (a < b) {
            b = b - a;
        }
        else {
             a = a - b;
        }    
    }
    cout << "NWD: ";
    cout << a;
    int nwd = x / a;
    cout << "NWW: ";
    cout << nwd;
}