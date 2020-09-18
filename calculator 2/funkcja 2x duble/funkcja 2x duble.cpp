#include <iostream>
#include <conio.h>
using namespace std;




char znak; //zmienna globalna
double z = 0; //zmienna globalna

void wybierz()
{
    cout << " co chcesz zrobic? :";
    cin >> znak;
}

double options(int count)
{
    
    if (znak == '1' || znak == '2')
    {

        cout << "podaj " << count << " liczbe: " << endl;
        double x = 0;
        
        while (!(cin >> x)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "To nie jest liczba. Wpisz ponownie ";
        }
    
        return x;

    }
  
    else if (znak == '3')
    {
        cout << " podaj liczbe: ";
        while (!(cin >> z)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "To nie jest liczba. Wpisz ponownie ";
        }
    }

    return z;
}

void menu()
{
    cout << " witamy" << endl;
    cout << "MENU" << endl;
    cout << "--------" << endl;
    cout << "1.dodawanie" << endl;
    cout << "2.odejmowanie" << endl;
    cout << "3.silnia" << endl;
    
    cout << endl;
}

void dodawanie(double x, double y) {
    cout << "wynik = " << x+y << endl;
}

void odejmowanie(double x, double y) {
    cout << "wynik = " << x-y << endl;
}

void silnia(double z) {
    long long silnia = 1;

    for (int i = (int)z; i > 1; i--)
    {
        silnia *= (long long)i;
    }

    cout << (int)z << " ! " << "= " << silnia << endl;
}


void liczenie()
{
        double x = options(1);
        double y = options(2);
        
    switch (znak)
    {
    case '1': {
        dodawanie(x,y); break;
    }
    case '2':
    {
        odejmowanie(x,y); break;
    }
    case '3': {
        silnia(z); break;
    }
    default: {
        cout << " nie ma takiej opcji" << endl;
    }

    }
}




int main()
{
    for (;;)
    {

        menu();
        wybierz();
        liczenie();
        getchar(); getchar();
        system("cls");
    }
    return 0;
}