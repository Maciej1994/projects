#include <iostream>
#include <conio.h>
#include<cstdlib>
#include <string>
#include <stdio.h>
#include <algorithm>
#include <cmath>



using namespace std;


void napis()
{
    cout << " witamy w kalkulatorze !\n"
        " Operacje:\n"
        "1. dodawanie 2. odejmowanie\n"
        "3. mnozenie  4. dzielenie\n"
        "5. silnia    6. potega\n"
        "7. pierwiastek\n";
}


void dodawanie(double x, double y)
{
    cout << " wynik: " << x + y;
}
void odejmowanie(double x, double y)
{
    cout << " wynik: " << x - y;

}
void mnozenie(double x, double y)
{
    cout << " wynik: " << x * y;
}
void dzielenie(double x, double y)
{
    if (y == 0)
        cout << " nie dzielimy przez 0!" << endl;
    else
        cout << " wynik: " << x / y;
}

void silnia(long long x)
{
    long long silnia = 1;

    for (int i = (int)x; i > 1; i--)
    {
        silnia *= (long long)i;
    }

    cout << (int)x << " ! " << "= " << silnia << endl;

}
void potega(double x, double y)
{

    double potega;

    cout << "Do ktorej potegi podniesc liczbe " << x << "? Wpisz wartosc: ";
    cin >> potega;

    cout << "pow(" << x << "," << potega << ")=" << pow(x, potega) << endl;

}
void pierwiastek(double x)
{
    double wynik;
    wynik = sqrt(x);
    cout << "sqrt( " << x << " ) = " << wynik << endl;
}



void obliczenia(double x, double y, char znak) {
    
 
    switch (znak)
    {
    case '1':
    {
        dodawanie(x, y); break;
    }
    case '2':
    {
        odejmowanie(x, y); break;
    }
    case '3':
    {
        mnozenie(x, y); break;
    }
    case '4':
    {
        dzielenie(x, y); break;
    }
    case '5':
    {
        silnia(x); break;
    }
    case '6':
    {
        potega(x, y); break;
    }
    case '7':
    {
        pierwiastek(x); break;
    }

    default:
    {
        cout << "nie ma takiego znaku!" << endl; break;
    }
  }  
}

int main()
{
    double x = 0;
    double y = 0;
    char znak;

    for (;;) {
        napis();

        cout << "podaj pierwa liczbe: ";
        while (!(cin >> x)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "To nie jest liczba. Wpisz ponownie ";
        }
        cout << "operacja: ";
        while (!(cin >> znak)) {
            cin.clear();

            if (znak == '5' || znak == '6' || znak == '7')
            {
            }
            else
            {
                cout << "podaj druga liczbe: ";
                while (!(cin >> y)) {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                    cout << "To nie jest liczba. Wpisz ponownie ";
                }
            }
        }
        obliczenia(x, y, znak);
        getchar(); getchar();
        system("cls");
    }
    return 0;

}