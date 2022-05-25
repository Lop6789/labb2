#include <iostream>
#include <random>
#include "ArraySequence.hpp"
#include "LinkedListSequence.hpp"
using namespace std;

void ArrTest() {
	cout << "1) Creating { 1, 2, 3, 4, 5 }: " << endl;
	int values[5] = {1, 2, 3, 4, 5};
	ArraySequence<int> arr(values, 5);
	cout << "Result :" << endl;
	arr.print();
	cout << endl;

	cout << "2) Creating {a, b, c, d, e, f, g}: " << endl;
	char chr[7] = {'a', 'b', 'c', 'd', 'e', 'f', 'g'};
	ArraySequence<char> arrchr(chr, 7);
	cout << "Result :" << endl;
	arrchr.print();
	cout << endl;

	cout << "3) Creating { 1.1, 2.2, 3.3, 4.4, 5.5 }: " << endl;
	double val[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	ArraySequence<double> arrfl(val, 5);
	cout << "Result :" << endl;
	arrfl.print();
	cout << endl;

	cout << "4) Creating Random int[10]: " << endl;
	int randval[10];
	for (int i = 0; i < 10; i++){
		randval[i] = rand() % 10000;
	}
	ArraySequence<int> randint(randval, 10);

	int concat[2] = { 0, 1 };
	ArraySequence<int> conc(concat, 2);

	cout << "Result :" << endl;
	randint.print();
	cout << endl << "First elem: " << randint.GetFirst() << endl << "Last elem: " << randint.GetLast() << endl << "Second element: " << randint[1] << endl;
	cout << endl << "Subsequence [0 .. 4]: ";
	randint.GetSubsequence(0, 4)->print();
	cout << endl << "Concat with {0, 1}: ";
	(randint.Concat(&conc))->print();
	cout << endl;
}


void ListTest() {
	cout << "1) Creating [ 1, 2, 3, 4, 5 ]: " << endl;
	int values[5] = { 1, 2, 3, 4, 5 };
	LinkedListSequence<int> arr(values, 5);
	cout << "Result :" << endl;
	arr.print();
	cout << endl;

	cout << "2) Creating [a, b, c, d, e, f, g]: " << endl;
	char chr[7] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g' };
	LinkedListSequence<char> arrchr(chr, 7);
	cout << "Result :" << endl;
	arrchr.print();
	cout << endl;

	cout << "3) Creating [ 1.1, 2.2, 3.3, 4.4, 5.5 ]: " << endl;
	double val[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	LinkedListSequence<double> arrfl(val, 5);
	cout << "Result :" << endl;
	arrfl.print();
	cout << endl;

	cout << "4) Creating Random int[10]: " << endl;
	int randval[10];
	for (int i = 0; i < 10; i++) {
		randval[i] = rand() % 10000;
	}
	LinkedListSequence<int> randint(randval, 10);

	int concat[2] = { 0, 1 };
	LinkedListSequence<int> conc(concat, 2);

	cout << "Result :" << endl;
	randint.print();
	cout << endl << "First elem: " << randint.GetFirst() << endl << "Last elem: " << randint.GetLast() << endl << "Second element: " << randint[1]->data << endl;
	cout << endl << "Subsequence [0 .. 4]: ";
	randint.GetSubsequence(0, 4)->print();
	cout << endl << "Concat with {0, 1}: ";
	(randint.Concat(&conc))->print();
	cout << endl;



}