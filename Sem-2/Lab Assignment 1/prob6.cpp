#include <iostream>
#include <string>
using namespace std;

class Student{
private:
    string name;
    int rollNo;
    string degree;
    string hostel;
    float currentCGPA;
public:
    void addDetails();
    void updateDetails();
    void updateCGPA();
    void updateHostel();
    void displayDetails();
};

void Student::addDetails(){
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter roll number: ";
    cin >> rollNo;
    cout << "Enter Degree: ";
    cin >> degree;
    cout << "Enter Hostel: ";
    cin >> hostel;
    cout << "Enter CGPA: ";
    cin >> currentCGPA;
}

void Student::updateDetails() {
  cout << "Enter updated student name: ";
  cin >> name;
  cout << "Enter updated student roll number: ";
  cin >> rollNo;
  cout << "Enter updated student degree: ";
  cin >> degree;
  cout << "Enter updated student hostel: ";
  cin >> hostel;
}

void Student::updateCGPA() {
  cout << "Enter updated student CGPA: ";
  cin >> currentCGPA;
}

void Student::updateHostel() {
  cout << "Enter updated student hostel: ";
  cin >> hostel;
}

void Student::displayDetails() {
  cout << "Name: " << name << endl;
  cout << "Roll Number: " << rollNo << endl;
  cout << "Degree: " << degree << endl;
  cout << "Hostel: " << hostel << endl;
  cout << "CGPA: " << currentCGPA << endl;
}

int main() {
  Student student;
  student.addDetails();
  cout << "Student Details: " << endl;
  student.displayDetails();
  student.updateDetails();
  cout << "Updated Student Details: " << endl;
  student.displayDetails();
  student.updateCGPA();
  cout << "Updated Student CGPA: " << endl;
  student.displayDetails();
  student.updateHostel();
  cout << "Updated Student Residence Info: " << endl;
  student.displayDetails();
  return 0;
}