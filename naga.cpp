#include<iostream>
using namespace std;
#define max 45;

class Naga{
    private: 
    int age;
    string name;

    public:

    Naga(int age, string name){
        this->age = age;
        this->name= name;
    }
    void display(){
        cout<<age<<" "<<name<<endl;
    }
};
int main(){


    int arr[] = {1,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(auto i : arr){
        cout<<i<<" "<<endl;
    }
   // object
    Naga s (3,"nagasai");
    s.display();
}