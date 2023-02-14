#include <iostream>
using namespace std;
class Complex {
  private:
    float real;
    float imaginary;

  public:
    void set(float real_val, float imag_val) {
        real = real_val;
        imaginary = imag_val;
    }

    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }

    Complex sum(Complex other) {
        Complex result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result;
    }
};
