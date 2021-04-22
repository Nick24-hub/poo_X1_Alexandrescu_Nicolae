#include "PasswordManager.h"
#include "User.h"


PasswordManager& PasswordManager::AddUser(User x)
{
	PassLength a(usr.size(),x.getName(), x.getPassword().size());
	analyzer.push_back(a);
	usr.push_back(x);
	if (x.getPassword().size() < 8)
		weakPasswords.push_back(x.getPassword());
	return *this;
}

vector<string>::iterator PasswordManager::WeakPasswordIteratorBegin()
{
	return weakPasswords.begin();
}

vector<string>::iterator PasswordManager::WeakPasswordIteratorEnd()
{
	return weakPasswords.end();
}

vector<PassLength>::iterator PasswordManager::AnalyzerIteratorBegin()
{
	return analyzer.begin();
}

vector<PassLength>::iterator PasswordManager::AnalyzerIteratorEnd()
{
	return analyzer.end();
}

User& PasswordManager::operator[](const string& userName)
{
	for (auto it = usr.begin(); it != usr.end(); it++) 
	{
		if (it->getName() == userName)
			return *it;
	}
}
