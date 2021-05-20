#include "Prieten.h"

Prieten::Prieten()
{
	nume = "";
	dataNastere = "";
	numarTelefon = "";
	adresa = "";
}

Prieten::Prieten(string dataNastere, string numarTelefon, string adresa)
{
	this->nume = nume;
	this->dataNastere = dataNastere;
	this->numarTelefon = numarTelefon;
	this->adresa = adresa;
}

string Prieten::getNume()
{
	return nume;
}

void Prieten::setNume(string nume)
{
	this->nume = nume;
}

string Prieten::getDataNastere()
{
	return dataNastere;
}

void Prieten::setDataNastere(string dataNastere)
{
	this->dataNastere = dataNastere;
}

string Prieten::getNumarTelefon()
{
	return numarTelefon;
}

void Prieten::setNumarTelefon(string numarTelefon)
{
	this->numarTelefon = numarTelefon;
}

string Prieten::getAdresa()
{
	return adresa;
}

void Prieten::setAdresa(string adresa)
{
	this->adresa = adresa;
}
