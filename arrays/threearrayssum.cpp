#include<iostream>
using namespace std;
//declare 3 arrays and add sum of  the one and two arrays to third array.
int main(){
    int arr1[5];
    int arr2[5];
    int arr3[5];
      cout<<"array 1"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr1[i];
    }
    cout<<"arrays 2"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr2[i];
    }
cout<<"arrays 3"<<endl;
    for(int i=0;i<5;i++){
        arr3[i]= arr1[i] + arr2[i];
        cout<<arr3[i]<<" ";
    }



}