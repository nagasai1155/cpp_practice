#include<bits/stdc++.h>
using namespace std;

void swapping(int l,vector<int>&arr,int size){
    if(l>=size/2) return;

    swap(arr[l],arr[size-l-1]);
    swapping(l+1,arr,size);

}

int main(){
    int n;
    cout<<"enter size of array: ";
    cin>>n;

    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    swapping(0,arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}