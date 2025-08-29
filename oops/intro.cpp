#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    double salary;
    
public:
    // properties of teacher
    string name;
    string subject;
    string dept;

    //methods of teacher
    void changeDept(string newDept) {
        dept = newDept;
    }
    void setSalary(double s){
        salary = s;
    }
    void getSalary(){
        cout << salary << endl;
    }
    void getdetails(){
        cout << name << " " << subject << " " << dept << endl;
    }   

    //non-parameterized constructor
    Teacher(){
        cout << "object created" << endl;
    }
    //parameterized constructor
    Teacher(string n, string s, string d, double sal){
        name = n;
        subject = s;
        dept = d;
        salary = sal;
    }
    //this pointer in parameterized constructor
    Teacher(string name, string subject, string dept){
        this->name = name;
        this->subject = subject;
        this->dept = dept;
        salary = 10000;
    }

    //copy constructor
    Teacher(Teacher &harsh){
        cout << "custom copy constructor called" << endl;        name = harsh.name;
        subject = harsh.subject;
        dept = harsh.dept;
        salary = harsh.salary;


    }
};

int main(){
    // Teacher t1; //object creation & default constructor called
    // Teacher t2; //object creation & default constructor called  

    // t2.name = "aditya";
    // cout<< t2.name<< endl;

    // t1.setSalary(50000);
    // t1.getSalary();

    //Teacher t3("aditya", "maths", "science", 50000);
    // cout << t3.name << " " << t3.subject << " " << t3.dept << endl;

    Teacher t4("rahul", "physics", "science");
    // t4.getdetails();

    //copy constructor
    Teacher t5(t4);
    t5.getdetails();
}






// g++ -o intro intro.cpp
// ./intro  
// encapsulation: binding data members and member functions together in a single unit
// data hiding: restricting access to some of the object's components
// abstraction: showing only essential things to the user and hiding the details
// class: user defined data type
// object: instance of a class
// properties: data members/attributes
// methods: member functions
// access specifiers: public, private, protected
// constructor: special member function with same name as class name, no return type, used to initialize objects
//constructor overloading: multiple constructors with different parameters
// default constructor: constructor with no parameters
// parameterized constructor: constructor with parameters
// this pointer: pointer that points to the current object
//--------------------------------------------------------------------------
//note----if there was no constructor then we have to initialize the data members of the object one by one
// t1.name = "aditya";
// t1.subject = "maths";
// t1.dept = "science";
// t1.salary = 50000; //salary is private so we cannot access it directly
// class Teacher {
// public:
//     string name;
//     string subject;
//     int salary;

//     // Constructor
//     Teacher(string n, string s, int sal) {
//         name = n;
//         subject = s;
//         salary = sal;
//     }
// };

// int main() {
//     // Constructor automatically called with given values
//     Teacher t1("Aditya", "Maths", 50000);

//     cout << t1.name << " teaches " << t1.subject
//          << " with salary " << t1.salary << endl;
// }


// ---------------------------------------------