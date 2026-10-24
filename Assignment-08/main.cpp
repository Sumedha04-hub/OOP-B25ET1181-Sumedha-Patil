#include <iostream>
using namespace std;

// Base class 1: Stores basic employee information
class Employee
{
protected:
    int emp_id;
    string name;
    float salary;
public:
    // Function to accept employee details
    void getEmployee()
    {
        cout << "Enter Employee ID: ";
        cin >> emp_id;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Basic Salary: ";
        cin >> salary;
    }
    // Function to display employee details
    void displayEmployee()
    {
        cout << "\nEmployee ID: " << emp_id;
        cout << "\nEmployee Name: " << name;
        cout << "\nBasic Salary: " << salary;
    }
};
// Base class 2: Stores appraisal information
class Appraisal
{
protected:
    float appraisal_percent;
public:
    // Function to accept appraisal percentage
    void getAppraisal()
    {
        cout << "Enter Appraisal Percentage: ";
        cin >> appraisal_percent;
    }
};
// Derived class: Inherits from both Employee and Appraisal
// This demonstrates multiple inheritance
class RevisedSalary : public Employee, public Appraisal
{
    float revised_salary;
public:
    // Function to calculate revised salary after appraisal
    void calculateSalary()
    {
        revised_salary = salary + (salary * appraisal_percent / 100);
    }
    // Function to display complete employee information
    void display()
    {
        displayEmployee();
        cout << "\nAppraisal Percentage: " << appraisal_percent << "%";
        cout << "\nRevised Salary: " << revised_salary;
    }
};
int main()
{
    // Create an object of the derived class
    RevisedSalary emp;
    // Accept basic employee information
    emp.getEmployee();
    // Accept appraisal information
    emp.getAppraisal();
    // Calculate the revised salary
    emp.calculateSalary();
    // Display the final details
    emp.display();
    return 0;
}
