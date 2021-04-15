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
		i = 0;
		j = 0;
		nrNote = 0;
		materie = "";
		while (str[i] != ' ')
		{
			materie += str[i];
			i++;
		}
		i++;
		while (str[i] != '\n')
		{
			if (str[i] >= '0' && str[i] <= '9')
				note[j++] = str[i] - '0';
			i++;
		}
		nrNote = j;
		for (j = 0;j < nrNote;++j)
			x.AdaugaNota(materie, note[j]);
	}

}

