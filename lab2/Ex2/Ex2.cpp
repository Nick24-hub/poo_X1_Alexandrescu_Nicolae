#include <iostream>
#include "Phone.h"
#include "Global.h"

using namespace std;

int main()
{
    char nume1[20] = "iPhone";
    char nume2[20] = "Samsung";
    Phone x, y;
    x.SetName(nume1);
    y.SetName(nume2);
    x.SetStars(4.9);
    y.SetStars(4.8);
    x.SetStars(19);
    x.SetPrice(1600.99);
    y.SetPrice(990.80);
    x.SetRating(9.5);
    x.SetRating(0.5);
    y.SetRating(9.5);
    cout << "Rezultatul functiei \"compareName\" este: " << compareName(x, y) << '\n';
    cout << "Rezultatul functiei \"compareStars\" este: " << compareStars(x, y) << '\n';
    cout << "Rezultatul functiei \"comparePrice\" este: " << comparePrice(x, y) << '\n';
    cout << "Rezultatul functiei \"compareRating\" este: " << compareRating(x, y) << '\n';
    cout << "Rezultatul functiei \"compareAvg\" este: " << compareAvg(x, y) << '\n';
}

