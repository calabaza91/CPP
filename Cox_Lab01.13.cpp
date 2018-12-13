//***********************************************************************************
// Pay Period Gross Pay Program
// Programmer: Caleb Cox
// Completed : 9/27/2018
// Status    : Complete
//
// This program calculates and displays what the amount of an employee's gross pay
// will be for each pay period if he is paid bi-monthly and if he is paid bi-weekly.
// Let's call him Rob.
//***********************************************************************************

#include <iostream> // input/output declarations
#include <iomanip> // i/o manipulator definitions
using namespace std;
int main()
{
    
    int annualPay;
    int biMonthly;
    int biWeekly;
    
    //Define Rob's Annual Salary
    annualPay = 39000;
    
    cout << "Annual Gross Salary" << setfill(' ') << setw(18)<<"$" << annualPay << endl;
    
    //Calculate bi-monthly paycheck
    biMonthly  = annualPay / 24;
    
    cout << "Gross pay per bi-monthly paycheck\t$" << setfill(' ') << setw(5)<< biMonthly << endl;
    
    //Calculate bi-weekly paycheck
    biWeekly  = annualPay / 26;
    
    cout << "Gross pay per bi-monthly paycheck\t$" << setfill(' ') << setw(5)<< biWeekly << endl;
    cout << "--------------------------------------------" << endl;
    return 0;
    
}

