#include "MyLibrary.h"
#include <cstdio>
#include <cstdlib>     /* srand, rand */
#include <ctime>       /* time */
#include <fstream>
#include <cstdarg>


MyLibrary::MyLibrary(MyLibrary & obj) : output_stream(obj.output_stream)
{
	this->books_number = obj.books_number;
	this->books = new int[this->books_number];
	for(int i = 0; i < books_number; ++i)
		this->books[i] = obj.books[i];
}

MyLibrary::MyLibrary(ostream& output_stream) : output_stream(output_stream)
{
	this->books_number = -1;
	books = nullptr;
}


MyLibrary::MyLibrary(ostream& output_stream, int books_number, int* books) : output_stream(output_stream)
{
	this->books_number = books_number;
	this->books = new int[books_number];
	for (int i = 0; i < books_number; ++i)
		this->books[i] = books[i];
}

MyLibrary::MyLibrary(ostream& output_stream, int books_number, int min, int max) : output_stream(output_stream)
{
	srand(time(NULL));
	this->books_number = books_number;
	this->books = new int[books_number];
	for (int i = 0; i < books_number; ++i)
		books[i] = rand() % (max - min) + min;
}

MyLibrary::MyLibrary(ostream& output_stream, const char* books_values) : output_stream(output_stream)
{
	int l = strlen(books_values);
	int n = 0, i, x = 0, index = 0;
	for (i = 0; i < l; ++i)
	{
		if (books_values[i] == ';')
			n++;
	}
	n++;
	this->books_number = n;
	books = new int[n];
	for (i = 0; i < l; ++i)
	{
		if (books_values[i] >= '0' && books_values[i] <= '9')
			x = x * 10 + books_values[i] - '0';
		else if (books_values[i] == ';')
		{
			books[index++] = x;
			x = 0;
		}
	}
	books[index] = x;
}

MyLibrary::MyLibrary(ostream& output_stream, int books_count, ...) :output_stream(output_stream)
{
	books_number = books_count;
	books = new int[books_count];
	va_list l;
	va_start(l, books_count);
	for (int i = 0; i < books_count; ++i) {
		books[i] = va_arg(l, int);
	}
	va_end(l);
}

int MyLibrary::get_books_count() const
{
	return books_number;
}

int MyLibrary::get_book_index_by_id(int x) const
{
	if (x >= books_number)
		return -1;
	else
		return books[x];
}

void MyLibrary::print_books()
{
	output_stream << "Found " << books_number << " books" << endl;
	for (int i = 0; i < books_number; i++)
		output_stream << "Book: " << i << " " << books[i] << endl;
}

MyLibrary::~MyLibrary()
{
	delete[] books;
}

void MyLibrary::update_books_id_by_index(int book_index, int book_id)
{
	if (book_index < books_number)
		this->books[book_index] = book_id;
}