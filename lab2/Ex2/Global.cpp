#include "Global.h"
#include <cstring>

int compareName(Phone x, Phone y)
{
	if (strcmp(x.GetName(), y.GetName()) == 0)
		return 0;
	if (strcmp(x.GetName(), y.GetName()) < 0)
		return -1;
	if (strcmp(x.GetName(), y.GetName()) > 0)
		return 1;
}

int compareStars(Phone x, Phone y)
{
	if (x.GetStars() == y.GetStars())
		return 0;
	if (x.GetStars() < y.GetStars())
		return -1;
	if (x.GetStars() > y.GetStars())
		return 1;
}

int comparePrice(Phone x, Phone y)
{
	if (x.GetPrice() == y.GetPrice())
		return 0;
	if (x.GetPrice() < y.GetPrice())
		return -1;
	if (x.GetPrice() > y.GetPrice())
		return 1;
}

int compareRating(Phone x, Phone y)
{
	if (x.GetRating() == y.GetRating())
		return 0;
	if (x.GetRating() < y.GetRating())
		return -1;
	if (x.GetRating() > y.GetRating())
		return 1;
}

int compareAvg(Phone x, Phone y)
{
	if (x.averagePricePerStar() == y.averagePricePerStar())
		return 0;
	if (x.averagePricePerStar() < y.averagePricePerStar())
		return -1;
	if (x.averagePricePerStar() > y.averagePricePerStar())
		return 1;
}
