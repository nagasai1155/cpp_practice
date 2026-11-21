#include<iostream>
using namespace std;

bool fun(int n){
    if(n<=1) return false;
    if(n==2 || n==3) return true;
    for(int i=2;i<=n;i++){
        if(n % i ==0) return false;
    }
    return true;
}


int main(){
    int num;
    cin>>num;
    bool result =fun(num);
    cout<<result<<endl;
    if(result) {
        cout<<"it is an prime number"<<endl;
    }else{
        cout<<"it is not prime "<<endl;
    }
}