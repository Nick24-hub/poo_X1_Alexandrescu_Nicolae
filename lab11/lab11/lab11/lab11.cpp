#include<iostream>
#include<vector>
#include "InsertionSort.h"
using namespace std;



int main()
{
	int intArray[] = { 5,8,4,2,8,9,10,34,0,32,2,1,3,6,8,9 };
	int intArray2[] = { 5,8,4,2,8,9 };
	try {
		InsertionSort<int> a(intArray, 17);
	}
	catch (exceptieCustom& ex) {
		cerr << ex.what() << '\n';
	}
	try {
		InsertionSort<int> b(intArray2, 'f');
	}
	catch (exceptieCustom& ex) {
		cerr << ex.what() << '\n';
	}
	try {
		InsertionSort<int> c(intArray2, "sfa");
	}
	catch (exceptieCustom& ex) {
		cerr << ex.what() << '\n';
	}
	try {
		InsertionSort<int> d(intArray2, 6);
		d.PrintArray(intArray2, 'f');
	}
	catch (exceptieCustom1& ex) {
		cerr << ex.what() << '\n';
	}
	try {
		InsertionSort<int> e(intArray2, 6);
		e.PrintArray(intArray2, "fsa");
	}
	catch (exceptieCustom1& ex) {
		cerr << ex.what() << '\n';
	}
	return 0;

}