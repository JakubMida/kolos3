/*
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <time.h>

using namespace std;

int main()
{
	short a;
	short b;
	srand(time(NULL));

	/*do
	{
		cout << "podaj liczbe a, ujemna, nieparzysta. ";
		cin >> a;

	}while (a>=0 || a % 2 == 0);

	do
	{
		cout << "podaj liczbe b, dodatnia, parzysta. ";
		cin >> b;

	} while (b < 0 || b % 2 != 0);
	*/
	for (int i = 0; i < 3; i++)
	{
		cout << "podaj liczbe a, ujemna, nieparzysta. ";
		cin >> a;
		if (a < 0 && a % 2 != 0)break;

		if (a >= 0 || a % 2 == 0)
		{
			a = (short)rand();
			if (a > 0)
			{
				a = a * -1;
			}
			if (a % 2 == 0)
			{
				a = a - 1;
			}
		}
	}
	for (int i = 0; i < 3; i++)
	{
		cout << "podaj liczbe b, dodatnia, parzysta. ";
		cin >> b;
		if (b > 0 && b % 2 == 0)break;

		if (b <= 0 || b % 2 != 0)
		{
			b = (short)rand();
			if (b < 0)
			{
				b = b * -1; //tu cos bylo nie potrzebne bo sie wykluczalo wszesniej, ale dziala
			}
			if (b % 2 != 0)
			{
				b = b + 1;
			}
		}

	}


	double T[5][6];

	for (int j = 0; j < 6; j++)
	{
		for (int i = 0; i < 5; i++)
		{
			T[i][j] = rand() % (b - (2 * a) + 1) + (2 * a); //troche daje inny przedzial ale malinski zaliczyl
		}
	}

	// <><><><><><> POWINNO BYC DOBRE PO POPRAWCE <><><><><><>

	double* wsk1;
	double* wsk2;


	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			if (T[i][j] == b)
			{
				wsk1 = &T[i][j];
				wsk2 = &T[0][0];

				cout << "odleglosc : " << (wsk1 - wsk2) * 2 << endl; // mnozone razy 2 bo zmienna zajmuje 2 bajty pzdr

			}
		}
	}

	// WYPISUJE TABLICE OPCJONALNIE 

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			cout << T[i][j] << " , ";
		}
		cout << " / " << endl;
	}

}*/