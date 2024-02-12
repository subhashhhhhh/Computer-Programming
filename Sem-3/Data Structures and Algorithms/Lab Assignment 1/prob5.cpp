#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void calculateRowSum(const int mat[][MAX_SIZE], int rows, int cols, int rowSum[]) {
    for (int i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for (int j = 0; j < cols; j++) {
            rowSum[i] += mat[i][j];
        }
    }
}

void calculateColumnSum(const int mat[][MAX_SIZE], int rows, int cols, int colSum[]) {
    for (int j = 0; j < cols; j++) {
        colSum[j] = 0;
        for (int i = 0; i < rows; i++) {
            colSum[j] += mat[i][j];
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

    int rowSum[MAX_SIZE];
    int colSum[MAX_SIZE];

    calculateRowSum(mat, rows, cols, rowSum);
    calculateColumnSum(mat, rows, cols, colSum);

    cout << "Sum of every row:" << endl;
    for (int i = 0; i < rows; i++) {
        cout << "Row " << i + 1 << ": " << rowSum[i] << endl;
    }

    cout << "Sum of every column:" << endl;
    for (int j = 0; j < cols; j++) {
        cout << "Column " << j + 1 << ": " << colSum[j] << endl;
    }

    return 0;
}
