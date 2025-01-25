#include <iostream>
using namespace std;

// Function to check balance
void checkBalance(double balance) {
    cout << "Your current balance is: $" << balance << endl;
}

// Function to deposit money
void depositMoney(double &balance) {
    double depositAmount;
    cout << "Enter amount to deposit: $";
    cin >> depositAmount;
    if (depositAmount > 0) {
        balance += depositAmount;
        cout << "Successfully deposited $" << depositAmount << endl;
    } else {
        cout << "Invalid deposit amount!" << endl;
    }
}

// Function to withdraw money
void withdrawMoney(double &balance) {
    double withdrawalAmount;
    cout << "Enter amount to withdraw: $";
    cin >> withdrawalAmount;
    if (withdrawalAmount > 0 && withdrawalAmount <= balance) {
        balance -= withdrawalAmount;
        cout << "Successfully withdrew $" << withdrawalAmount << endl;
    } else if (withdrawalAmount > balance) {
        cout << "Insufficient balance!" << endl;
    } else {
        cout << "Invalid withdrawal amount!" << endl;
    }
}

// Function to authenticate user with PIN
bool authenticateUser() {
    const int correctPIN = 1234;  // Example PIN
    int enteredPIN;
    cout << "Enter your PIN: ";
    cin >> enteredPIN;
    if (enteredPIN == correctPIN) {
        return true;
    } else {
        cout << "Incorrect PIN!" << endl;
        return false;
    }
}

int main() {
    double balance = 1000.0;  // Initial balance
    int choice;
    bool isAuthenticated = false;

    // Authenticate user before accessing the ATM system
    isAuthenticated = authenticateUser();
    
    if (!isAuthenticated) {
        cout << "Access denied. Exiting ATM system." << endl;
        return 0;  // Exit the program if authentication fails
    }

    // Display ATM menu
    while (true) {
        cout << "\n------ ATM Menu ------" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                depositMoney(balance);
                break;
            case 3:
                withdrawMoney(balance);
                break;
            case 4:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
