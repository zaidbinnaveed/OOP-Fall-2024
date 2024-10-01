#include<iostream>
using namespace std;

class BankAccount
{
    int accountNumber;
    string accountHolderName;
    float balance;
    public:
    
    BankAccount(int accnum, string name, float bal)
    {
        accountNumber =  accnum ;
        accountHolderName = name;
        balance = bal;
    }
    void deposit(double amount)
    {
        balance += amount;
        cout << "New balance after deposit : " << balance << endl;
    }
    void withdraw(double amount)
    {
        if(amount > balance)
        {
            cout << "Insufficient funds!";
        }
        balance = balance - amount;
        cout << "New balance after withdrawal : " << balance << endl;
    }
    void displayinfo()
    {
        cout << "Account number : " << accountNumber << endl;
        cout << "Account Holder Name : " << accountHolderName << endl;
        cout << "Current Balance : " << balance << endl;
    }
};

int main()
{
    const int size = 3; 
    BankAccount arr[size]=
    {
        BankAccount(101, "Zaid", 50000),
        BankAccount(102, "Waleed", 150000),
        BankAccount(103, "Yesaullah", 75000)
    };
    
    for(int i = 0; i<3;i++)
    {
        arr[i].displayinfo();
    }
    arr[0].deposit(500);
    arr[1].withdraw(200);
    
    return 0;
}
