#include "Canvas.h"
#include <iostream>
#include <algorithm>

using namespace std;

Canvas::Canvas(int width, int height)
{
	int i, j;
	this->width = width;
	this->height = height;
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			m[i][j] = ' ';
}

void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
	int i, j;
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			int ec = (i - x) * (i - x) + (j - y) * (j - y);
			if (ec == ray * ray)
				m[i][j] = ch;
		}
	}
}

void Canvas::FillCircle(int x, int y, int ray, char ch)
{
	int i, j;
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			int ec = (i - x) * (i - x) + (j - y) * (j - y);
			if (ec <= ray * ray)
				m[i][j] = ch;
		}
	}
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	int i, j;
	for (i = 0; i < height; ++i)
		for (j = 0; j < width; ++j)
			if (i == top && j >= left && j <= right || i == bottom && j >= left && j <= right || j == left && i >= top && i <= bottom || j == right && i >= top && i <= bottom)
				m[i][j] = ch;
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	int i, j;
	for (i = 0; i < height; ++i)
		for (j = 0; j < width; ++j)
			if (i >= top && i <= bottom && j >= left && j <= right)
				m[i][j] = ch;
}

void Canvas::SetPoint(int x, int y, char ch)
{
	m[x][y] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
	int i, j;
	int dx = x2 - x1;
	int dy = y2 - y1;
	int D = 2 * dy - dx;
	j = y1;

	for (i = x1; i <= x2; ++i)
	{
		m[i][j] = ch;
		if (D > 0)
		{
			j++;
			D -= 2 * dx;
		}
		D += 2 * dy;
	}
}

void Canvas::Print()
{
	int i, j;
	for (i = 0; i < height; ++i)
	{
		for (j = 0; j < width; ++j)
			cout << m[i][j];
		cout << '\n';
	}
}

void Canvas::Clear()
{
	int i, j;
	for (i = 0; i < height; ++i)
		for (j = 0; j < width; ++j)
			m[i][j] = ' ';
}
