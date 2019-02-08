// Zahlenraten.cpp : Definiert den Einstiegspunkt für die Konsolenanwendung.
//

#include "stdafx.h"
#include <iostream>
#include <ctime>

using namespace std;


int main()
{
	int Zufallszahl;
	int Eingabezahl;
	int Differenz;
	bool Korrekt = false;

	srand(time(0));
	Zufallszahl = rand() % ((100 - 0) + 1) - 0;

	while (!Korrekt)
	{
		cout << "Bitte geben Sie eine Zahl zwischen 0 und 100 ein (Zufallszahl: " << Zufallszahl << "): ";
		cin >> Eingabezahl;

		Differenz = abs(Zufallszahl - Eingabezahl);

		if (Differenz == 0)
		{
			cout << "Korrekt";
			Korrekt = true;
		}
		else if (Differenz > 0 && Differenz <= 10)
			cout << "Heiss\n";
		else
			cout << "Kalt\n";
	}

	system("PAUSE");
}