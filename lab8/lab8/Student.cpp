#include "Student.h"
#include<iostream>
using namespace std;

void Student::AdaugaNota(string materie, int nota)
{
	catalog[materie][nrNote[materie]] = nota;
	nrNote[materie] ++;
}

void Student::PrinteazaNote()
{
	for (auto it = catalog.begin(); it != catalog.end(); ++it)
	{
		for (int i = 0;i < nrNote[it->first];++i)
			cout << it->first << " " << catalog[it->first][i] << '\n';
	}
}
