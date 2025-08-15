#include<iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

//Declare function
int sumRow(const int m[ROWS][COLS], int row) {
    int sum = 0;
    for (int col = 0; col < COLS; ++col) {
        sum += m[row][col];
    }
    return sum;
}

int sumCol(const int m[ROWS][COLS], int col) {
    int sum = 0;
    for (int row = 0; row < ROWS; ++row) {
        sum += m[row][col];
    }
    return sum;
 }


int main(void) {
    
    int matrix[ROWS][COLS] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Matrix: " << endl;
    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
           cout << matrix[i][j] << "\t";
        }
         cout << endl;
        
    }
    cout << endl;
    //Print Output
    for (int i = 0; i < ROWS; ++i) {
        cout << "Sum of row: " << i + 1 << " = " << sumRow(matrix, i) << endl;
    }
    cout << endl;

    for (int i = 0; i < COLS; ++i) {
        cout << "Sum of col: " << i + 1 << " = " << sumCol(matrix, i) << endl;
    }

    return 0; //Code Sucessful
}