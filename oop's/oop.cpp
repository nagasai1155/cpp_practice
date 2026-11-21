#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//inheritance in c++

class Car{
  public:
   void method1(){
    cout<<"method1"<<endl;
   }

   void method2(){
    cout<<"method2"<<endl;
   }


};




int main(){
    //static object creation

    // Car c1;
    // c1.method1();

    //dynamic heap allocatoin ;
    Car* c2 = new Car();
    c2->method1();
    delete c2;

}