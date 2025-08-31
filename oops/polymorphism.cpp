
//poly mtlb bahut sari aur morph ka matlb forms
//POLYMORPHISM is the ability of objects to take on different forms
//or behave in different ways dependng on the context in which they are used

//there are 2 types of this:----

//1.COMPILE-TIME-POLYMORPHISM(method overloading & operator overloading)----------------

//example of METHOD OVERLOADING:->

// class Point {
//     int x, y;
// public:
//     Point() { x = 0; y = 0; }                // Default constructor
//     Point(int a) { x = a; y = 0; }           // Constructor with one parameter
//     Point(int a, int b) { x = a; y = b; }    // Constructor with two parameters
// };

//example of FUNCTION OVERLOADING:->

// class Print {
// public:
//     void show(int i) { std::cout << "Integer: " << i << std::endl; }
//     void show(double d) { std::cout << "Double: " << d << std::endl; }
//     void show(const std::string& s) { std::cout << "String: " << s << std::endl; }
// };

//example of OPERATOR OVERLOADING(didnt get this)??????????????????????????????????????

//Operator overloading in C++ is a feature that allows you to redefine the way operators (like +, -, *, etc.) work for user-defined types (such as classes). 
//By overloading an operator, you can specify what should happen when that operator is used with objects of your class, making your objects behave more like built-in types.
//For example, you can define how the + operator adds two objects of a class, or how == compares them. This improves code readability and allows intuitive operations on custom types.

// #include <iostream>
// using namespace std;

// class Number {
//     int value;
// public:
//     Number(int v) : value(v) {}

//     // Overload + operator
//     Number operator + (const Number& obj) {
//         return Number(value + obj.value);
//     }

//     void show() {
//         cout << "Value: " << value << endl;
//     }
// };

// int main() {
//     Number n1(5), n2(10);
//     Number n3 = n1 + n2; // Uses overloaded +
//     n3.show(); // Output: Value: 15
//     return 0;
// }

//2.RUN-TIME-POLYMORPHISM-----------------------------------
//also known as dynamic polymorphism(function overriding & virtual functions)

//FUNCTION OVERRIDING means parent and child both contain the same function with different implementation
//the parent function is set to be overridden

// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     void speak() {
//         cout << "Animal speaks" << endl;
//     }
// };

// class Dog : public Animal {
// public:
//     void speak() { // This overrides Animal's speak()
//         cout << "Dog barks" << endl;
//     }
// };

// int main() {
//     Animal a;
//     Dog d;
//     a.speak(); // Output: Animal speaks
//     d.speak(); // Output: Dog barks
//     return 0;
// }

//agar dono child aur parent mei function same hai toh agar hum
//child class ka object banayege aur function ko call karenge to child classs
//ka hi function run hoga means uske function ki priority jyada hogi

//VIRTUAL FUNCTIONS:->

#include <iostream>
using namespace std;

class Device {
public:
    virtual void turnOn() {
        cout << "Device is turned on" << endl;
    }
};

class TV : public Device {
public:
    void turnOn() override {
        cout << "TV shows a picture" << endl;
    }
};

class Fan : public Device {
public:
    void turnOn() override {
        cout << "Fan starts spinning" << endl;
    }
};

class AC : public Device {
public:
    void turnOn() override {
        cout << "AC starts cooling" << endl;
    }
};

void useRemote(Device* d) {
    d->turnOn(); 
}

int main() {
    TV tv;
    Fan fan;
    AC ac;

    useRemote(&tv);  // Output: TV shows a picture
    useRemote(&fan); // Output: Fan starts spinning
    useRemote(&ac);  // Output: AC starts cooling

    return 0;
}

// Suppose you have a remote control (base class pointer) and different devices: a TV, a fan, and an air conditioner (derived classes). The remote has a button called "turnOn" (virtual function). Each device responds differently when you press "turnOn":

// TV shows a picture
// Fan starts spinning
// AC starts cooling
// You don’t need to know which device you’re controlling; you just press "turnOn" and the correct action happens for that device. This is because each device has its own way of handling "turnOn", just like each derived class overrides the virtual function.

// In C++:

// The remote control is like a base class pointer.
// The "turnOn" button is a virtual function.
// Each device (TV, Fan, AC) is a derived class with its own implementation of "turnOn".
// When you use the remote (base pointer) to call "turnOn", the correct device’s function runs, even if you don’t know which device it is at compile time.

// A virtual function in C++ is a member function declared in a base class using the virtual keyword. It enables dynamic (run-time) polymorphism, allowing derived classes to override the function and provide their own implementation.

// When you call a virtual function through a base class pointer or reference that actually points to a derived class object, C++ uses a mechanism called the virtual table (vtable) to determine at runtime which function implementation to invoke. This is known as dynamic binding or late binding.

// Key technical points:

// The base class declares a function as virtual.
// Derived classes can override this function.
// When using a base class pointer/reference to a derived object, the overridden function in the derived class is called.
// This allows for flexible and extensible code, where the exact function called is determined at runtime, not compile time.

//The virtual keyword in C++ tells the compiler to use dynamic (run-time) binding for a function. When a function is declared as 
//virtual in a base class, and you override it in a derived class, calling that function through a base class pointer or reference will execute the derived class’s version.

//This enables run-time polymorphism, allowing the correct function to be called based on the actual object type, not just the pointer or reference type. 
//It’s essential for flexible and extensible object-oriented code.