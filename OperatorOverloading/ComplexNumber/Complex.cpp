#include "Complex.h"

namespace course
{
    Complex::Complex() : real(0.0), imaginary(0.0)
    {
    }

    Complex::Complex(double real, double imaginary) :
        real(real), imaginary(imaginary)
    {
    }

    Complex::Complex(const Complex& other)
    {
        real = other.real;
        imaginary = other.imaginary;
    }

    const Complex& Complex::operator=(const Complex& other)
    {
        real = other.real;
        imaginary = other.imaginary;
        return *this;
    }

    std::ostream &operator<<(std::ostream& out, const course::Complex &c)
    {
        out << "(" << c.getReal() << "," << c.getImaginary() << ")";
        return out;
    }

    Complex operator+(const Complex &c1, const Complex &c2)
    {
        return Complex(c1.getReal() + c2.getReal(), c1.getImaginary() + c2.getImaginary());
    }


}