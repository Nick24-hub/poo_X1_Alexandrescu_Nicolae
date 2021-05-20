#include "Coleg.h"

Coleg::Coleg()
{
	nume = "";
	numarTelefon = "";
	firma = "";
	adresa = "";
}

Coleg::Coleg(string nume,string numarTelefon, string firma, string adresa)
{
	this->nume = nume;
	this->numarTelefon = numarTelefon;
	this->firma = firma;
	this->adresa = adresa;
}

string Coleg::getNume()
{
	return nume;
}

void Coleg::setNume(string nume)
{
	this->nume = nume;
}

string Coleg::getNumarTelefon()
{
	return numarTelefon;
}

void Coleg::setNumarTelefon(string numarTelefon)
{

}
