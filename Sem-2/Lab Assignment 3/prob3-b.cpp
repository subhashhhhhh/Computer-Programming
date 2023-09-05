#include <iostream>

class MyClass {
public:
    // Constructor
    MyClass() {
        std::cout << "Constructor called." << std::endl;
    }

    // First destructor - incorrect, will result in a compilation error
    ~MyClass() {
        std::cout << "First destructor called." << std::endl;
    }

    // Second destructor - incorrect, will result in a compilation error
    ~MyClass() {
        std::cout << "Second destructor called." << std::endl;
    }
};

int main() {
    std::cout << "Creating MyClass object." << std::endl;
    MyClass obj;

    std::cout << "Scope of main() ends. Object will be destroyed automatically." << std::endl;
    return 0;
}
