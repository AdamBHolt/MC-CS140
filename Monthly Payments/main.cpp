/*This program collects an initial loan amount,
annual interest rate, and number of payments and
calclates the monthly payments and total amount
paid with interest*/

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
        int totalPayments;     //Total number of payments
        float loanAmount,      //Amount of loan
              monthlyInterest, //Monthly interest rate
              annualInterest,  //Annual interest rate
              monthlyPayment,  //Monthly payment amount
              totalPaid,       //Total amount paid including interest
              interestPaid;    //Amount of interest paid

        cout << "Total loan amount: $";
        cin >> loanAmount;
        cout << "Annual interest rate: %";
        cin >> annualInterest;
        cout << "Number of payments: ";
        cin >> totalPayments;

		//Calculate monthly interest rate
        monthlyInterest = annualInterest / 12;  

		//Calculate monthly payment amount
        monthlyPayment =
                (((monthlyInterest / 100) * pow(1 + (monthlyInterest / 100),totalPayments)) /
                (pow(1 + (monthlyInterest / 100),totalPayments) - 1)) * loanAmount;
		//Calculate totalPaid		
        totalPaid = monthlyPayment * totalPayments;

		//Calculate interestPaid
        interestPaid = totalPaid - loanAmount;

        cout << setprecision(2) << fixed << showpoint;
        cout << "\nLoan Amount:\t\t$ " << setw(8) << loanAmount;
        cout << "\nMonthly Interest Rate:\t" << setw(9) << static_cast<int>(monthlyInterest) << "%";
        cout << "\nNumber of Payments:\t" << setw(10) << totalPayments;
        cout << "\nMonthy Payment:\t\t$" << setw(9) << monthlyPayment;
        cout << "\nAmount Paid Back:\t$" << setw(9) << totalPaid;
        cout << "\nInterest Paid:\t\t$" << setw(9) << interestPaid << endl;

        system("pause");
        return 0;
}