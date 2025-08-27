#include <iostream>
#include <string>
using namespace std;

class Teacher {
private:
    double salary;
    
public:
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
    //this pointer
    Teacher(string name, string subject, string dept){
        this->name = name;
        this->subject = subject;
        this->dept = dept;
        salary = 10000;
    }
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
   

};

int main(){
    // Teacher t1; //object creation & default constructor called
    // Teacher t2; //object creation & default constructor called  

    // t2.name = "aditya";
    // cout<< t2.name<< endl;

    // t1.setSalary(50000);
    // t1.getSalary();

    Teacher t3("aditya", "maths", "science", 50000);
    cout << t3.name << " " << t3.subject << " " << t3.dept << endl;

    Teacher t4("rahul", "physics", "science");
    t4.getdetails();

    // t3.getdetails();
    
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

