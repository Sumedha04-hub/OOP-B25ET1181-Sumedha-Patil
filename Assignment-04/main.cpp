#include <iostream>
using namespace std;

class Complex
{
    float real, imag;

public:
    // Function to accept complex number
    void getdata()
    {
        cout << "Enter real part: ";
        cin >> real;

        cout << "Enter imaginary part: ";
        cin >> imag;
    }

    // Function to calculate reciprocal
    void reciprocal()
    {
        float denominator;
        float r, i;

        denominator = real * real + imag * imag;

        if (denominator == 0)
        {
            cout << "Reciprocal does not exist.";
        }
        else
        {
            r = real / denominator;
            i = -imag / denominator;

            cout << "Reciprocal = " << r;

            if (i >= 0)
                cout << " + " << i << "i";
            else
                cout << " - " << -i << "i";
        }
    }
};

int main()
{
    Complex c;

    c.getdata();
    c.reciprocal();

    return 0;
}
