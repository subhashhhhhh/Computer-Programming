#include <iostream>

class ClassB; // Forward declaration of ClassB

class ClassA {
private:
    int valueA;

public:
    ClassA(int val) : valueA(val) {}

    // Declare the friend function that can access private members of ClassA and ClassB
    friend int addValues(const ClassA& objA, const ClassB& objB);
};

class ClassB {
private:
    int valueB;

public:
    ClassB(int val) : valueB(val) {}

    // Declare the friend function that can access private members of ClassA and ClassB
    friend int addValues(const ClassA& objA, const ClassB& objB);
};

// Define the friend function to add private values of ClassA and ClassB
int addValues(const ClassA& objA, const ClassB& objB) {
    return objA.valueA + objB.valueB;
}

int main() {
    ClassA objA(10);
    ClassB objB(20);

    int sum = addValues(objA, objB);
    std::cout << "Sum of ClassA and ClassB values: " << sum << std::endl;

    return 0;
}
