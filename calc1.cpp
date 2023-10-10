#include <iostream>
using namespace std;

int main() {
    char choice;

    do {
        double num1, num2;
        char operation;

        cout << "Enter the first number: ";
        cin >> num1;

        cout << "Enter the second number: ";
        cin >> num2;

        cout << "Choose an operation (+, -, *, /): ";
        cin >> operation;

        double result;

        switch (operation) {
            case '+':
                result = num1 + num2;
                cout << "Result: " << num1 << " + " << num2 << " = " << result << endl;
                break;
            case '-':
                result = num1 - num2;
                cout << "Result: " << num1 << " - " << num2 << " = " << result << endl;
                break;
            case '*':
                result = num1 * num2;
                cout << "Result: " << num1 << " * " << num2 << " = " << result << endl;
                break;
            case '/':
                if (num2 != 0) {
                    result = num1 / num2;
                    cout << "Result: " << num1 << " / " << num2 << " = " << result << endl;
                } else {
                    cout << "Error! Division by zero is not allowed." << endl;
                }
                break;
            default:
                cout << "Invalid operation. Please enter +, -, *, or /." << endl;
                break;
        }

        cout << "Do you want to perform another calculation? (Y/N): ";
        cin >> choice;

    } while (choice == 'Y' || choice == 'y');

    cout << "Goodbye!" << endl;

    return 0;
}

