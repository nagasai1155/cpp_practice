//checking palindrome for the string.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool fun(string &str){
   int n= str.size();
   for(int i=0;i<n;i++){
    if(str[0] != str[n-1]) return false;
    
   }
   return true;
}
int main(){

    string s;
    cin>>s;
   bool ans= fun(s);
   if(ans== 0) cout<<"it is not an palindrome string"<<endl;
   else cout<<"it is an palindrome string";

}