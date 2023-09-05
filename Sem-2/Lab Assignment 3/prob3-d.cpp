#include <iostream>

class MyClass {
public:
    // Constructor
    MyClass() {
        std::cout << "Constructor called." << std::endl;
    }

    // Destructor
    ~MyClass() {
        std::cout << "Destructor called." << std::endl;
    }
};

int main() {
    std::cout << "Creating MyClass object." << std::endl;
    MyClass obj;

    std::cout << "Scope of main() ends. Object will be destroyed automatically." << std::endl;
    return 0;
}
