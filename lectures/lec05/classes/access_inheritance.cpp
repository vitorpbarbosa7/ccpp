#include <iostream>
#include <string>

class BankAccount {
private:
    std::string owner;
    double balance;

public:
    BankAccount(std::string owner, double balance) {
        this->owner = owner;
        this->balance = balance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    double getBalance() const {
        return balance;
    }

protected:
    void setBalance(double newBalance) {
        balance = newBalance;
    }
};

class PremiumAccount : public BankAccount {
public:
    PremiumAccount(std::string owner, double balance) : BankAccount(owner, balance) {}

    void applyBonus() {
        setBalance(getBalance() + 100);  // Accessing protected method from base class
    }
};

int main() {
    BankAccount acc("John Doe", 500);
    acc.deposit(200);
    std::cout << "Balance: $" << acc.getBalance() << std::endl;

    PremiumAccount pacc("Jane Doe", 1000);
    pacc.applyBonus();
    std::cout << "Premium Balance: $" << pacc.getBalance() << std::endl;

    // acc.balance = 1000;  // Error! balance is private
    // pacc.setBalance(2000);  // Error! setBalance is protected

    return 0;
}

