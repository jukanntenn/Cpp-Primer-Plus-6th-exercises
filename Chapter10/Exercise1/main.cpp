#include <iostream>
#include <string>

using std::string;

class BankAccount
{
private:
    string name;
    string number;
    double balance;

public:
    BankAccount(string n, string num, double b)
    {
        name = n;
        number = num;
        balance = b;
    };
    void display();
    void deposit(double amt);
    void withdraw(double amt);
};

void BankAccount::display()
{
    using std::cout;
    using std::endl;

    cout << "Name: " << name << endl;
    cout << "Number: " << number << endl;
    cout << "Balance: " << balance << endl;
}

void BankAccount::deposit(double amt)
{
    if (amt <= 0)
    {
        amt = 0;
    }
    balance += amt;
}

void BankAccount::withdraw(double amt)
{
    using std::cout;

    if (amt < 0)
    {
        cout << "Amount can't be negtive, aborted.";
    }
    else if (amt > balance)
    {
        cout << "Can't withdraw more than balance.";
    }
    else
    {
        balance -= amt;
    }
}

int main()
{
    BankAccount account("foo", "123456", 0);
    account.display();
    account.deposit(12080.5);
    account.display();
    account.deposit(10000);
    account.display();
    account.withdraw(10000);
    account.display();
    return 0;
}