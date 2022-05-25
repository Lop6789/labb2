#pragma once
#include <iostream>
using namespace std;
class complex {
private:
	double Re, Im;

public:
	complex();
	complex(double, double);
	complex(complex&);
	complex operator + (complex);
	complex operator - (complex);
	complex operator * (complex);
	complex operator / (complex);
	complex operator = (complex);
	bool operator == (complex);
	//bool operator != (complex, complex);
	//bool operator > (complex);
	friend istream& operator >> (istream&, complex&);
	friend ostream& operator << (ostream&, const complex&);

	
};