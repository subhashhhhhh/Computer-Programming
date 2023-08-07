#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void transposeMatrix(const int mat[][MAX_SIZE], int rows, int cols, int result[][MAX_SIZE]) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[j][i] = mat[i][j];
        }
    }
}

int main() {
    int mat[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> mat[i][j];
        }
    }

    int transpose[MAX_SIZE][MAX_SIZE];
    transposeMatrix(mat, rows, cols, transpose);

    cout << "Transpose of the matrix:" << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
