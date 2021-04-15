#include <fstream>
#include <iostream>
#include "Student.h"

using namespace std;

ifstream fin("input.txt");

int main()
{
	int i, note[20], j, nrNote;
	Student x;
	string str, materie;

	while (getline(fin, str)) {
		j = 0;
		nrNote = 0;
		materie = "";
		auto it = str.begin();

		while (*it != ' ' && it != str.end())
		{
			materie += *it;
			it++;
		}

		while (it != str.end())
		{
			if (*it >= '0' && *it <= '9')
				note[j++] = *it - '0';
			it++;
		}
		nrNote = j;
		for (j = 0;j < nrNote;++j)
			x.AdaugaNota(materie, note[j]);
	}
	x.PrinteazaNote();
}

