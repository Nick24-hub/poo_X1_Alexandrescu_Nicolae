#pragma once

class Phone {
	char name[20];
	float stars,price,rating;

public:
	Phone();
	void SetName(char name[20]);
	char* GetName();
	bool SetStars(float x);
	void SetPrice(float x);
	bool SetRating(float x);
	float GetStars();
	float GetPrice();
	float GetRating();
	float averagePricePerStar();
};
