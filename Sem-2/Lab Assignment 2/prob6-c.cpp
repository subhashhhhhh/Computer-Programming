#include <iostream>
using namespace std;

class MyClass {
public:
    static int num;
};

int MyClass::num = 20;

int main() {
    cout << "Static variable: " << MyClass::num << endl;
    return 0;
}
