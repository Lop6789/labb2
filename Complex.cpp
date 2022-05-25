#include <iostream>

using namespace std;

class complex {
private:
	double Re, Im;

public:
	complex() {
		Re = 0;
		Im = 0;
	}

	complex(double r, double i) {
		Re = r;
		Im = i;
	}

	complex(complex& comp) {
		Re = comp.Re;
		Im = comp.Im;
	}
	
	complex operator + (complex numb) {
        Re += numb.Re;
        Im += numb.Im;
        return *this;
	}

    complex operator - (complex numb){
        Re -= numb.Re;
        Im -= numb.Im;
        return *this;
    }

    complex operator * (complex numb) {
        Re = Re * numb.Re - Im * numb.Im;
        Im = Re * numb.Im + Im * numb.Re;
        return *this;
    }

    complex operator / (complex numb) {
        double module = numb.Re * numb.Re + numb.Im + numb.Im;
        Re = (Re * numb.Re + Im * numb.Im) / module;
        Im = (Im * numb.Re - Re * numb.Im) / module;
        return *this;
    }

    complex& operator = (complex numb){
        Re = numb.Re;
        Im = numb.Re;
        return *this;
    }

    bool operator == (complex numb) {
        if (this->Re == numb.Re && this->Im == numb.Im) return true;
        else return false;
    }

 
    friend istream& operator >> (istream& in, complex& numb) {
        cout << "Enter ReZ:";
        in >> numb.Re;
        cout << "Enter ImZ:";
        in >> numb.Re;
        return in;
    }

    friend ostream& operator << (ostream& out, const complex& numb) {
        if (numb.Im < 0) {
            out << numb.Re << "-i * " << fabs(numb.Im);
        }
        else {
            out << numb.Re << "+i * " << numb.Im;
        }
        return out;
    }
    
    
    


};