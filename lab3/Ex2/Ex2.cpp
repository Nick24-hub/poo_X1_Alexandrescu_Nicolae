#include <iostream>
#include "Canvas.h"

int main()
{

    Canvas canvas(101, 51);
    canvas.FillCircle(25, 50, 10, '5');
    canvas.Clear();
    canvas.DrawCircle(5, 5, 5, '*');
    canvas.FillCircle(20, 20, 3, '&');
    canvas.DrawRect(40, 2, 45, 4, 'x');
    canvas.FillRect(10, 10, 14, 14, 'o');
    canvas.SetPoint(25, 50, 'X');
    canvas.SetPoint(0, 0, '+');
    canvas.SetPoint(0, 100, '+');
    canvas.SetPoint(50, 0, '+');
    canvas.SetPoint(50, 100, '+');
    canvas.DrawLine(3, 33, 10, 73, 'a');
    canvas.Print();
}
