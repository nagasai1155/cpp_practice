#include<iostream>
#include<bits/stdc++.h>
using namespace std;


 bool isarmstrong(int n){
     int orig=n;
     int sum =0;
    string num_str = to_string(n);
    int digits = num_str.length();
    
  
    while(n>0){
        int lastdigit = n %10;
        sum +=pow(lastdigit,digits);
        n =n/10;


    }
    return sum ==orig;

 }
int main(){
    int n;
    cin>>n;

    if(isarmstrong(n)){
        cout<<"is "<<endl;
    }else{
        cout<<"is not"<<endl;
    }
}