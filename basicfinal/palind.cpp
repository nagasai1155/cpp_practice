#include<iostream>
using namespace std;

bool ispalin(int n){
    if(n <=1) return false;
    int original =n;
    int rev =0;
    while(n>0){
        int lastdigit = n%10;
        rev = rev*10 +lastdigit;
        n /=10;
    }
    return original==rev;
}

int main(){

    int num;
    cin>>num;

    if(ispalin(num)){
        cout<<"is palindrome"<<endl;
    }
    else{
        cout<<"is not "<<endl;
    }
}