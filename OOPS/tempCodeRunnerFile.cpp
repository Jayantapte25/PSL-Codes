#include <iostream>
using namespace std;

class ATM {
private:
    int balance;

public:
    ATM(int initial_balance) : balance(initial_balance) {}

    int getBalance() {
        return balance;
    }

    void display() {
        cout << "Your balance is: " << balance << endl;
    }

    void performTransactions() {
        int choice, amount;

        while (true) {
            cout << "Choose an option: " << endl;
            cout << "1. Withdraw" << endl;
            cout << "2. Deposit" << endl;
            cout << "3. Exit" << endl;
            cin >> choice;

            if (choice == 1) {
                Withdraw withdraw;
                cout << "Enter the amount you want to withdraw: ";
                cin >> amount;
                withdraw.performWithdraw(balance, amount);
                display();
            } else if (choice == 2) {
                Deposit deposit;
                cout << "Enter the amount to deposit: ";
                cin >> amount;
                deposit.performDeposit(balance, amount);
                display();
            } else if (choice == 3) {
                break;
            } else {
                cout << "Invalid option. Please try again." << endl;
            }
        }
    }
};

class Withdraw {
public:
    void performWithdraw(int& balance, int amount) {
        if (amount > balance) {
            cout << "Insufficient balance" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
    }
};

class Deposit {
public:
    void performDeposit(int& balance, int amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }
};

int main() {
    int initialBalance;

    cout << "Enter your initial balance: ";
    cin >> initialBalance;

    ATM myATM(initialBalance);

    myATM.performTransactions();

    return 0;
}
