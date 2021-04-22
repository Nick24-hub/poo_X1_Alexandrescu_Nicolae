#pragma once

#include <string>

using namespace std;

class User {
	string name;
	string password;
public:
	User(string nume, string parola);
	string getName();
	string getPassword();
};