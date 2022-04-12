#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <string>
using namespace std;
using std::string;

struct Complex {
	double re = 0;
	double im = 0;

	void printComplex();

	double abs();

    Complex operator*(const Complex& other) const;

    bool operator >(Complex& val)
    {
        if (sqrt(pow(this->re, 2) + pow(this->im, 2)) > sqrt(pow(val.re, 2) + pow(val.im, 2)))
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    friend ostream& operator<<(ostream&, Complex&);

    friend istream& operator>>(istream&, Complex&);
};
#endif
