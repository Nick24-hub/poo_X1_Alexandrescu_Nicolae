#pragma once
#include <string>
using namespace std;

class Contact {
protected:
	string nume;
public:
	Contact();
	Contact(string nume);
	virtual string getNume() = 0;
	virtual void setNume(string nume) = 0;
};