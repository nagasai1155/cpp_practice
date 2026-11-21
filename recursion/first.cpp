#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// void fun(int i,int n){
//     if(n<1){
//         return;
//     }
//     cout<<n<<" ";
//     fun(i,n-1);
// }

// int main(){

//     int n;
//     cin>>n;
//     fun(1,n);
// }

void fun(int n){
   
    if(n<0){
        return;
    }
    cout<<"sai";
    fun(n-1);

}

int main(){

fun(4);
}