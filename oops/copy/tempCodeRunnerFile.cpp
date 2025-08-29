#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    string name;
    // double cgpa;
    double* cgpaPtr; //not pointing anywere

    Student(string name , int cgpa){
        this->name = name;
        // this->cgpa = cgpa;
        cgpaPtr = new double; //dynamic memory allocation...pointing to some memory in heap
        *cgpaPtr = cgpa;

    }

    Student(Student &s){
        cout << "custom copy constructor called" << endl;
        this->name = s.name;
        this->cgpaPtr = s.cgpaPtr; //shallow copy...copying the address....here we get the problem because the adress is copied not the value
    }

    void display() {
        cout << "Name: " << name << endl << "Age: " << *cgpaPtr << endl;
    }

};

int main(){
    Student s1("harsh", 22);

    Student s2 = s1; //shallow copy
    s1.display();
    *(s2.cgpaPtr) = 9.2;
    s1.display();



    return 0;
}