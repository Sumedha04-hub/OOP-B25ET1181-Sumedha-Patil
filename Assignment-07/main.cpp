#include <iostream>
#include <cstring>
using namespace std;

class String
{
    char *str;

public:
    // Default Constructor
    String()
    {
        str = new char[1];
        str[0] = '\0';
    }

    // Parameterized Constructor
    String(const char *s)
    {
        str = new char[strlen(s) + 1];
        strcpy(str, s);
    }

    // Copy Constructor
    String(const String &s)
    {
        str = new char[strlen(s.str) + 1];
        strcpy(str, s.str);
    }

    // Accept function
    void accept()
    {
        char temp[100];

        cout << "Enter a string: ";
        cin >> temp;

        delete[] str;

        str = new char[strlen(temp) + 1];
        strcpy(str, temp);
    }

    // Display function
    void display()
    {
        cout << "String: " << str << endl;
    }

    // Destructor
    ~String()
    {
        delete[] str;
    }
};

int main()
{
    // Using default constructor
    String s1;

    // Accept string from user
    s1.accept();

    // Display string
    cout << "\nOriginal String:" << endl;
    s1.display();

    // Copy constructor
    String s2(s1);

    cout << "\nCopied String:" << endl;
    s2.display();

    return 0;
}
