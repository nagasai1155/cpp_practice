#include<iostream>
using namespace std;

int fun(int num){
    int reverse=0;
    while(num>0){
        int lastdigit= num%10;
        reverse =reverse *10 +lastdigit;
        num = num/10;
    }
    return reverse;
}

int main(){
    //reverse a number
    int num;
    cin>>num;
    int reversenum=fun(num);
    cout<<"reversed number is: "<<reversenum<<endl;
}