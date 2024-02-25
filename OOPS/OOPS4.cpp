#include <iostream>
using namespace std;

class ATM {
private:
    int balance;

public:
    ATM(int initial_balance) 
    {
        balance = initial_balance;
    }

    int getBalance() {
        return balance;
    }

    void display() {
        cout << "Your balance is: " << balance << endl;
    }

    void withdraw(int amount) {
        if (amount > balance) {
            cout << "Insufficient balance" << endl;
        } else {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
            display();
        }
    }

    void deposit(int amount) {
        balance += amount;
        cout << "Deposited: " << amount << endl;
        display();
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
                cout << "Enter the amount you want to withdraw: ";
                cin >> amount;
                withdraw(amount);
            } else if (choice == 2) {
                cout << "Enter the amount to deposit: ";
                cin >> amount;
                deposit(amount);
            } else if (choice == 3) {
                break;
            } else {
                cout << "Invalid option. Please try again." << endl;
            }
        }
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
