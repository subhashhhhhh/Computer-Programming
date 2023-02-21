#include <iostream>
using namespace std;

int num = 10;

int main() {
    int num = 20;
    cout << "Local variable: " << num << endl;
    cout << "Global variable: " << ::num << endl;
    return 0;
}
