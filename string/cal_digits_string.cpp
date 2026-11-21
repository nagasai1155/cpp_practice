#include<iostream>
using namespace std;

int main(){

    string s;
    cin>>s;
    int sum=0,cnt=0;
    for(int i=0;i<s.length();i++){
        if(s[i] >='0' && s[i] <='9'){
                cnt++;
                sum +=(s[i]-'0');
        }
        
    }
    cout<<sum<<" "<<cnt;
}