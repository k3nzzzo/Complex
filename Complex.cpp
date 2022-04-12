#include "Complex.h"

void Complex::printComplex()
{
    cout << this->re;

    if (this->im != 0) {
        if (this->im > 0) {
            cout << "+";
        }
        cout << this->im << "i";
    }

}

double Complex::abs()
{
    double result = sqrt(pow(this->re, 2) + pow(this->im, 2));
    return result;
}

Complex Complex::operator*(const Complex& other) const
{
    return Complex{ re * other.re - im * other.im,
        re * other.im - im * other.re };
}

ostream& operator<< (ostream& fo, Complex& fp)
{
    if (fp.im < 0) fo << fp.re << fp.im << "i\n";
    else fo << fp.re << "+i" << fp.im << "\n";

    return fo;
}

istream& operator>>(istream& fi, Complex& fp)
{
    cout << "¬ведите действительную часть: ";
    fi >> fp.re;
    cout << "¬ведите мнимую часть: ";
    fi >> fp.im;
    return fi;
}
