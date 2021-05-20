#pragma once
#include "Contact.h"

class Cunoscut : public Contact {
	string numarTelefon;
public:
	Cunoscut();
	Cunoscut(string numarTelefon);
	string getNumarTelefon();
	void setNumarTelefon(string numarTelefon);
	string getNume();
	void setNume(string nume);
};