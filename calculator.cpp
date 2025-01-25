#include <iostream>
#include <cmath> // For sqrt() and pow()

using namespace std;

void showMenu() {
    cout << "\nSimple Calculator\n";
    cout << "------------------\n";
    cout << "1. Addition\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiplication\n";
    cout << "4. Division\n";
    cout << "5. Square Root\n";
    cout << "6. Exponentiation\n";
    cout << "7. Exit\n";
    cout << "Choose an operation: ";
}

int main() {
    double num1, num2, result;
    int choice;
    bool continueCalc = true;

    while (continueCalc) {
        showMenu();
        cin >> choice;

        switch (choice) {
            case 1: // Addition
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 + num2;
                cout << "Result: " << result << endl;
                break;

            case 2: // Subtraction
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 - num2;
                cout << "Result: " << result << endl;
                break;

            case 3: // Multiplication
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                result = num1 * num2;
                cout << "Result: " << result << endl;
                break;

            case 4: // Division
                cout << "Enter two numbers: ";
                cin >> num1 >> num2;
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Cannot divide by zero!" << endl;
                }
                break;

            case 5: // Square Root
                cout << "Enter a number: ";
                cin >> num1;
                if (num1 >= 0) {
                    result = sqrt((int)num1);
                    cout << "Result: " << result << endl;
                } else {
                    cout << "Error: Cannot take square root of a negative number!" << endl;
                }
                break;

            case 6: // Exponentiation
                cout << "Enter base and exponent: ";
                cin >> num1 >> num2;
                result = pow(num1, num2);
                cout << "Result: " << result << endl;
                break;

            case 7: // Exit
                cout << "Exiting the calculator. Goodbye!" << endl;
                continueCalc = false;
                break;

            default:
                cout << "Invalid choice! Please select a valid option.\n";
                break;
        }

        // Ask if the user wants to perform another operation
        if (continueCalc) {
            char again;
            cout << "Do you want to perform another operation? (y/n): ";
            cin >> again;
            if (again == 'n' || again == 'N') {
                cout << "Exiting the calculator. Goodbye!" << endl;
                continueCalc = false;
            }
        }
    }

    return 0;
}
