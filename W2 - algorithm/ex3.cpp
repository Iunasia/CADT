#include <iostream>
//counter 
int iterative_counter = 0;
int recursive_counter = 0;

//Declare functions
int iterative(int input) {

    iterative_counter = 0;
    int result = 1;
    for (int i = 1; i <= input; i++)
    {   
        iterative_counter++;
        result *= i;
    }
    return result;
}

int factorialRecursive(int input) {
    recursive_counter++;
    if (input <= 1) { 
        return 1;
    }
    return input * factorialRecursive(input - 1);
}

int main(void){
    using namespace std;

    int input;
    cout << "Enter number to factorial: ";
    cin >> input;

    //Calls function
    cout <<"iterative result: "<< iterative(input)<< endl;
    cout << "Iterative loop iterations: " << iterative_counter << endl;

    cout <<"factorialRecursive: "<< factorialRecursive(input)<< endl;
    cout << "Recursive function calls: " << recursive_counter << endl;

    return 0; //Code successfully Executed
}