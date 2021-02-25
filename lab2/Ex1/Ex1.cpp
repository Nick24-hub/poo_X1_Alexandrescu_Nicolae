#include <iostream>
#include "NumberList.h"

int main()
{
    NumberList x;
    x.Init();
    x.Add(2);
    x.Add(7);
    x.Add(5);
    x.Add(1000);
    x.Add(74);
    x.Add(300);
    x.Add(32);
    x.Add(99);
    x.Add(97);
    x.Add(35);
    x.Add(35);
    x.Add(2);
    x.Print();
    x.Sort();
    x.Print();
}