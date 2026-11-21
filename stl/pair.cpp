#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class Naga{

    int a=12;
    public:
    Naga(){
        cout<<"constructor"<<endl;
    }
public:
    int method1(int a1){
      a *=a1;
      return a;

    }

    

};

int main(){
   
//     int x;
//     cout<<"enter the number: ";
//     cin>>x;
//     Naga obj1;
//   cout<<  obj1.method1(x);

  pair<int,int> arr={1,3};
  

  pair<int,int> arr1[]={{1,2},{1,4}};
  


  list<int> l;
  l.push_back(3);
  l.push_back(4);
  for(auto a:l){
    cout<<a<<" ";
  }



}