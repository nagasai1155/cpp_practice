#include<iostream>
#include<string>
using namespace std;

int main(){
   string s ="nagasai balam";

    for(int i=0;i<s.length();i++){
         
         if(i==0 || i == s.length()-1){
            s[i] =toupper(s[i]);
         }else if(s[i]==' '){
            s[i-1] = toupper(s[i-1]);
            s[i+1] =toupper(s[i+1]);
         }

    }
    cout<<s<<endl;
}

