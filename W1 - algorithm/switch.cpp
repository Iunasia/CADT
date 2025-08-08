#include <iostream>
using namespace std;

int main(void){
    char grade;
    cout << "Enter a Grade: ";
    cin >> grade;

    switch (grade) {
        case 'A':
            cout << "Excellent";
            break;
        case 'B':
            cout << "Good";
            break;
        case 'C':
            cout << "Fair";
            break;
        case 'F':
            cout << "FAIL";
            break;
        default:
            cout << "Invalid";
            break;
    }

    return 0;
}
