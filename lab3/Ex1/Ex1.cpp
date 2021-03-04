#include <iostream>
#include "Printer.h"

int main()
{

    Printer x;
    x.PrintAdd(1, 2);
    x.PrintAdd(1, 2, 3);
    x.PrintAdd(1.1, 2.5);
    x.PrintAdd(1.3, 2.2, 3.5);
    x.PrintMul(1, 2);
    x.PrintMul(1, 2, 3);
    x.PrintMul(1.1, 2.5);
    x.PrintMul(1.3, 2.2, 3.5);
    x.PrintAdd(7, 2, 2, 2, 2, 2, 2, 2);
    x.PrintAdd("Hello", "World!");
    x.PrintAdd( nullptr,"Hello");
}

