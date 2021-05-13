#pragma once
#include <iostream>
using namespace std;

class exceptieCustom : public exception {
public:
	exceptieCustom() noexcept = default;
	~exceptieCustom() = default;
	virtual const char* what() const noexcept {
		return "Argumentul dat este invalid";
	}
};

class exceptieCustom1 : public exception {
public:
	exceptieCustom1() noexcept = default;
	~exceptieCustom1() = default;
	virtual const char* what() const noexcept {
		return "Capacitatea maxima a fost depasita";
	}
};

template <class T>
class InsertionSort {
	int capacitateMaxima = 15;
public:
	 InsertionSort(T arr[], int n)
	{
		if (n > capacitateMaxima)
			throw exceptieCustom1();
		int i, j;
		T temp;

		for (int i = 1; i < n; ++i)
		{

			temp = arr[i];
			j = i - 1;

			while (j >= 0 && arr[j] > temp)
			{
				arr[j + 1] = arr[j];
				j = j - 1;
			}

			arr[j + 1] = temp;

		}
	}

	 InsertionSort(T arr[], string  n) {
		throw exceptieCustom();
	}

	 InsertionSort(T arr[], char  n) {
		throw exceptieCustom();
	}

	void PrintArray(T arr[], int n)
	{
		for (int i = 0; i < n; ++i)
		{
			cout << arr[i] << ' ';
		}
		cout << endl;
	}

	void PrintArray(T arr[], string  n) {
		throw exceptieCustom();
	}

	void PrintArray(T arr[], char  n) {
		throw exceptieCustom();
	}
};

