// Bernardo Dias
// CS303
// Assignment 2

#include <iostream>
#include "Employee.h"

int main() {
    // Create instances of Professional and Nonprofessional employees
    Professional profEmployee(4500.0, 10);  // Monthly salary of $10,000, 20 vacation days
    Nonprofessional nonProfEmployee(18.0, 32);  // Hourly rate of $15, worked 45 hours

    // Calculate and display weekly salary, health care contributions, and vacation days
    cout << "Professional Employee: \nWeekly Salary $" << profEmployee.calculateWeeklySalary()
              << "\nHealth Care Contributions $" << profEmployee.computeHealthCareContributions()
              << "\nVacation Days Earned " << profEmployee.computeVacationDays() << endl << endl;

    cout << "Nonprofessional Employee: \nWeekly Salary $" << nonProfEmployee.calculateWeeklySalary()
              << "\nHealth Care Contributions $" << nonProfEmployee.computeHealthCareContributions()
              << "\nVacation Days Earned " << nonProfEmployee.computeVacationDays() << endl;

    return 0;
}
