#include<iostream>
using namespace std;


int main(){
    int arr[]={100,2,3,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int mid = n/2;
    for(int i=0;i<mid;i++){
        for(int j=i+1;j<mid;j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
            arr[i] = arr[j];
            arr[j]=temp;
            }
        }
    }
    //now second half descending
    for(int i=mid;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[j] > arr[i]){
                int temp= arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}