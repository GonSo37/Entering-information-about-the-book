#include <iostream>

using namespace std;

class ksiazka {
public:
	string autor, tytul, wydawca;
	void WypiszTytul(string* autor, string* tytul, string* wydawca);
};
void ksiazka::WypiszTytul(string* autor, string* tytul, string* wydawca)
{
	cout << "Wpisz autora: ";  cin >> *autor;
	cout << "Wpisz tytul: ";  cin >> *tytul;
	cout << "Wpisz wydawca: ";  cin >> *wydawca;
}

void wpisz() {

}
void wczytaj(ksiazka* wpisz, string autor, string tytul, string wydawca)
{
	(*wpisz).autor = autor;
	(*wpisz).tytul = tytul;
	(*wpisz).wydawca = wydawca;
}
void wypisz(ksiazka ksiaz)
{
	cout << "tytul: " << ksiaz.tytul << endl
		<< "autor: " << ksiaz.autor << endl
		<< "wydawca: " << ksiaz.wydawca << endl;
}
int main()
{
	string autor, tytul, wydawca;
	ksiazka ksiaz;
	ksiaz.WypiszTytul(&autor, &tytul, &wydawca);
	wczytaj(&ksiaz, autor, tytul, wydawca);
	wypisz(ksiaz);
	
	
}

