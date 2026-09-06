#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate distance between two 2D points
float distance(float x1, float y1, float x2, float y2)
{
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Function to calculate distance between two 3D points
float distance(float x1, float y1, float z1,
               float x2, float y2, float z2)
{
    return sqrt(pow(x2 - x1, 2) +
                pow(y2 - y1, 2) +
                pow(z2 - z1, 2));
}

int main()
{
    float x1, y1, x2, y2;
    float x3, y3, z3, x4, y4, z4;

    // 2D coordinates
    cout << "Enter first 2D point (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter second 2D point (x2 y2): ";
    cin >> x2 >> y2;

    cout << "Distance in 2D = "
         << distance(x1, y1, x2, y2) << endl;

    // 3D coordinates
    cout << "\nEnter first 3D point (x1 y1 z1): ";
    cin >> x3 >> y3 >> z3;

    cout << "Enter second 3D point (x2 y2 z2): ";
    cin >> x4 >> y4 >> z4;

    cout << "Distance in 3D = "
         << distance(x3, y3, z3, x4, y4, z4) << endl;

    return 0;
}
