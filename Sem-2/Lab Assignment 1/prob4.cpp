#include<iostream>
using namespace std;

namespace A {
    int value = 10;
    void printValue(){
        cout << "Value from namespace A: " << value << endl;
    }
}

namespace B {
    int value = 20;
    void printValue(){
        cout << "Value from namespace B: " << value << endl;
    }
}

int main(){
    //Accessing namespace A
    A::printValue();

    //Accessing namespace B
    B::printValue();
}
