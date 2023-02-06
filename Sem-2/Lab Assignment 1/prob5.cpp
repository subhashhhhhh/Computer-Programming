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
    cout << "Enter a new name";
    cin >> name;
    cout << "Enter a new Roll no";
    cin >> rollNo;
    cout << "Enter a new degree";
    cin >> degree;
}

void updateCGPA(){
    cout << "Enter a new CGPA";
    cin >> currentCGPA;
}

void updateHostel(){
    cout << "Enter a new hostel";
    cin >> hostel;
}

void displayDetails(){
    cout << "Name: " << name << endl;
    cout << "Roll no: " << rollNo << endl;
    cout << "Degree: " << degree << endl;
    cout << "Hostel: " << hostel << endl;
    cout << "Current CGPA: " << currentCGPA << endl;
}

int main() {
  Student s;
  s.addDetails();
  std::cout << "Student details:" << std::endl;
  s.displayDetails();
  s.updateDetails();
  std::cout << "Updated student details:" << std::endl;
  s.displayDetails();

  return 0;
}
