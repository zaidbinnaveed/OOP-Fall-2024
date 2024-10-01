#include<iostream>
using namespace std;

class LoanHelper{
    const float interestRate = 0.4;
    int months;
    float loanAmount;
    public:
    
    LoanHelper(float rate, float loan, int monthstoRepay) : interestRate(rate), loanAmount(loan), months(monthstoRepay) {}
    
    void calculate_monthlyPayment(){
        float monthlyPayment = loanAmount/months;
        monthlyPayment += monthlyPayment * interestRate;
        cout << "You have to pay " << monthlyPayment << " every month for " << months << " months." << endl;
    }
};

int main(){
    float interestRate, loanAmount;
    int months;
    cout << "Enter the loan you have taken : ";
    cin >> loanAmount;
    cout << "Enter the number of months you have to repay the loan in : ";
    cin >> months;
    cout << "Enter the interest rate (between 0-0.5%) : ";
    cin >> interestRate;
    if(interestRate < 0 || interestRate > 0.5 ){
        cout << "Enter a valid interest rate.";
        return 0;
    }
    LoanHelper l1(interestRate, loanAmount, months);
    l1.calculate_monthlyPayment();
}
