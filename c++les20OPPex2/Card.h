#pragma once
#include <iostream>
#include <cstring>
using namespace std;


class Card
{
	unsigned long cardnumber;
	char* name;
	char date[6];
	int pin;
	float cash;

public:
	Card() {
		cardnumber = rand() * 10000 + rand();
		name = new char[10] {"undefined"};
		strcpy_s(date, 6, "01.34");
		pin = rand() % (8000) + 1000;
		cash = 0;
		cout << "Opened standart card" << cardnumber << endl;
		cout << "PIN code: " << pin << endl;
	}
	Card(const char* name) {
		cardnumber = rand() * 10000 + rand();

		int sizename = strlen(name) + 1;
		this->name = new char[sizename];
		strcpy_s(this->name, sizename, name);

		strcpy_s(date, 6, "01.34");
		pin = rand() % (8000) + 1000;
		cash = 1000;
		cout << "Opened VIP card: " << cardnumber << endl;
		cout << "PIN code: " << pin << endl;
	}
	~Card() {
		cout << "Closed card: " << cardnumber << endl;
		delete[] name;
	}

	unsigned long getCardnumber() {
		return cardnumber;
	}
	const char* getName() {
		return name;
	}
	const char* getDate() {
		return date;
	}
	int getPin() {
		return pin;
	}
	float getCash() {
		return cash;
	}

	void setPin(int oldpin, int newpin) {
		if (oldpin != pin)cout << "ERROR: WRONG PIN CODE"<<endl;
		else {
			pin = newpin;
			cout << "Updated PIN: " << pin << endl;
		}
	}

	void showInfo() {
		cout << "Card numbeer: " << cardnumber << endl;
		cout << "Name: " << name << endl;
		cout << "Ex. date: " << date << endl;
		cout << "Cash: " << cash << "HRN" << endl;
	}
};

