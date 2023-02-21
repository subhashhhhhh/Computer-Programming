#include <iostream>
using namespace std;

class MyClass {
public:
    void myFunction();
};

void MyClass::myFunction() {
    cout << "This is a member function defined outside the class." << endl;
}

int main() {
    MyClass obj;
    obj.myFunction();
    return 0;
}
