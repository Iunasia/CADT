#include <iostream>
using namespace std;

// Define Matrix Dimensions
const int ROWS_A = 2;
const int COLS_A = 3;
const int ROWS_B = 3;
const int COLS_B = 2;

// Declare functions
void multiply(const int A[ROWS_A][COLS_A], const int B[ROWS_B][COLS_B], int result[ROWS_A][COLS_B]) {
    for (int i = 0; i < ROWS_A; ++i) {
        for (int j = 0; j < COLS_B; ++j) {
            result[i][j] = 0; 
            for (int k = 0; k < COLS_A; ++k) { 
                result[i][j] += A[i][k] * B[k][j];
            }
        }
    }
}

void printMatrix(const int* matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i * cols + j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    // Define and initialize the 2x3 matrix A
    int A[ROWS_A][COLS_A] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Define and initialize the 3x2 matrix B
    int B[ROWS_B][COLS_B] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    // Define the result matrix (2x2)
    int result[ROWS_A][COLS_B];

    // Print matrix A
    cout << "Matrix A (2x3):" << endl;
    printMatrix(&A[0][0], ROWS_A, COLS_A);
    cout << endl;

    // Print matrix B
    cout << "Matrix B (3x2):" << endl;
    printMatrix(&B[0][0], ROWS_B, COLS_B);
    cout << endl;

    // call multiply function
    multiply(A, B, result);

    // Print output
    cout << "Result Matrix (2x2):" << endl;
    printMatrix(&result[0][0], ROWS_A, COLS_B);

    return 0;
    //Code Successfully Execute
}