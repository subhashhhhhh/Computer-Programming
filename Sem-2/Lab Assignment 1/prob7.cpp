#include <iostream>

class MyClass {
private:
  void privateFunc() {
    std::cout << "This is a private member function." << std::endl;
  }
public:
  void publicFunc() {
    std::cout << "This is a public member function." << std::endl;
    privateFunc(); // calling a private member function
  }
};

int main() {
  MyClass myObj;
  myObj.publicFunc(); // accessing a public member function
  return 0;
}
