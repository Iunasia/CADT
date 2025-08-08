#include <iostream>
using namespace std;

int main() {
    int choice;

    do {
        cout << "1. Greet" << endl;
        cout << "2. Calculate Factorial" << endl;
        cout << "0. Exit" << endl;

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string name;
                cout << "Enter your name: ";
                getline(cin, name);
                cout << "Hello! " << name << endl;
                break;
            }

            case 2: {
                int num;
                int result = 1;
                cout << "Enter number to calculate factorial: ";
                cin >> num;

                if (num < 0) {
                    cout << "Enter a positive number!" << endl;
                } else {
                    for (int i = 1; i <= num; i++) {
                        result *= i;
                    }
                    cout << "The factorial of " << num << " is " << result << endl;
                }
                break;
            }

            case 0:
                cout << "Exiting..." << endl;
                break;

            default:
                cout << "Please enter a valid choice." << endl;
        }

        cout << endl;
    } while (choice != 0);

    return 0;
}
