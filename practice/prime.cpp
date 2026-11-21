#include<iostream>
using namespace std;

bool findprim(int n){
    if(n<=1) return false;
    if(n==2 || n==3) return true;
    for(int i=2;i<n;i++){
        if(n %i==0) return false;
    }
    return true;
}
int main(){

    int n;
    cin>>n;
    if(findprim(n)){
        cout<<"prime"<<endl;
    }else{
        cout<<"it's not prime"<<endl;
    }

}