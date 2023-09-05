#include <iostream>

class ClassB; // Forward declaration of ClassB

class ClassA {
private:
    int valueA;

public:
    ClassA(int val) : valueA(val) {}

    // Declare the friend function that can access private members of ClassA and ClassB
    friend void swapValues(ClassA& objA, ClassB& objB);
};

class ClassB {
private:
    int valueB;

public:
    ClassB(int val) : valueB(val) {}

    // Declare the friend function that can access private members of ClassA and ClassB
    friend void swapValues(ClassA& objA, ClassB& objB);
};

// Define the friend function to swap private values of ClassA and ClassB
void swapValues(ClassA& objA, ClassB& objB) {
    int temp = objA.valueA;
    objA.valueA = objB.valueB;
    objB.valueB = temp;
}

int main() {
    using namespace std;

    ClassA objA(10);
    ClassB objB(20);

    cout << "Before swapping:" << endl;
    cout << "ClassA value: " << objA.valueA << endl;
    cout << "ClassB value: " << objB.valueB << endl;

    // Swap the private values using the friend function
    swapValues(objA, objB);

    cout << "After swapping:" << endl;
    cout << "ClassA value: " << objA.valueA << endl;
    cout << "ClassB value: " << objB.valueB << endl;

    return 0;
}
