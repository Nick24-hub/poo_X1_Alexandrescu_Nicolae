#include "PassLength.h"

PassLength::PassLength(int index, string name, int length)
{
	this->index = index;
	this->name = name;
	this->length = length;
}

int PassLength::getIndex()
{
	return index;
}

string PassLength::getName()
{
	return name;
}

int PassLength::getLength()
{
	return length;
}
