#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define pi 3.12;
class Naga{
    string str;
public:
Naga(string s){
    str=s;
    cout<<"construtor"<<" "<<str<<endl;
}
    int method1(int a,int b){
        int sum = a + b;
        cout<<"hello calling"<<" "<<sum<<str<<endl;
    }
};
int main(){

    Naga obj("string");
    obj.method1(1,2);

}