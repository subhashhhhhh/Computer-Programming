#include <iostream>

class Rectangle {
private:
    double length;
    double breadth;

public:
    // Constructor with no parameters (default constructor)
    Rectangle() : length(0), breadth(0) {}

    // Constructor with two parameters
    Rectangle(double l, double b) : length(l), breadth(b) {}

    // Function to calculate the area
    double calculateArea() {
        return length * breadth;
    }
};

int main() {
    // Creating a Rectangle object using the default constructor
    Rectangle rect1;
    std::cout << "Area of Rectangle 1: " << rect1.calculateArea() << std::endl;

    // Creating a Rectangle object using the constructor with parameters
    Rectangle rect2(5.0, 3.0);
    std::cout << "Area of Rectangle 2: " << rect2.calculateArea() << std::endl;

    // Creating a Rectangle object using the constructor with two numbers as parameters
    double length = 7.0;
    double breadth = 4.0;
    Rectangle rect3(length, breadth);
    std::cout << "Area of Rectangle 3: " << rect3.calculateArea() << std::endl;

    return 0;
}
