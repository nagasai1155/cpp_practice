#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(){
      


    int n;
    cout<<"size of vector: ";
    cin>>n;
    vector<int> name;
    int value;
    for(int i=0;i<n;i++){
        cin>>value;
        name.push_back(value);
    }
    for(int i=0;i<n;i++){
        cout<<name[i]<<" ";
    }

}