#include "User.h"
#include <string>

User::User(string nume, string parola)
{
	name = nume;
	password = parola;
}

string User::getName()
{
	return name;
}

string User::getPassword()
{
	return password;
}
