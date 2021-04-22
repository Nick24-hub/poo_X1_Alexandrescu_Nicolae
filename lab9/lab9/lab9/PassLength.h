#pragma once

#include <string>

using namespace std;

class PassLength {
public:
	int index;
	string name;
	int length;
	PassLength(int index, string name, int length);
	int getIndex();
	string getName();
	int getLength();
};