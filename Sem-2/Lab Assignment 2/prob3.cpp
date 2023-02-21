#include <iostream>
using namespace std;

int num = 10;

class MyClass {
public:
    static int num;
    int num = 5;

    void display_values() {
        cout << "Static public variable: " << num << endl;
        cout << "Global variable: " << ::num << endl;
        cout << "Local variable: " << num << endl;
    }
};

int MyClass::num = 20;

int main() {
    MyClass obj;

    cout << "Before changing the variables:\n";
    obj.display_values();

    // Change the value of the variables
    MyClass::num = 30;
    ::num = 40;
    obj.num = 50;

    cout << "\nAfter changing the variables:\n";
    obj.display_values();

    return 0;
}
