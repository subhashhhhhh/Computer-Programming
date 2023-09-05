#include <iostream>

class Rectangle {
private:
    double length;
    double breadth;

public:
    // Constructor with default arguments
    Rectangle(double l = 0.0, double b = 0.0) : length(l), breadth(b) {}

    // Constructor with one parameter (both length and breadth are assigned that number)
    Rectangle(double side) : length(side), breadth(side) {}

    // Function to calculate the area
    double calculateArea() {
        return length * breadth;
    }

    // Destructor
    ~Rectangle() {
        std::cout << "Destructor called for Rectangle with area: " << calculateArea() << std::endl;
    }
};

int main() {
    // Creating an array of Rectangle objects
    const int numRectangles = 3;
    Rectangle rectangles[numRectangles];

    // Creating objects with different constructors and calculating their areas
    Rectangle rect1; // Default constructor, length and breadth are 0
    std::cout << "Area of Rectangle 1: " << rect1.calculateArea() << std::endl;

    Rectangle rect2(5.0, 3.0); // Constructor with two parameters
    std::cout << "Area of Rectangle 2: " << rect2.calculateArea() << std::endl;

    double side = 4.0;
    Rectangle rect3(side); // Constructor with one parameter (both length and breadth assigned the same value)
    std::cout << "Area of Rectangle 3: " << rect3.calculateArea() << std::endl;

    // Assigning objects to the array
    rectangles[0] = rect1;
    rectangles[1] = rect2;
    rectangles[2] = rect3;

    return 0;
}
