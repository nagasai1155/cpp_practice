#include<bits/stdc++.h>
using namespace std;
// sum of product of all pairs in an array

int main(){
    int arr[5]={1,2,3,4,5};
    int sum=0;
    for(int i=0;i<5;i++){
         for(int j=i+1;j<5;j++){
            sum = sum + arr[i] *arr[j];
         }
    }
    cout<<"sum of product of all pairs is: "<<sum<<endl;
    return 0;
}