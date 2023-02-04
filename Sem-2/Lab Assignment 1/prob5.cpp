#include <iostream>
#include <string>
using namespace std;

struct Student{
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;
}

void addDetails(){
    cout << "Enter your name: ";
    cin >> name;
    cout << "Enter Roll no: ";
    cin >> rollNo;
    cout << "Enter your degree: ";
    cin >> degree;
    cout << "Enter your hostel: ";
    cin >> hostel;
    cout << "Enter your current CGPA: ";
    cin >> currentCGPA;
}

void updateDetails(){
    
}
