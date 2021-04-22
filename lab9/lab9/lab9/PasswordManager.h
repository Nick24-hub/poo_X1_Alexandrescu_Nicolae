#pragma once
#include "User.h"
#include <vector>
#include <string>
#include <map>
#include "PassLength.h"

using namespace std;

class PasswordManager {
	vector<PassLength> analyzer;
	vector<User> usr;
	vector<string> weakPasswords;
public:
	PasswordManager& AddUser(User x);
	vector<string>::iterator WeakPasswordIteratorBegin();
	vector<string>::iterator WeakPasswordIteratorEnd();
	vector<PassLength>::iterator AnalyzerIteratorBegin();
	vector<PassLength>::iterator AnalyzerIteratorEnd();
	User& operator[](const string& userName);
};