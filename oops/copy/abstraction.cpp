//hiding all unecessary information and showing oonly the important ones
//easiest way to implement these are access modifiers
///In programming, it means you don’t need to know how something works internally, you just need to know what it does.
// Simplicity → Makes complex systems easier to use.
// (You don’t need to learn the engine mechanics to drive a car.)

// Security → Hides implementation details that shouldn’t be exposed.

// Flexibility → You can change the internal code later without affecting users.
// (For example, you can upgrade the car engine, but the driver still uses accelerator/brake the same way.)

// Maintainability → Makes big projects easier to manage, since different parts are separated.

#include <iostream>
#include <string>
using namespace std;

class shape{
    virtual void draw() =  0;  // pure virtual functions
};

class Circle : public shape {
    public:
        void draw() {
            cout << "drawing a circlee" ;
        }
};

int main() {
    Circle c1;
    c1.draw();
    return 0;
}


#include <iostream>
using namespace std;

// Abstract class (cannot be instantiated directly)
class Shape {
public:
    // Pure virtual function (no implementation here)
    virtual void draw() = 0;
};

// Derived class 1
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Circle ⚪" << endl;
    }
};

// Derived class 2
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing a Rectangle ▭" << endl;
    }
};

int main() {
    // We can use Shape* to point to different shapes
    Shape* shape1 = new Circle();
    Shape* shape2 = new Rectangle();

    shape1->draw(); // Output: Drawing a Circle ⚪
    shape2->draw(); // Output: Drawing a Rectangle ▭

    delete shape1;
    delete shape2;
    return 0;
}
