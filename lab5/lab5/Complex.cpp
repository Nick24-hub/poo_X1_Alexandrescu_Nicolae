#include "Complex.h"

bool double_equals(double l, double r)
{
	return abs(l - r) < 0.001;
}

Complex operator+(const Complex& l, const Complex& r)
{
	double sum_real = l.real() + r.real();
	double sum_imag = l.imag() + r.imag();
	return { sum_real, sum_imag };
}

Complex operator+(const Complex& l, double r)
{
	return l + Complex{ r, 0 };
}

Complex operator+(double l, const Complex& r)
{
	return Complex{ l,0 }+r;
}

Complex operator-(const Complex& l, const Complex& r)
{
	double sum_real = l.real() - r.real();
	double sum_imag = l.imag() - r.imag();
	return { sum_real, sum_imag };
}

Complex operator-(const Complex& l, double r)
{
	return l - Complex{ r, 0 };
}

Complex operator-(double l, const Complex& r)
{
	return Complex{ l,0 } -r;
}

Complex operator*(const Complex& l, const Complex& r)
{
	double mul_real = l.real() * r.real() - l.imag() * r.imag();
	double mul_imag = l.imag() * r.real() + l.real() * r.imag();
	return { mul_real, mul_imag };
}

Complex operator*(const Complex& l, double r)
{
	return l * Complex{ r, 0 };
}

Complex operator*(double l, const Complex& r)
{
	return Complex{ l,0 } *r;
}

Complex operator-(const Complex& obj)
{
	return { -obj.real(),-obj.imag() };
}

bool operator==(const Complex& l, const Complex& r)
{
	if (l.real() == r.real() && l.imag() == r.imag())
		return true;
	return false;
}

bool operator!=(const Complex& l, const Complex& r)
{
	if (l.real() != r.real() || l.imag() != r.imag())
		return true;
	return false;
}

std::ostream& operator<<(std::ostream& out, const Complex& complex)
{
	if (complex.is_real())
	{
		return out << complex.real() << '\n';
	}
	else
	{
		if (complex.real())
		{
			if (complex.imag() > 0)
				return out << complex.real() << " + " << complex.imag() << '\n';
			else
				return out << complex.real() << " - " << complex.imag() << '\n';
		}
		else
		{
			if (complex.imag() > 0)
				return out << " + " << complex.imag() << '\n';
			else
				return out << " - " << complex.imag() << '\n';
		}
	}
}

Complex::Complex() : Complex(0, 0) {}

Complex::Complex(double real, double imag)
{
	real_data = real;
	imag_data = imag;
}

bool Complex::is_real() const
{
	return imag() == 0;
}

double Complex::real() const
{
	return real_data;
}

double Complex::imag() const
{
	return imag_data;
}

double Complex::abs() const
{
	return sqrt(real() * real() + imag() * imag());
}

Complex Complex::conjugate() const
{
	return { real(), -imag() };
}

Complex& Complex::operator()(double real, double imag)
{
	this->real_data = real;
	this->imag_data = imag;
	return *this;
}

Complex& Complex::operator++()
{
	real_data++;
	return *this;
}

Complex Complex::operator++(int)
{
	Complex output{ real_data,imag_data };
	++(*this);
	return output;
}

Complex& Complex::operator--()
{
	real_data--;
	return *this;
}

Complex Complex::operator--(int)
{
	Complex output{ real_data,imag_data };
	--(*this);
	return output;
}
