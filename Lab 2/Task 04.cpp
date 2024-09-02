#include <iostream>
#include <string>
using namespace std;

struct Register {
    string courseId;
    string courseName;
};

struct Student : Register {
    string studentId;
    string firstName;
    string lastName;
    string cellNo;
    string email;
};

void inputStudentData(Student &st) {
    cout << "Enter Course Id: ";
    getline(cin, st.courseId);
    cout << "Enter Course Name: ";
    getline(cin, st.courseName);
    cout << "Enter Student Id: ";
    getline(cin, st.studentId);
    cout << "Enter First Name: ";
    getline(cin, st.firstName);
    cout << "Enter Last Name: ";
    getline(cin, st.lastName);
    cout << "Enter Cell No. : ";
    getline(cin, st.cellNo);
    cout << "Enter Email: ";
    getline(cin, st.email);
}

void displayStudentData(const Student &st) {
    cout << "Course ID: " << st.courseId << ", Course Name: " << st.courseName << ", Student ID: " << st.studentId
         << ", Name: " << st.firstName << " " << st.lastName << ", Cell No: " << st.cellNo << ", Email: " << st.email << endl;
}

int main() {
    Student students[3];
    for (int i = 0; i < 3; i++) {
        cout << "Enter details for Student " << i + 1 << endl;
        inputStudentData(students[i]);
    }

    for (int i = 0; i < 5; i++) {
        displayStudentData(students[i]);
    }

    return 0;
}
