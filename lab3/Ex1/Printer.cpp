#define _CRT_SECURE_NO_WARNINGS

#include "Printer.h"
#include <stdarg.h> 
#include <cstdarg>
#include <cstring>
#include <stdio.h>

void Printer::PrintAdd(int a, int b)
{
	int sum = a + b;
	printf("%d\n", sum);
}

void Printer::PrintAdd(int a, int b, int c)
{
	int sum = a + b + c;
	printf("%d\n", sum);
}

void Printer::PrintAdd(double a, double b)
{
	double sum = a + b;
	printf("%f\n", sum);
}

void Printer::PrintAdd(double a, double b, double c)
{
	double sum = a + b + c;
	printf("%f\n", sum);
}

void Printer::PrintMul(int a, int b)
{
	int mul = a * b;
	printf("%d\n", mul);
}

void Printer::PrintMul(int a, int b, int c)
{
	int mul = a * b *c;
	printf("%d\n", mul);
}

void Printer::PrintMul(double a, double b)
{
	double mul = a * b;
	printf("%f\n", mul);
}

void Printer::PrintMul(double a, double b, double c)
{
	double mul = a * b *c;
	printf("%f\n", mul);
}

void Printer::PrintAdd(int count, ...)
{
	va_list l;
	va_start(l, count);
	int sum = 0;
	for (int i = 0; i < count; ++i)
		sum += va_arg(l, int);
	va_end(l);
	printf("%d\n", sum);
}

void Printer::PrintAdd(const char* a, const char* b)
{
	if (a == nullptr || b == nullptr)
	{
		printf("one of strings is none\n");
		return;
	}
	char *aux=new char[strlen(a)+strlen(b) + 1];
	strcpy(aux, a);
	strcat(aux, b);
	printf("%s\n", aux);
	delete[] aux;
}
