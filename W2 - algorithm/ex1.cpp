#include <iostream>

double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);

int main() {
    using namespace std;

    // Declare Variables
    int operation;
    double a, b;

    // Select option
    cout << "=== Select Number to Perform Operation (1-4) ===\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";

    cout << "Enter Operation: ";
    cin >> operation;

    cout << "Enter First Number: ";
    cin >> a;
    cout << "Enter Second Number: ";
    cin >> b;

    // Perform calculation
    switch (operation) {
        
        case 1:
            cout << "Result: " << add(a, b) << endl;
            break;
        case 2:
            cout << "Result: " << subtract(a, b) << endl;
            break;
        case 3:
            cout << "Result: " << multiply(a, b) << endl;
            break;
        case 4:
            if (b != 0) {
                cout << "Result: " << divide(a, b) << endl;
            } else {
                cout << "0.0" << endl;
            }
            break;
        default:
            cout << "Invalid Option!" << endl;
            break;
    }

    return 0; // Code Successfully Executed
}

// Declare Functions
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}