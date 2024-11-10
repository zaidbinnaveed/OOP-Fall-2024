#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    int id;
    string name;
public:
    Employee(int i, string n) : id(i), name(n) {}
    virtual double calculatePay() const { return 0.0; }
    virtual void displayDetails() const {
        cout << "Employee ID: " << id << ", Name: " << name << "\n";
    }
};

class FullTimeEmployee : public Employee {
    double monthlySalary;
public:
    FullTimeEmployee(int i, string n, double salary) : Employee(i, n), monthlySalary(salary) {}
    double calculatePay() const override { return monthlySalary; }
    void displayDetails() const override {
        Employee::displayDetails();
        cout << "Type: Full-time, Monthly Salary: " << monthlySalary << "\n";
    }
};

class PartTimeEmployee : public Employee {
    double hourlyWage;
    int hoursWorked;
public:
    PartTimeEmployee(int i, string n, double wage, int hours) : Employee(i, n), hourlyWage(wage), hoursWorked(hours) {}
    double calculatePay() const override { return hourlyWage * hoursWorked; }
    void displayDetails() const override {
        Employee::displayDetails();
        cout << "Type: Part-time, Hourly Wage: " << hourlyWage << ", Hours Worked: " << hoursWorked << "\n";
    }
};

int main() {
    Employee* e1 = new FullTimeEmployee(101, "AAA", 5000);
    Employee* e2 = new PartTimeEmployee(102, "BBB", 15, 40);
    e1->displayDetails();
    cout << "Full-time Employee Pay: $" << e1->calculatePay() << "\n";
    e2->displayDetails();
    cout << "Part-time Employee Pay: $" << e2->calculatePay() << "\n";
    delete e1;
    delete e2;
    return 0;
}
