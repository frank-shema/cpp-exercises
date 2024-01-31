#include <iostream>

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    // Constructor
    BankAccount(int accNumber, double initialBalance) {
        accountNumber = accNumber;
        balance = initialBalance;
    }

    // Member function to deposit money
    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposit of $" << amount << " successful. New balance: $" << balance << std::endl;
    }

    // Member function to withdraw money
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            std::cout << "Withdrawal of $" << amount << " successful. New balance: $" << balance << std::endl;
        } else {
            std::cout << "Insufficient balance. Withdrawal of $" << amount << " failed." << std::endl;
        }
    }
};

int main() {
    // Create an instance of BankAccount with account number 12345 and initial balance $1000
    BankAccount account(12345, 1000);

    // Deposit $500
    account.deposit(500);

    // Withdraw $200
    account.withdraw(200);

    // Withdraw $1500 (attempting to withdraw more than the balance)
    account.withdraw(1500);

    return 0;
}