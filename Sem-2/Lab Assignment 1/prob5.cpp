#include <iostream>
#include <string>
using namespace std;

struct Student {
  string name;
  int rollNo;
  string degree;
  string hostel;
  float currentCGPA;

  // Member function to add details
  void addDetails() {
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter degree: ";
    cin >> degree;
    cout << "Enter hostel: ";
    cin >> hostel;
    cout << "Enter current CGPA: ";
    cin >> currentCGPA;
  }

  // Member function to update details
  void updateDetails() {
    cout << "Enter new name: ";
    cin >> name;
    cout << "Enter new roll number: ";
    cin >> rollNo;
    cout << "Enter new degree: ";
    cin >> degree;
  }

  // Member function to update CGPA
  void updateCGPA() {
    cout << "Enter new CGPA: ";
    cin >> currentCGPA;
  }

  // Member function to update residence info
  void updateResidenceInfo() {
    cout << "Enter new hostel: ";
    cin >> hostel;
  }

  // Member function to display details
  void displayDetails() {
    cout << "Name: " << name << endl;
    cout << "Roll number: " << rollNo << endl;
    cout << "Degree: " << degree << endl;
    cout << "Hostel: " << hostel << endl;
    cout << "CGPA: " << currentCGPA << endl;
  }
};

int main() {
  Student s;
  s.addDetails();
  cout << "Student details:" << endl;
  s.displayDetails();
  s.updateDetails();
  cout << "Updated student details:" << endl;
  s.displayDetails();

  return 0;
}
