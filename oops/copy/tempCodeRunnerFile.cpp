#include <iostream>
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

