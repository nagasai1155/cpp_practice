#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//compiler time and runtime polymorphism

//1.compiler polymorphism.

//example:
#include <iostream>
using namespace std;

class PrintData {
public:
    void print(int i) {
        cout << "Printing int: " << i << endl;
    }
    void print(double d) {
        cout << "Printing double: " << d << endl;
    }
    void print(string s) {
        cout << "Printing string: " << s << endl;
    }
};

int main() {
    PrintData pd;
    pd.print(5);
    pd.print(3.14);
    pd.print("Hello");
    return 0;
}




// B. Runtime polymorphism
// (also called Dynamic Polymorphism) — decided at runtime.
// Achieved using:

// Inheritance + Virtual Functions

// Example 3 — Virtual Functions
// cpp
// Copy
// Edit
#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() {  // virtual keyword enables runtime polymorphism
        cout << "Drawing Shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    Shape* shape1 = new Circle();    // Base pointer to Circle
    Shape* shape2 = new Rectangle(); // Base pointer to Rectangle

    shape1->draw(); // Output: Drawing Circle (runtime binding)
    shape2->draw(); // Output: Drawing Rectangle (runtime binding)

    delete shape1;
    delete shape2;
}




// Pure Virtual Functions
// A pure virtual function is a function in a base class that must be overridden in any derived class.
// It’s declared like this:

// cpp
// Copy
// Edit
// virtual void functionName() = 0;
// When a class contains at least one pure virtual function, it becomes an abstract class and cannot be instantiated.

// Example — 100% Polymorphism using Abstract Class
// cpp
// Copy
// Edit
// #include <iostream>
// using namespace std;

// Abstract class
class Shape {
public:
    // Pure virtual function
    virtual void draw() = 0;

    // You can still have normal functions
    void info() {
        cout << "This is a shape.\n";
    }
};

// Derived class: Circle
class Circle : public Shape {
public:
    void draw() override {
        cout << "Drawing Circle" << endl;
    }
};

// Derived class: Rectangle
class Rectangle : public Shape {
public:
    void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

int main() {
    // Shape s;  ❌ ERROR: Cannot create object of abstract class

    Shape* s1 = new Circle();
    Shape* s2 = new Rectangle();

    s1->draw(); // Output: Drawing Circle
    s2->draw(); // Output: Drawing Rectangle

    delete s1;
    delete s2;
}
Key Points
Abstract Class → Has at least one pure virtual function.

Cannot create object of abstract class directly.

Enforces derived classes to implement the pure virtual function.

Achieves 100% runtime polymorphism.

