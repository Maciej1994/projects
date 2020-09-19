#include <iostream>
#include <conio.h>

using namespace std;

//nie robimy zmiennych globalnych jeśli to nie jest konieczne. nie nazywamy ich z. co znaczy z?

//dlaczego wszystkie funkcje to void? można zwracać wynik.
//naywamy precyzyjnie funkcje. co znaczy wybierz? wybierz jajko, melona, vanisha?

//jeśli nie używasz .h do deklaracji to deklrauj do góry pliku funkcje. nie polecam - do nauki

//zainstaluj formater kodu.

char wybierz_opcje();
double podaj_liczbe(int index);
void wybor();
double* podaj_2liczby();
void menu();
double oblicz_dodawanie();
double oblicz_odejmowanie();
long oblicz_silnie();
void nie_ma_takiej_opcji();
void wypisz_wynik(double wynik);
void main_loop();
void press_key_to_continue();
void exit();

int main()
{
	main_loop();
}

void main_loop() {
	while (true)
	{
		menu();
		wybor();
		press_key_to_continue();
		system("cls");
	}
}

char wybierz_opcje()
{
	char wybor;
	cout << "Co chcesz zrobic?: ";
	cin >> wybor;
	return wybor;
}

double podaj_liczbe(int index) {
	double x;

	if (index == 1 || index == 2) {
		cout << "Podaj " << index << "." << " liczbe" << endl;
	}
	else cout << "Podaj liczbe " << endl;

	while (!(cin >> x)) {
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout << "To nie jest liczba. Wpisz ponownie ";
	}
	return x;
}

//albo po polsku albo po angielsku. lepiej po angielsku.
void wybor()
{
	char wybor = wybierz_opcje();
	double wynik = 0;

	switch (wybor) {
	case '1':
	{
		wynik = oblicz_dodawanie();
		break;
	}
	case '2':
	{
		wynik = oblicz_odejmowanie();
		break;
	}
	case '3':
	{
		wynik = oblicz_silnie();
		break;
	}
	case 'q':
	{
		exit();
		break;
	}
	default:
	{
		nie_ma_takiej_opcji();
		break;
	}
	}

	wypisz_wynik(wynik);
}
double* podaj_2liczby() {
	double liczby[2];
	liczby[0] = podaj_liczbe(1);
	liczby[1] = podaj_liczbe(2);

	return liczby;
}

//to jest okej
void menu()
{
	cout << "MENU" << endl;
	cout << "--------" << endl;
	cout << "1--->dodawanie" << endl;
	cout << "2--->odejmowanie" << endl;
	cout << "3--->silnia" << endl;
	cout << "q--->wyjscie" << endl;

	cout << endl;
}
//funkcja ma robić jedną rzecz a nie liczyć, wypisywać i pytać o liczby.

double oblicz_dodawanie() {
	double* liczby = podaj_2liczby();
	double wynik = liczby[0] + liczby[1];
	return wynik;
}

double oblicz_odejmowanie() {
	double* liczby = podaj_2liczby();
	double wynik = liczby[0] - liczby[1];
	return wynik;
}

long oblicz_silnie() {
	float liczba = podaj_liczbe(0);
	long silnia = 1;

	for (int i = (int)liczba; i > 1; i--)
	{
		silnia *= (int)i;
	}
	return silnia;
}
void wypisz_wynik(double wynik) {
	cout << "Wynik to: " << wynik << endl;
}

void nie_ma_takiej_opcji() {
	cout << "Nie ma takiej opcji" << endl;
}

void press_key_to_continue() {
	cout << "Press any key to continue...";
	_getch();
}
void exit() {
	cout << "Bye bye!" << endl;
	exit(0);
}