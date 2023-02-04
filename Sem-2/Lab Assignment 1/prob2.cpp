#include<iostream>
int main(){
    double celsius;
    std::cout <<"Enter temperature in celsius: ";
    std::cin >> celsius;

    double fahrenheit = (9.0/5.0) * celsius + 32.0;
    std::cout <<"Temperature in Fahrenheit is: " << fahrenheit << std::endl;

    return 0;
}