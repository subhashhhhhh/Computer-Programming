#include <iostream>

class MyClass {
private:
    int value;

public:
    MyClass(int val) : value(val) {
        std::cout << "Constructor called for value: " << value << std::endl;
    }

    ~MyClass() {
        std::cout << "Destructor called for value: " << value << std::endl;
    }

    void display() {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    // Dynamic memory allocation using new keyword
    MyClass* ptr1 = new MyClass(10);
    MyClass* ptr2 = new MyClass(20);

    // Accessing objects using pointers
    ptr1->display();
    ptr2->display();

    // Don't forget to release memory when it's no longer needed
    delete ptr1;
    delete ptr2;

    return 0;
}
