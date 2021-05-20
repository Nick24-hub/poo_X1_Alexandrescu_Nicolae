#pragma once
#include "Contact.h"

class Coleg : public Contact {
	string numarTelefon;
	string firma;
	string adresa;
public:
	Coleg();
	Coleg(string nume,string numarTelefon,string firma,string adresa);
	string getNume();
	void setNume(string nume);
	string getNumarTelefon();
	void setNumarTelefon(string numarTelefon);
	string getFirma();
	void setFirma(string firma);
	string getAdresa();
	void setAdresa(string adresa);
};