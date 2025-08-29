// #include <iostream>
// using namespace std;
// // A simple class without constructors-------------------
// class Teacher {
// public:
//     string name;
//     string subject;
//     int salary;
// };

// int main() {
//     Teacher t1;
//     // Manually initializing members
//     t1.name = "Aditya";
//     t1.subject = "Maths";
//     t1.salary = 50000;

//     cout << t1.name << " teaches " << t1.subject
//          << " with salary " << t1.salary << endl;
// }

// //class with constructor--------------------

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
//         << " with salary " << t1.salary << endl;
// }


// 🔹 Key Properties of Constructors

// Same name as the class

// class Teacher {
//     Teacher() { ... }
// };


// No return type (not even void).

// Automatically called when object is created.

// Can be overloaded (you can have default, parameterized, copy constructors).

// If you don’t define one, the compiler gives you a default constructor.

// 🔹 Why useful in real life?

// Imagine you’re making a BankAccount class:

// Every account should have an account number, holder name, and balance.

// A constructor ensures every BankAccount object starts valid (instead of being empty or invalid).