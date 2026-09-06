#include <iostream>
using namespace std;


void read(int a[], int n)
{
    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

// Function to display array elements
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

// Function to swap two numbers
// Call by reference
void swap(int &x, int &y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}

// Function to sort the array
void sortArray(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
            }
        }
    }
}

// Main function
int main()
{
    int a[50], n;

    cout << "Enter number of elements: ";
    cin >> n;

    read(a, n);

    cout << "\nArray before sorting: ";
    display(a, n);

    sortArray(a, n);

    cout << "Array after sorting: ";
    display(a, n);

    return 0;
}
