#include <iostream>

class FriendB; // Forward declaration of FriendB

class FriendA {
private:
    int valueA;

public:
    FriendA(int val) : valueA(val) {}

    // Declare FriendB as a friend class
    friend class FriendB;
};

class FriendB {
private:
    int valueB;

public:
    FriendB(int val) : valueB(val) {}

    // Member function of FriendB that can access private members of FriendA
    void displayFriendAValue(const FriendA& objA) {
        std::cout << "Value of FriendA: " << objA.valueA << std::endl;
    }
};

int main() {
    FriendA objA(10);
    FriendB objB(20);

    // FriendB can access the private member 'valueA' of FriendA
    objB.displayFriendAValue(objA);

    return 0;
}
