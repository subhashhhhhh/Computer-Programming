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

    // Constructor with one parameter (both length and breadth are assigned that number)
    Rectangle(double side) : length(side), breadth(side) {}

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

    // Creating a Rectangle object using the constructor with one parameter (both length and breadth assigned the same value)
    double side = 4.0;
    Rectangle rect3(side);
    std::cout << "Area of Rectangle 3: " << rect3.calculateArea() << std::endl;

    return 0;
}
