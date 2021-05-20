#pragma once
#include "Prieten.h"
#include <vector>;
#include "Enum.h"

class Agenda {
	vector<tipContact> agenda;
public:
	Agenda();
	Contact cautaDupaNume(string nume);
	vector<Prieten> listaPrieteni();
	void stergeContact(string nume);
	void adaugaContact(string nume);
};