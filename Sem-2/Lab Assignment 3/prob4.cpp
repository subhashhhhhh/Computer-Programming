#include <iostream>

class Rectangle {
private:
    double length;
    double breadth;

public:
    // Constructor
    Rectangle(double l = 0.0, double b = 0.0) : length(l), breadth(b) {}

    // Member function to set dimensions
    void setDimensions(double l, double b) {
        this->length = l; // Using 'this' pointer to access member 'length'
        breadth = b;      // Dot operator can also be used to access member 'breadth'
    }

    // Member function to display dimensions
    void displayDimensions() {
        std::cout << "Length: " << length << ", Breadth: " << breadth << std::endl;
    }
};

int main() {
    // Creating an object of Rectangle
    Rectangle rect(5.0, 3.0);

    // Using dot operator to access member functions
    rect.displayDimensions();

    // Creating a pointer to Rectangle object
    Rectangle* ptrRect = &rect;

    // Using arrow operator to access member functions using the pointer
    ptrRect->setDimensions(8.0, 6.0);
    ptrRect->displayDimensions();

    return 0;
}
