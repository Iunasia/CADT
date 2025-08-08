#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Please enter a number: ";
    cin >> number;

    for (int i = 2; i <= number; i++) {
        bool prime = true;

        for (int j = 2; j < i; j++) { 
            if (i % j == 0) {
                prime = false;
                break;
            }
        }

        if (prime) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}
