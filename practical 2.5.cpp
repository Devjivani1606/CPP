//This program is prepared by 24ce043_Dev

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Loan {
private:
    int loanID;
    string applicantName;
    double loanAmount;
    double annualInterestRate;
    int tenureMonths;

public:
    // Constructor with default values
    Loan(int id = 0, string name = "Test User", double amount = 100000, double rate = 8.5, int tenure = 60) {
        loanID = id;
        applicantName = name;
        loanAmount = amount;
        annualInterestRate = rate;
        tenureMonths = tenure;
    }

    // EMI calculation using compound interest formula
    double calculateEMI() const {
        double monthlyRate = annualInterestRate / (12 * 100); // R
        double numerator = loanAmount * monthlyRate * pow(1 + monthlyRate, tenureMonths);
        double denominator = pow(1 + monthlyRate, tenureMonths) - 1;
        return numerator / denominator;
    }

    // Display loan summary
    void displayLoanDetails() const {
        cout << "------------------------------------------\n";
        cout << "Loan ID: " << loanID << "\n";
        cout << "Applicant Name: " << applicantName << "\n";
        cout << "Loan Amount: $" << loanAmount << "\n";
        cout << "Interest Rate: " << annualInterestRate << "% per annum\n";
        cout << "Tenure: " << tenureMonths << " months\n";
        double emi = calculateEMI();
        cout << "Monthly EMI: $" << (int)(emi * 100 + 0.5) / 100.0 << "\n";  // Approx. 2 decimal digits
        cout << "------------------------------------------\n";
    }
};

int main() {
    vector<Loan> loans;
    int choice;

    do {
        cout << "\n=== Loan Management System ===\n";
        cout << "1. Create New Loan\n";
        cout << "2. View All Loans\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            int id, tenure;
            string name;
            double amount, rate;

            cout << "Enter Loan ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Applicant Name: ";
            getline(cin, name);
            cout << "Enter Loan Amount: ";
            cin >> amount;
            cout << "Enter Annual Interest Rate (%): ";
            cin >> rate;
            cout << "Enter Tenure (in months): ";
            cin >> tenure;

            loans.emplace_back(id, name, amount, rate, tenure);
            cout << "Loan added successfully.\n";
            break;
        }
        case 2: {
            if (loans.empty()) {
                cout << "No loan records available.\n";
            } else {
                for (const auto& loan : loans) {
                    loan.displayLoanDetails();
                }
            }
            break;
        }
        case 0:
            cout << "Exiting system. Goodbye!\n";
            break;
        default:
            cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 0);

    return 0;
}
