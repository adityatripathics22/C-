//variables declared as static in a function are created and initialised once for the lifetime of the program. //in function

// agar humne static use kiya toh wo main function ke end hone tak rahega

#include <iostream>
#include <string>
using namespace std;

// function-----------
void fun(){
    static int x = 0;  //static lagne pr ye eak hi baar initialize hua aur tbtk rhega jbtk pura main function khtm na ho jaye
    cout << "x : " << x << endl;
    x++;
};

int main(){
    fun();
    fun();
    fun();
    return 0;
}

//class-------------------
// static variables  in a class are created and initialised once .they are shared by all the objects of the class..// in class 

// class A {
//     public:
//         int  x = 0;

//         void incx(){
//             x = x+1;
//         }
// };

// int main(){
//     A obj1;
//     A obj2;

//     obj1.x = 100;
//     obj2.x = 200;

//     cout << obj1.x << endl;
//     obj1.incx();  
//     cout << obj1.x << endl;  
//     obj1.incx();  
//     cout << obj1.x << endl;
//     obj1.incx();  
//     cout << obj2.x << endl;  
//     return 0;

// }


// static data members cannot be initialized directly inside the class (unless they are const integral types in C++11/14).

// #include <iostream>
// using namespace std;

// class A {
// public:
//     static int x;   // Shared by all objects

//     void incx() {
//         x = x + 1;
//     }
// };

// int A::x = 0;   // Definition + initialization (needed once)

// int main() {
//     A obj1, obj2;

//     obj1.incx();   // increases shared x → now x = 1
//     obj2.incx();   // increases shared x → now x = 2

//     cout << A::x << endl;   // Access static via class name → prints 2
//     cout << obj1.x << endl; // Also works → prints 2
//     cout << obj2.x << endl; // Same shared value → prints 2

//     return 0;
// }



//imp notesss---> function jab jab hum call krte hai toh variable initialize hota hai...
//mtlb ki 3 baar function call kiya toh value initialize hogi..par objects jab hum bnate hai toh constructor eak hi baar call 
//hota hai aur tbhi value initialize hoti hai isliye class ke haar object ke pass apna apna variable store hota hai aur wo main function 
//end tk stored rehta hai...




//--------------------------------------------------------------
// 1️⃣ Variables inside functions (local variables)
// int a = 10;

// Created every time the function is called.

// Destroyed when the function ends.

// New memory each call.

// static int b = 5;

// Created only once, the first time the function runs.

// Value persists across calls.


#include <iostream>
using namespace std;

void fun() {
    int a = 10;          // re-initialized each time
    static int b = 5;    // initialized once

    a++;
    b++;

    cout << "a = " << a << ", b = " << b << endl;
}

int main() {
    fun(); // a=11, b=6
    fun(); // a=11, b=7
    fun(); // a=11, b=8
}

// 2️⃣ Variables inside objects (data members)

// normal → Each object gets its own copy.

// static shared → Only one copy exists for all objects

#include <iostream>
using namespace std;

class A {
public:
    int normal;           // each object has its own
    static int shared;    // all objects share one
};

int A::shared = 0;  // definition

int main() {
    A obj1, obj2;

    obj1.normal = 10;
    obj2.normal = 20;

    obj1.shared = 100;   // changes shared for ALL
    obj2.shared = 200;   // overwrites the same shared variable

    cout << obj1.normal << endl; // 10
    cout << obj2.normal << endl; // 20
    cout << obj1.shared << endl; // 200
    cout << obj2.shared << endl; // 200
}

// 3️⃣ When are they initialized?
// Place	:  How it initializes  :	When it initializes
// Local var (int a = 5;)  :	Fresh value each time  :	Every function call
// Static local var (static int b = 5;)  :	Only once, keeps value	:  First function call (stays in memory)
// Normal data member (obj.normal )  :	Each object has its own  :	When the object is created
// Static data member (Class::shared)  :	Only one copy shared  :	Once at program start (or when defined)


// 4️⃣ Quick real-world analogy

// Local variable → Like a disposable cup 🥤 (new one every time you order).

// Static local variable → Like your personal water bottle 🚰 (same bottle, refilled).

// Normal data member → Each person has their own wallet 💳.

// Static data member → One family piggy bank 🏦 shared by everyone.