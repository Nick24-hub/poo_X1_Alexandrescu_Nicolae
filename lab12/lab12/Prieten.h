#pragma once
#include "Contact.h"

class Prieten : public Contact {
	string dataNastere;
	string numarTelefon;
	string adresa;
public:
	Prieten();
	Prieten(string nume,string dataNastere, string numarTelefon, string adresa);
	string getNume();
	void setNume(string nume);
	string getDataNastere();
	void setDataNastere(string dataNastere);
	string getNumarTelefon();
	void setNumarTelefon(string numarTelefon);
	string getAdresa();
	void setAdresa(string adresa);
};