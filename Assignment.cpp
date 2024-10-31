// OOP Banking System
#include <iostream>
using namespace std;

class BankAccount {
protected:
    string accountHolder;
    float balance;

public:
    BankAccount(string name = "", float bal = 0.0) {
        accountHolder = name;
        balance = bal;
    }

    void setAccountHolder(string name) {
        accountHolder = name;
    }

    string getAccountHolder() {
        return accountHolder;
    }

    float getBalance() {
        return balance;
    }
};

class SavingsAccount : public BankAccount {
private:
    float interestRate;

public:
    SavingsAccount(string name, float bal, float rate) : BankAccount(name, bal) {
        interestRate = rate;
    }

    float calculateInterest() {
        return balance * interestRate;
    }
};

class CheckingAccount : public BankAccount {
private:
    float transactionFee;

public:
    CheckingAccount(string name, float bal, float fee) : BankAccount(name, bal) {
        transactionFee = fee;
    }

    void deductFee() {
        if (balance > transactionFee) {
            balance -= transactionFee;
        }
    }
};

int main() {
    
    SavingsAccount savings("Alice", 1000, 0.03);
    cout << "Savings Account Holder: " << savings.getAccountHolder() << endl;
    cout << "Initial Balance: " << savings.getBalance() << endl;
    cout << "Calculated Interest: " << savings.calculateInterest() << endl;


    CheckingAccount checking("Bob", 500, 2.5);
    cout << "\nChecking Account Holder: " << checking.getAccountHolder() << endl;
    cout << "Initial Balance: " << checking.getBalance() << endl;
    checking.deductFee();
    cout << "Balance after Transaction Fee: " << checking.getBalance() << endl;

    return 0;
}
