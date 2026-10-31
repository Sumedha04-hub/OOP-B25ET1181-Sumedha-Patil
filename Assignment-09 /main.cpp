#include <iostream>
using namespace std;

// Base class
class Customer
{
protected:
    float amount;
public:
    // Function to accept purchase amount
    void input()
    {
        cout << "Enter purchase amount: ";
        cin >> amount;
    }
    // Virtual function for calculating discount
    virtual void calculateDiscount()
    {
        cout << "No discount";
    }
};
// Derived class 1
class RegularCustomer : public Customer
{
public:
    // Override the base class virtual function
    void calculateDiscount() override
    {
        cout << "Discount: " << amount * 0.05 << endl;
        cout << "Final Amount: " << amount - (amount * 0.05);
    }
};
// Derived class 2
class PremiumCustomer : public Customer
{
public:
    // Override the base class virtual function
    void calculateDiscount() override
    {
        cout << "Discount: " << amount * 0.10 << endl;
        cout << "Final Amount: " << amount - (amount * 0.10);
    }
};
int main()
{
    RegularCustomer r;
    PremiumCustomer p;
    // Base class pointer
    Customer *c;
    // Demonstrate run-time polymorphism for regular customer
    c = &r;
    c->input();
    c->calculateDiscount();
    cout << endl << endl;
    // Demonstrate run-time polymorphism for premium customer
    c = &p;
    c->input();
    c->calculateDiscount();
    return 0;
}
