#include <iostream>
using namespace std;

int main()
{
    float discount;
    // Accept discount percentage from the user
    cout << "Enter discount percentage: ";
    cin >> discount;
    try
    {
        // Check whether the discount is within the valid range
        if (discount < 0 || discount > 100)
        {
            throw discount;  // Throw an exception if invalid
        }
        cout << "Valid discount percentage: " << discount << "%" << endl;
    }
    catch (float d)
    {
        // Handle the invalid discount exception
        cout << "Exception caught!" << endl;
        cout << "Invalid discount: " << d << "%" << endl;
        cout << "Discount must be between 0 and 100." << endl;
    }

    return 0;
}
