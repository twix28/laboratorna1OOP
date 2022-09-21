#include <iostream>
#include "coin.h"

using namespace std;

COIN::COIN(void)
{
	country = "";
	name = "";
	year = 0;
	nominal = 0;
	price = 0;
}

COIN::COIN(string n_country)
{
	country = n_country;
	name = "";
	year = 0;
	nominal = 0;
	price = 0;
}

COIN::COIN(string n_country, string n_name)
{
	country = n_country;
	name = n_name;
	year = 0;
	nominal = 0;
	price = 0;
}

COIN::COIN(string n_country, string n_name, int n_year)
{
	country = n_country;
	name = n_name;
	year = n_year;
	nominal = 0;
	price = 0;
}

COIN::COIN(string n_country, string n_name, int n_year, double n_nominal)
{
	country = n_country;
	name = n_name;
	year = n_year;
	nominal = n_nominal;
	price = 0;
}

COIN::COIN(string n_country, string n_name, int n_year, double n_nominal, double n_price)
{
	country = n_country;
	name = n_name;
	year = n_year;
	nominal = n_nominal;
	price = n_price;
}
COIN::~COIN(void)
{

}
void COIN::info()
{
	cout << "country - " << country << endl;
	cout << "name  - " << name << endl;
	cout << "year - " << year << endl;
	cout << "nominal - " << nominal << endl;
	cout << "price - " << price << endl;
}