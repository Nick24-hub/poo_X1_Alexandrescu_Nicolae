#define _CRT_SECURE_NO_WARNINGS
#include "Phone.h"
#include <cstring>

Phone::Phone()
{
	stars = price = rating = 0;
}

void Phone::SetName(char name[20])
{
	strcpy(this->name, name);
}

char* Phone::GetName()
{
	return name;
}

bool Phone::SetStars(float x)
{
	if (x >= 1 && x <= 5)
	{
		stars = x;
		return true;
	}
	return false;
}

void Phone::SetPrice(float x)
{
	price = x;
}

bool Phone::SetRating(float x)
{
	if (x >= 1 && x <= 10)
	{
		rating = x;
		return true;
	}
	return false;
}

float Phone::GetStars()
{
	return stars;
}

float Phone::GetPrice()
{
	return price;
}

float Phone::GetRating()
{
	return rating;
}

float Phone::averagePricePerStar()
{
	return price/stars;
}
