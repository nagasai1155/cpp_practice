#include<iostream>
using namespace std;

int main(){
    string ss = "maaaam";
    for(int i=0;i<ss.length();i++){
        if(ss[i] != ss.length()-i-1){
            cout<<"not palindrome"<<endl;
            break;
        }
    }
}