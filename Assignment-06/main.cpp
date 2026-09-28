#include <iostream>
using namespace std;

class Complex
{
private:
    float real, imag;

public:
    // Constructor
    Complex(float r = 0, float i = 0)
    {
        real = r;
        imag = i;
    }

    // Overload + operator
    Complex operator+(Complex c)
    {
        return Complex(real + c.real, imag + c.imag);
    }

    // Overload - operator
    Complex operator-(Complex c)
    {
        return Complex(real - c.real, imag - c.imag);
    }

    // Overload * operator
    Complex operator*(Complex c)
    {
        return Complex(
            real * c.real - imag * c.imag,
            real * c.imag + imag * c.real
        );
    }

    // Overload / operator
    Complex operator/(Complex c)
    {
        float denominator = c.real * c.real + c.imag * c.imag;

        if (denominator == 0)
        {
            cout << "Division by zero is not possible!" << endl;
            return Complex();
        }

        return Complex(
            (real * c.real + imag * c.imag) / denominator,
            (imag * c.real - real * c.imag) / denominator
        );
    }

    // Display complex number
    void display()
    {
        if (imag >= 0)
            cout << real << " + " << imag << "i" << endl;
        else
            cout << real << " - " << -imag << "i" << endl;
    }
};

int main()
{
    float r1, i1, r2, i2;

    cout << "Enter real and imaginary parts of first complex number: ";
    cin >> r1 >> i1;

    cout << "Enter real and imaginary parts of second complex number: ";
    cin >> r2 >> i2;

    Complex C1(r1, i1);
    Complex C2(r2, i2);

    Complex addition = C1 + C2;
    Complex subtraction = C1 - C2;
    Complex multiplication = C1 * C2;
    Complex division = C1 / C2;

    cout << "\nAddition: ";
    addition.display();

    cout << "Subtraction: ";
    subtraction.display();

    cout << "Multiplication: ";
    multiplication.display();

    cout << "Division: ";
    division.display();

    return 0;
}
