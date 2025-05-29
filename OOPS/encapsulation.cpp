#include <iostream>

using namespace std;

class BankAccount
{
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string accNum, double initialBalance)
    {
        accountNumber = accNum;
        balance = initialBalance;
    }

    double getBalance() const
    {
        return balance;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "An amount of " << amount << " has been deposited in your account" << endl;
        }
        else
        {
            cout << "Invalid deposit amount";
        }
    }
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Invalid amount. Hence can't be withdrawn" << endl;
        }
    }
};

int main()
{
    BankAccount myAccount("182883", 8000);
    cout << "Current balance: " << myAccount.getBalance() << endl;

    myAccount.deposit(500);
    myAccount.withdraw(700);

    cout << "Final balance after all transactions: " << myAccount.getBalance() << endl;
    return 0;
}