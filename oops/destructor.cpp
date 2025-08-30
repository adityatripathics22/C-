#include <iostream>
#include <string>
using namespace std;

class Student{
public:
    string name;
    //double cgpa;
    double* cgpaPtr; //not pointing anywere

    Student(string name , double cgpa){
        this->name = name;
        //this->cgpa = cgpa;
        cgpaPtr = new double; //dynamic memory allocation...pointing to some memory in heap
        *cgpaPtr = cgpa;

    }
    //destructor (same name as class with ~ before it)
    ~Student(){ 
        cout << "Destructor called" << endl;
        delete cgpaPtr; //freeing the memory allocated in heap
    }

    void display() {
        cout << "Name: " << name << endl << "cgpa: " << *cgpaPtr << endl;
    }

};

int main(){
    Student s1("harsh", 8.9);
    s1.display();




    return 0;
}
//destructor is automatically called when object goes out of scope
//destructor is used to free memory allocated in heap
//if we dont use destructor then it will lead to memory leak
//destructor cannot be overloaded
//destructor does not take any parameters
//destructor does not have return type
//destructor is called only once for an object
