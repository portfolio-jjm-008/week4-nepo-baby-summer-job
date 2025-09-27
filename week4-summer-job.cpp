#include <iostream>
using namespace std;

int main() {
    double payRate = 15.50;
    double hoursWorked, totalHours = 0.0;
    double totalIncome, afterTaxIncome;
    double clothes, supplies, savingsBonds, parentBonds;

    // Input hours worked for each of the 5 weeks
    for (int i = 1; i <= 5; i++) {
        cout << "Enter hours worked for week " << i << ": ";
        cin >> hoursWorked;
        totalHours += hoursWorked;
    }

    // Calculate total income before tax
    totalIncome = payRate * totalHours;

    // After-tax income (14% tax)
    afterTaxIncome = totalIncome * (1 - 0.14);

    // Money spent on clothes and accessories (10%)
    clothes = afterTaxIncome * 0.10;

    // Money spent on school supplies (1%)
    supplies = afterTaxIncome * 0.01;

    // Remaining money after clothes and supplies
    double remaining = afterTaxIncome - (clothes + supplies);

    // Money spent on savings bonds (25% of remaining)
    savingsBonds = remaining * 0.25;

    // Parents' contribution to savings bonds (50 cents per dollar)
    parentBonds = savingsBonds * 0.5;

    // Output results
    cout << "\n--- Summer Job Financial Summary ---\n";
    cout << "Income before taxes: $" << totalIncome << endl;
    cout << "Income after taxes: $" << afterTaxIncome << endl;
    cout << "Money spent on clothes and accessories: $" << clothes << endl;
    cout << "Money spent on school supplies: $" << supplies << endl;
    cout << "Money spent on savings bonds: $" << savingsBonds << endl;
    cout << "Money parents spent on additional savings bonds: $" << parentBonds << endl;

    return 0;
}