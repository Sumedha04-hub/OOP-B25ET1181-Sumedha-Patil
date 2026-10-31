#include <iostream>
using namespace std;

// First namespace
namespace First
{
    int value = 10;

    void display()
    {
        cout << "Value from First namespace: " << value << endl;
    }
}
// Second namespace
namespace Second
{
    int value = 20;
    void display()
    {
        cout << "Value from Second namespace: " << value << endl;
    }
}
int main()
{
    // Access namespace members using scope resolution operator (::)
    First::display();
    Second::display();
    cout << "First value = " << First::value << endl;
    cout << "Second value = " << Second::value << endl;
    
    return 0;
}
