#include <iostream>
using namespace std;

class MyClass {
public:
    static int num;
    static void increment_num();

    void display_num() {
        cout << "Num: " << num << endl;
    }
};

int MyClass::num = 0;

void MyClass::increment_num() {
    num++;
}

int main() {
    MyClass obj1, obj2;

    obj1.increment_num();
    obj1.display_num();

    obj2.increment_num();
    obj2.display_num();

    return 0;
}
