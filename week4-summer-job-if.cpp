#include <iostream>
using namespace std;

int main() {
    double hoursWorkedPerWeek = 40.0;
    double weeksPerSummer = 8;
    double payRate = 15.50;

    // Calculate Total Hours worked during the summer
    double totalHours = hoursWorkedPerWeek * weeksPerSummer;

    
    // Calculate total summer income before tax
    double grossIncome = totalHours * payRate
    
    // After-tax income (14% tax | 1 - .14 = .86)
    double afterTaxIncome = grossIncome * (1 - .86);
    
    // Money spent on clothes and accessories (10%)
    double clothes = afterTaxIncome * 0.10;
    
    // Money spent on school supplies (1%)
    double schoolSupplies = afterTaxIncome * 0.01;
    
    // Remaining money after clothes and supplies
    double remainingMoney = afterTaxIncome - (clothes + schoolSupplies);
    
    double savingsBonds, parentBonds;
    // cin percentBondContribution
    // 0% -> remainingMoney * .01
    // > 0% <= 25% -> remainingMoney * percentBondContribution
    // > 25% -> remainingMoney * percentBondContribution = personalContributedAmt * .40 = parentContributedAmt

    // Money spent on savings bonds (25% of remaining)
    savingsBonds = remainingMoney * 0.25;

    // Parents' contribution to savings bonds (50 cents per dollar)
    parentBonds = savingsBonds * 0.5;

    // Output results
    cout << "Gross Income: $" << grossIncome << endl;
    cout << "Net after taxes: $" << afterTaxIncome << endl;
    cout << "Clothes and Accessories: $" << clothes << endl;
    cout << "School Supplies: $" << schoolSupplies << endl;
    cout << "Personal Savings Bond Spend: $" << savingsBonds << endl;
    cout << "Parents' Spend on Gift Savings Bonds: $" << parentBonds << endl;

    return 0;
}