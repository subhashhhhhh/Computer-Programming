#include <iostream>
using namespace std;

// Define an inline function to calculate the cube of a number
inline int cube(int num) {
    return num * num * num;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int result = cube(num);
    cout << "The cube of " << num << " is " << result << endl;

    return 0;
};