#include <iostream>
#include <string>

using namespace std;

class Bank {
private:
    string depositorName;
    int accountNumber;
    string accountType;
    float balanceAmount;

public:
    
    Bank(string name, int number, string type, float balance) {
        depositorName = name;
        accountNumber = number;
        accountType = type;
        balanceAmount = balance;
}
    void deposit(float amount) {
        balanceAmount += amount;
        cout << "Amount deposited successfully. New balance: " << balanceAmount << endl;
    }

        void withdraw(float amount) {
        if (balanceAmount < amount) {
            cout << "Insufficient balance. Cannot withdraw." << endl;
        } else {
            balanceAmount -= amount;
            cout << "Amount withdrawn successfully. New balance: " << balanceAmount << endl;
        }
    }

    
    void display() {
        cout << "Depositor name: " << depositorName << endl;
        cout << "Balance amount: " << balanceAmount << endl;
    }
};

int main() {
    
    Bank myBank("John Doe", 12345, "Savings", 1000.0);
    myBank.deposit(500.0);
    myBank.withdraw(200.0);
    myBank.withdraw(1500.0);
    myBank.display();

    return 0;
}
