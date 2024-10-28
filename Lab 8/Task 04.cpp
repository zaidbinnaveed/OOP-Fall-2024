#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;
    int age;

public:
    Person(string personName, int personAge) : name(personName), age(personAge) {}

    void displayPerson() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : virtual public Person {
protected:
    int studentID;
    int gradeLevel;

public:
    Student(string personName, int personAge, int id, int grade) 
        : Person(personName, personAge), studentID(id), gradeLevel(grade) {}

    void displayStudent() const {
        displayPerson();
        cout << "Student ID: " << studentID << ", Grade Level: " << gradeLevel << endl;
    }
};

class Teacher : virtual public Person {
protected:
    string subject;
    int roomNumber;

public:
    Teacher(string personName, int personAge, string subj, int room) 
        : Person(personName, personAge), subject(subj), roomNumber(room) {}

    void displayTeacher() const {
        displayPerson();
        cout << "Subject: " << subject << ", Room Number: " << roomNumber << endl;
    }
};

class GraduateStudent : public Student, public Teacher {
public:
    GraduateStudent(string personName, int personAge, int id, int grade, string subj, int room)
        : Person(personName, personAge), Student(personName, personAge, id, grade), 
          Teacher(personName, personAge, subj, room) {}

    void displayGraduateStudent() const {
        cout << "Graduate Student Information:\n";
        displayStudent();
        cout << "Assisting in:\n";
        displayTeacher();
    }
};

int main() {
    GraduateStudent gradStudent("Alice", 25, 12345, 12, "Mathematics", 101);
    gradStudent.displayGraduateStudent();
    return 0;
}
