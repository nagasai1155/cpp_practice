#include<iostream>
using namespace std;

int fact(int n){
    if(n <=1) return 1;
    int x =n*fact(n-1);
    return x;
}
int factorial(int n){
    int res =1;
    for(int i=1;i<=n;i++){
        res *=i;
    }
    return res;
}

int main(){
    //write a program factorial of an number
    int n;
    cin>>n;
    cout<<fact(n)<<endl;
    cout<<factorial(n);
}