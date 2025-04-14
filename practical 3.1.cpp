//This program is prepared by 24ce043_Dev

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Employee {
private:
    string name;
    double basicSalary;
    double bonus;

public:
    // Constructor with default bonus
    Employee(string n, double basic, double b = 5000.0) {
        name = n;
        basicSalary = basic;
        bonus = b;
    }

    // Inline function to calculate total salary
    inline double totalSalary() const {
        return basicSalary + bonus;
    }

    void displayDetails() const {
        cout << "Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Bonus: " << bonus << endl;
        cout << "Total Salary: " << totalSalary() << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    vector<Employee> employees;

    for (int i = 0; i < n; ++i) {
        string name;
        double salary, bonus;
        char customBonus;

        cout << "\nEnter details for employee " << i + 1 << ":\n";
        cout << "Name: ";
        cin.ignore(); // Clear buffer
        getline(cin, name);
        cout << "Basic Salary: ";
        cin >> salary;
        cout << "Custom bonus? (y/n): ";
        cin >> customBonus;

        if (customBonus == 'y' || customBonus == 'Y') {
            cout << "Enter bonus: ";
            cin >> bonus;
            employees.emplace_back(name, salary, bonus);
        } else {
            employees.emplace_back(name, salary); // uses default bonus
        }
    }

    cout << "\n=== Employee Payroll Details ===\n";
    for (const auto& emp : employees) {
        emp.displayDetails();
    }

    cout<<"\n24CE043_Dev\n";

    return 0;
}

