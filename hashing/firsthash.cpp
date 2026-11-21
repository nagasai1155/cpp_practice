#include<iostream>
using namespace std;


int main(){

     int n;
     cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   int hash[20]={0};
   for(int i=0;i<n;i++){
    hash[arr[i]] +=1;
   }
   for(int i=0;i<n;i++){
    cout<<i<<": "<<hash[i]<<" ";
   }
}