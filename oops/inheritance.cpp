//when properties and functions of base class are passed to derived class
#include <iostream>
using namespace std;
//base class


class Person {
public:
    string name;
    int age;
    
    Person() {
        cout << "Person constructor called" << endl;

    }
    void Info_person(){
        cout << "name :" << name << endl;
    }

};
//derived class

class Student : public Person {
public:
    int rollno;

    Student(){
        cout << "Student constructor called" << endl;
    }

    void getInfo(){
        //cout << "Name: " << name << endl; //inherited from Person class
        //cout << "Age: " << age << endl;   //inherited from Person class
        cout << "Roll No: " << rollno << endl;
    }

};
int main() {
    // Person p;
    // p.name ="Aditya";
    // p.Info_person();
    
    Student s;
    s.name = "Harsh";
    s.age = 22;
    s.getInfo();

    Student s2;
    s.name = "Harsh";
    s.age = 22;
    s.getInfo();
    

    return 0;
}
//single inheritance
//base class is also called parent class or super class
//derived class is also called child class or sub class
//derived class inherits properties and functions of base class
//access specifier (public, private, protected) is used to set access level for members of base class
//if we use public inheritance then members of base class will be public in derived class
//if we use private inheritance then members of base class will be private in derived class
//if we use protected inheritance then members of base class will be protected in derived class
//constructors of base class are not inherited by derived class
//destructors of base class are not inherited by derived class
//when object of derived class is created then constructor of base class is called first and then constructor of derived class is called
//when object of derived class is destroyed then destructor of derived class is called first and then destructor
//of base class is called

//-------why person constructor is also called when we create a object of student class

//its because humne student ka object banaya toh student ka constructor call hua
//jisse humare student class ki values initialize ho gayi pr inherit values abhi bhi nhi hui hai and 
//unhe initialize krne ke liye parent class ka constructor bhi call hota hai phle hi

//types of inheritance

//single inheritance---> 
//multilevel inheritance---->
//multiple
//hirercial
//hybrid

