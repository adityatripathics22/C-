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

// ---------------shallow copy problem-------------------->
// when we create s2 using s1, the cgpaPtr of s2 points to the same memory location as cgpaPtr of s1.
// So, when we modify the cgpaPtr of s2, it also affects the cgpaPtr of s1.
//(as both are pointing to same memory location toh jab hum s2 ke cgpaptr ke address par jake uski value ko change krenge toh wo ho jayegi 
//pr jab hum s1 ke cgpaptr ki value ko dekhenge toh humara address to same hi copy hua tha toh wo bhi ussi address par jake value ko access karega jisse same hi value milegi)
// This can lead to unintended side effects and bugs in the program.

//solution---deep copy

//in copy constructor we have to allocate new memory for cgpaPtr of s2 and copy
//the value from cgpaPtr of s1 to cgpaPtr of s2.
// Student(Student &s){
//         cout << "custom copy constructor called" << endl;
//         this->name = s.name;
//         this->cgpaPtr = new double; //allocate new memory
//         *(this->cgpaPtr) = *(s.cgpaPtr); //copy the value
//     }

