#include <iostream>
using namespace std;
class Person {
public:
    Person() {
        cout << "Constructor of Person\n";
    }
    void showRole() {
        cout << "I am a person\n";
    }
};
class Student : public Person {
public:
    Student() {
        cout << "Constructor of Student\n";
    }
    void showRole() {
        cout << "I am a student\n";
    }
};

int main() {
    Student s;
    s.Person::showRole();
    s.showRole();
    return 0;
}
/*
Output:
Constructor of Person
Constructor of Student
I am a person
I am a student
*/
