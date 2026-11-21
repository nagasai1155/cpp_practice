#include<iostream>
using namespace std;
class Naga{
    public:
    bool palind(int n){
       int original =n;
       int reverse=0;
       while(n>0){
        int lastdigit = n%10;
        reverse = reverse*10 + lastdigit;
        n =n/10;
       }
       return original==reverse;
    }
};

int main(){
    int n;
    cin>>n;
Naga s;
    if(s.palind(n)){
        cout<<"it's a palindrom"<<endl;
    }
    else{
        cout<<"it's not "<<endl;
    }
}