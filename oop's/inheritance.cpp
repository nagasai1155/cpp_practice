#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//1.single level inheritacne



// class Vehicle{//base class or parent
// public:
//    void start(){
//     cout<<"vehicle was started"<<endl;
//    }

// };

// //derived class

// class Car :public Vehicle{
//     public:
//     void drive(){
//         cout<<"Driving the car"<<endl;
//     }
// };


//2.Multiple Inheritance → Multiple bases → One derived

class Vehicle1{ //one base class
    public:
    void method1(){
        cout<<"vehicle is running"<<endl;
    }
};

//two base class

class Vehicle2{
    public:
    void method2(){
        cout<<"vehicle was going"<<endl;
    }
};

//derived class

class Car:public Vehicle1,public Vehicle2{
    public:
    void methodcar(){
        cout<<"this is method car driving"<<endl;
    }
};

int main(){

    Car c1;
    c1.method1();
    c1.method2();
    c1.methodcar();


}


//3.multilevel   Inheritance in a chain: A → B → C  

// #include <iostream>
// using namespace std;

// class Animal {
// public:
//     void eat() {
//         cout << "Eating food" << endl;
//     }
// };

// class Mammal : public Animal {
// public:
//     void breathe() {
//         cout << "Breathing air" << endl;
//     }
// };

// class Dog : public Mammal {
// public:
//     void bark() {
//         cout << "Barking" << endl;
//     }
// };

// int main() {
//     Dog d;
//     d.eat();      // From Animal
//     d.breathe();  // From Mammal
//     d.bark();     // From Dog
//     return 0;
// }






//4.hierarchical One base → Multiple derived classes

// #include <iostream>
// using namespace std;

// class Vehicle {
// public:
//     void start() {
//         cout << "Vehicle started" << endl;
//     }
// };

// class Car : public Vehicle {
// public:
//     void drive() {
//         cout << "Car is driving" << endl;
//     }
// };

// class Bike : public Vehicle {
// public:
//     void ride() {
//         cout << "Bike is riding" << endl;
//     }
// };

// int main() {
//     Car c;
//     Bike b;

//     c.start();
//     c.drive();

//     b.start();
//     b.ride();
//     return 0;
// }


//5.5. Hybrid Inheritance
// Combination of two or more types
// Example: Hierarchical + Multiple → also forms the Diamond Problem.

// #include <iostream>
// using namespace std;

// class Person {
// public:
//     void showPerson() {
//         cout << "I am a person" << endl;
//     }
// };

// class Student : public Person {
// public:
//     void showStudent() {
//         cout << "I am a student" << endl;
//     }
// };

// class Employee : public Person {
// public:
//     void showEmployee() {
//         cout << "I am an employee" << endl;
//     }
// };

// // Multiple inheritance from two derived classes
// class WorkingStudent : public Student, public Employee {
// public:
//     void showWorkingStudent() {
//         cout << "I am a working student" << endl;
//     }
// };

// int main() {
//     WorkingStudent ws;

//     // ws.showPerson(); // ❌ Ambiguity: Person inherited twice
//     ws.showWorkingStudent();

//     // To resolve ambiguity, use scope resolution
//     ws.Student::showPerson();
//     ws.Employee::showPerson();

//     return 0;
// }
