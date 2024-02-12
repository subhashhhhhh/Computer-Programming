#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void multiplyMatrices(const int mat1[][MAX_SIZE], int rows1, int cols1,
                      const int mat2[][MAX_SIZE], int rows2, int cols2,
                      int result[][MAX_SIZE]) {
    if (cols1 != rows2) {
        cout << "Matrix multiplication not possible." << endl;
        return;
    }

    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

int main() {
    int mat1[MAX_SIZE][MAX_SIZE];
    int rows1, cols1;

    cout << "Enter the number of rows for matrix 1: ";
    cin >> rows1;
    cout << "Enter the number of columns for matrix 1: ";
    cin >> cols1;

    cout << "Enter the elements of matrix 1:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols1; j++) {
            cin >> mat1[i][j];
        }
    }

    int mat2[MAX_SIZE][MAX_SIZE];
    int rows2, cols2;

    cout << "Enter the number of rows for matrix 2: ";
    cin >> rows2;
    cout << "Enter the number of columns for matrix 2: ";
    cin >> cols2;

    cout << "Enter the elements of matrix 2:" << endl;
    for (int i = 0; i < rows2; i++) {
        for (int j = 0; j < cols2; j++) {
            cin >> mat2[i][j];
        }
    }

    if (cols1 != rows2) {
        cout << "Matrix multiplication not possible." << endl;
        return 1;
    }

    int result[MAX_SIZE][MAX_SIZE];
    multiplyMatrices(mat1, rows1, cols1, mat2, rows2, cols2, result);

    cout << "Resultant matrix:" << endl;
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < cols2; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
