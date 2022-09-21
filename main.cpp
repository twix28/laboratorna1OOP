#include "coin.h"
#include <iostream>

using namespace std;

//int main()
//{
//	setlocale(0, "");
//	int n;
//	cout << "¬вед≥ть к≥льк≥сть характеристик - " << endl;
//	cin >> n;
//	cin.sync();
//	int *coin_collection = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		cout << "¬вед≥ть " << i << " характеристику монети: ";
//		cin >> coin_collection[i];
//		cin.sync();
//	}
//	COIN* coin_collection[5];
//}
//int main()
//{
//	string harakteristika[5] = {
//		"SetCountry","SetName", "SetYear","SetNominal", "SetPrice"
//	};
//	int n;
//	cout << "¬вед≥ть к≥льк≥сть характеристик - " << endl;
//	cin >> n;
//	COIN mas[10];
//	COIN* mas1 = new COIN[n];
//	for (int i = 0; i < n; i++)
//	{
//		cout << "Vvedite " << i << " harakteristiku: ";
//		cin >> mas[1].SetCountry;
//	}
//	mas[1].SetCountry("Ukraine");
//	mas[1].info();
//	return 0;
//}
int main()
{
	int n;
	cout << "Vvedit' kilkist' monet - ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		COIN* mas1 = new COIN[6];
		cout << "Vvedite country - ";
		cout << "Vvedite name - " << endl;
		cout << "Vvedite year - " << endl;
		cout << "VVedite nominal" << endl;
		cout << "Vvedite price - " << endl;
	}
	return 0;
}