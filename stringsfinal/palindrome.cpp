#include<iostream>
#include<bits/stdc++.h>
using namespace std;


bool check_palindrome(string &s){
    if(s.length() ==1 ) return true;

    int n = s.length();

    for(int i=0;i<n;i++){

        if(s[i] != s[n-i-1]){
            return false;
        }
    }
    return true;    
}

int main(){
    string s;
    cin>>s;
  
    if(check_palindrome(s)){
        cout<<"string is palindrome"<<endl;
    }else{
        cout<<"string is not palindrom"<<endl;
    }
  
    return 0;
}