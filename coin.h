#ifndef COIN_H
#define COIN_H

#include <string>
using namespace std;

class COIN
{
private:
	string country;
	string name;
	int year;
	double nominal;
	double price;
public:
	COIN(void);
	COIN(string n_country);
	COIN(string n_country, string n_name);
	COIN(string n_country, string n_name, int n_year);
	COIN(string n_country, string n_name, int n_year, double n_nominal);
	COIN(string n_coutry, string n_name, int n_year, double n_nominal, double n_price);
	void SetCountry(string country) { this->country = country; }
	void SetName(string name) { this->name = name; }
	void SetYear(int year) { this->year = year; }
	void SetNominal(double nominal) { this->nominal = nominal; }
	void SetPrice(double price) { this->price = price; }
	string GetCountry() { return country; }
	string GetName() { return name; }
	int GetYear() { return year; }
	double GetNominal() { return nominal; }
	double GetPrice() { return price; }
	void info();
	~COIN(void);
};

#endif